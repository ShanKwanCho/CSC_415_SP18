# csc415-p2

This program does asking the users to copy that users want and give the result of the output that the users want to copy and to destination. 

This program is written in C language.

filecopy.c Version 1.0 


~Command to build the project 
Nano filecopy.c 

~Command to run the project 
Compile gcc filecopy.c 
./a.out 

~Code explanation 
First of all, include all the previllages that essential for the program 
In the main file , declare the variables  welcome printout, asking the sources from
The user, get the source file and ask again the destination that users want to copy to. And copy the file checking the condition. Then, copy the source and write into destination. And copy the file content using algorithm in the Section 2.3 (Figure 2.4) of 415 textbook. After that close the files and print out the bytes copied result including buffer content and line numbers. For more detail, please look comment in the source files filecopy.c

// diff 
Command ~ diff file1 file2 .... 
No differences will show nothing output.
Differences will show size content and detail info. 

// strace = the interface between user and kernel space. Design not to confuse with Standard C library. Benefits to get information about the system calls during running process. 

csc415@csc415-vb ~/Desktop/FileCopy $ strace  -c open ls 
Couldn't get a file descriptor referring to the console
% time     seconds  usecs/call     calls    errors syscall
------ ----------- ----------- --------- --------- ----------------
34.23    0.000560          20        28        22 open
12.59    0.000206          23         9           mmap
10.88    0.000178          18        10         5 ioctl
7.76    0.000127          18         7           fstat
6.60    0.000108          27         4           mprotect
5.50    0.000090          15         6           close
4.83    0.000079          20         4         3 stat
4.58    0.000075          19         4           brk
4.34    0.000071          24         3           read
3.79    0.000062          62         1         1 access
2.20    0.000036          18         2           munmap
1.53    0.000025          25         1           execve
1.16    0.000019          19         1           arch_prctl
0.00    0.000000           0         1           write
------ ----------- ----------- --------- --------- ----------------
100.00    0.001636                    81        31 total
csc415@csc415-vb ~/Desktop/FileCopy $ 

During execution, we can track the time and seconds of each call to the system.  Each time user call to the system calls and shows also the errors and the more information of the file content such as what the code does in the program by the time run the program during execution. 

