![compile](https://github.com/user-attachments/assets/cdc72021-62f7-46e4-9be9-049edfe51f29)

$ gcc ex1.c -o ex1

$ file ex1 

ex1: ELF 64-bit LSB pie executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, BuildID[sha1]=7f9897fc5a65bed5584312629a6c2de58f7effb8, for GNU/Linux 3.2.0, not stripped

$ readelf -h ex1

>> Questions :

>Quelle est l'adresse du point d'entrée ?

>Combien d'en-têtes de programme y a-t-il ?

>S'agit-il d'un fichier ELF 32 bits ou 64 bits ?

$ objdump -d -Mintel ex1  # Disassemble the executable sections

$ objdump -h ex1  # Display the contents of the section headers
