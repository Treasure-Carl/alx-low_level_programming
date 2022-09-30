root@63b553156447:/alx-low_level_programming/0x09-static_libraries# ls
0-isupper.c  1-isdigit.c  2-strchr.o   3-puts.c     4-isalpha.o  9-strcpy.c
0-isupper.o  1-isdigit.o  2-strlen.c   3-puts.o     4-strpbrk.c  9-strcpy.o
0-memset.c   1-memcpy.c   2-strlen.o   3-strcmp.c   4-strpbrk.o  libmy.a
0-memset.o   1-memcpy.o   2-strncpy.c  3-strcmp.o   5-strstr.c   main.h
0-strcat.c   1-strncat.c  2-strncpy.o  3-strspn.c   5-strstr.o   _putchar.c
0-strcat.o   1-strncat.o  3-islower.c  3-strspn.o   6-abs.c      _putchar.o
100-atoi.o   2-strchr.c   3-islower.o  4-isalpha.c  6-abs.o
root@63b553156447:/alx-low_level_programming/0x09-static_libraries# gcc -c *.c
root@63b553156447:/alx-low_level_programming/0x09-static_libraries# ar -rc libmy.a *.o
root@63b553156447:/alx-low_level_programming/0x09-static_libraries# ranlib libmy.a     root@63b553156447:/alx-low_level_programming/0x09-static_libraries# nm libmy.a

0-isupper.o:
0000000000000000 T _isupper

0-memset.o:
0000000000000000 T _memset


