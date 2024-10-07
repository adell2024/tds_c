$ gcc ex1.c -o ex1

$ file ex1 

ex1: ELF 64-bit LSB pie executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, BuildID[sha1]=7f9897fc5a65bed5584312629a6c2de58f7effb8, for GNU/Linux 3.2.0, not stripped

$ readelf -h ex1

ELF Header:
  Magic:   7f 45 4c 46 02 01 01 00 00 00 00 00 00 00 00 00
  
  Class:                             ELF64
  
  Data:                              2's complement, little endian
  
  Version:                           1 (current)
  
  OS/ABI:                            UNIX - System V
  
  ABI Version:                       0
  
  Type:                              DYN (Position-Independent Executable file)
  
  Machine:                           Advanced Micro Devices X86-64
  
  Version:                           0x1
  
  Entry point address:               0x1060
  
  Start of program headers:          64 (bytes into file)
  
  Start of section headers:          13976 (bytes into file)
  
  Flags:                             0x0
  
  Size of this header:               64 (bytes)
  
  Size of program headers:           56 (bytes)
  
  Number of program headers:         13
  
  Size of section headers:           64 (bytes)
  
  Number of section headers:         31
  
  Section header string table index: 30

$ objdump -d ex1  # Disassemble the executable sections

$ objdump -h ex1  # Display the contents of the section headers
