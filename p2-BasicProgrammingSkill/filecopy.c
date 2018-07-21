//
//  FILECOPY.c
//
//
//  Created by ShanCho on 2/23/18.
//
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    
    // declare variables
    int bytesRead;
    char source[200], destination[200], buffer[27];
    int copiedTotal;
    
    // welcome printout
    printf("\n Welcome to the File Copy Program by ShanKwanCho!");
    
    // get source file from user
    printf("\n Enter the name of the file to copy from:");
    //scan the user input(source)
    scanf("%s", source);
    
    //  get destination file from user
    printf("\n Enter the name of the file to copy to:");
    //gets(destination);
    scanf("%s", destination);
    
    //copy the file (Read only file)
    int fd_in = open(source, O_RDONLY);
    // check condition
    if(fd_in < 0)
    {
        printf("\n Source file doesn't exist.\n");
        return 1;
    }
    
    // copy the source and write into destination
    int destination_out = open(destination, O_RDWR|O_CREAT|O_EXCL, 700);
    
    // copy file content
    int bufferNum = 0;
    printf ("\n Buffer Content" );
    while((bytesRead = read(fd_in,buffer,27)) > 0) {
        write(destination_out,buffer,bytesRead);
        printf("\n Buffer content line <%d>", bufferNum );
        printf("\n %s", buffer);
        printf("\n");
        copiedTotal += bytesRead;
    }
    
    // close files
    close(fd_in);
    close(destination_out);
    
    // print out the number of bytes copied
    printf("\n File Copy Successful, %d bytes copied", copiedTotal);
    printf("\n\n");
    return 0;
    
    
}

