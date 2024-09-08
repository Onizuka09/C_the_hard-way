# C the hardway 
my implementation of the learn  C the hard-way exercises 
### Ex16 - Date 08/09/2024 
**what i learned:**<br>  
- assertion test if a ptr is NULL: `assert(p != NULL)`
- also learned about the `strdup(myst)`:<br>
It's a function that returns a pointer to a string which is a duplicate of the `myst` string, it copies the string to the memory it creates.<br> 
This is used when allocating a memory to a struct and has a string as one of its elements, gives the struct an absolute ownership to the string , when a user free the `myst` string, the content of the copied string would still exist.<br>
NOTE: (don't forget to free the copied str later when freeing the struct)  
- we can also check mem leaks by using valgrind or GDB: <br>
in GDB:
```bash 
gcc -Wall -g -fsanitize=address  ex16.c -o ex16 
gdb ./ex16 
(gdb) run 
```
valgrind (installed using apt):
```bash 
valgrind --leak-check=full ./ex16 
```
