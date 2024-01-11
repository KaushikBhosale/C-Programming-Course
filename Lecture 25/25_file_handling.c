                                // FILE HANDLING
                                // *************

/* WHY DO WE NEED A FILE HANDLING ? Purpose of files in C :

> Files are used to store content hence reducing the program's size.
> We can read or access data from files.
> The data in files remain stored even after the program's execution is terminated

*/

/* VOLATILE MEMORY vs NON - VOLATILE MEMORY

Files are stored in non-volatile memory.
To understand what a non-volatile memory is,
we have to see the difference between volatile and non-volatile memory.

                VOLATILE MEMORY            |                   NON- VOLATILE MEMORY
                                           |                   
The data can only remain in it while the   |     The data will also be present in it while the 
computer’s power is on.                    |     computer’s power is off.
                                           |           
Can only hold information when having a    |     Can also hold information, in case of inconstant 
constant power supply                      |     power supply
                                           |           
Will hold data for a short period.         |     Will hold data for a long term.
                                           |           
RAM is an example                          |     Hard Disk is an example
                                           |
*/

/* WHY DO WE NEES FILES

> when a C program is terminated, the data stored in a RAM is lost.
> Storing in a file will preserve our data even after the program terminates.
> RAM is not able to handle the quite large amount of data due its small size relative to tha hard disk.
> It is easy to transfer data as files.

*/

/* Types of Files:

There are two types of files:

1. Text Files
2. Binary Files

1. Text Files:

> They store data in simple text format.
> They are directly readable.
> No software is required to access them.
> An example is a .txt file.

2. Binary Files:

> Binary files stores data in 01 i.e., binary format.
> They are not directly readable.
> An application or software is required to read binary files.
> An example is a .doc file.

*/

/* FILE OPERATIONS IN C :

In C we can perform these high level operations on files:

1. Creating a File:
2. Opening a File:
3. Closing a File:
4. Read/Write to a file:

1. Creating a File:
    We can create a file using C language, in any directory, without even leaving our compiler.
    We can select the name or type we want our file to have, along with its location.

2. Opening a File:
    We can open an existing file and create a new file and open it using our program.
    We can perform different operations on a file after it has been opened.

3. Closing a File:
    When we are done with the file, meaning that we have performed whatever we want to perform on our file,
    we can close the file using the close function.

4. Read/Write to a file:
    After opening a file, we can access its contents and read, write, or update them.

*/

/* FUNCTIONS IN FILE I/O AND THEIR MODES IN C

While working with files in C is that we have to declare a pointer of the File type to work with files.
This DEclaration helps us to work with files through C program.

MODES USED ALONG WITH THE FUNCTIONS.

We have to learn about different modes used along with these functions as a parameter.
The following are the modes:

        r   : opens a file for reading.
        w   : opens a file for writing. It can also create a new file.
        a   : opens a file for appending.
        r+  : opens a file for both reading and writing but cannot create a new file.
        w+  : opens a file for both reading and writing. Can creates a new file if it does not exist.
        a+  : opens a file for both reading and writing(append).Can creates a new file if it does not exist.
              Read the file from begining but writing can only append to file.
*/

/* OPENING A FILE OR CREATING OR EDITING A FILE

> stdio.h contains a functions for opening a files in C.
> SYNTAX for opening a file in standard I/O is :

                        FILE *ptr;

                        ptr = fopen("fileopen","mode");

For Example  :
                        ptr = fopen(D:\\file.txt”,”r”); // open file for read mode
                        ptr = fopen(D:\\file.txt”,”w”); // open file for write mode

*/

/* CLOSING FILE

> Closing an open file is one of the most crucial steps while dealing with C.
> Files does not automatically get closed after working with them. We have to close them manually.
> To close a file, we have to use the fclose() library function.
  Syntax:

        fclose(fptr); // fptr is a file pointer associated with the file to be closed

*/

/* READING A FILE :

> To read a file in C, we use a function fscanf().
> This function is a file version of scanf(). Like scanf() used to get input from the keyboard,
> it gets its input from a file and prints it onto the screen.
> We have to send the file pointer as an argument for the program to be able to read it.
> The file has to be opened in r mode, i.e., read mode, to work properly for fsanf().

 Example :
            ptr = fopen(“D:\\file.txt”,”r”);
            char str[128] = "Welcome to code with Harry";
            fscanf(ptr, "%s", str);
            printf("%s",str );

*/

/* WRITING TO A FILE :

> In order to write to a file, we use the function fprintf().
> The function is a file version of printf().
> Same as we used to print text onto the screen using printf(),
> We use fprintf() to print text inside the file.
> We have to send the file pointer as an argument for the program to be able to print it into the file.
> The file has to be opened in w mode, i.e. write mode, to work properly for fsanf().

>>> // NOTE : Using write mode the previous content is deleted and new content is wrinten and saved
              So to Add only new content use append mode
Example:

        char str[128] = "Empty";
        ptr = fopen(“D:\\file.txt”,”w”);
        fprintf(ptr, "%s", str);
-----------------------------------------------------
        ptr = fopen(“D:\\file.txt”,”a”); // append mode to add new content
*/


// CREATED DEMO FILE NAMED : 25_FILEHANDLING.txt and writen any content in that file.
#include <stdio.h>

int main()
{
    // 1. Reading a file 
    FILE* ptr = NULL; // Created FilePointer Pointing to Nothing(NULL POINTER)
    char str[150];
    ptr = fopen("25_FILEHANDLING.txt","r"); // Opened File in READ MODE
    printf("\nFile Opened succesfully in READ MODE");
    fscanf(ptr,"%s",str); // scans the 1st Word or only unsing fscanf() library function
    printf("\n%s <-- String Scaned from the File",str); // printing output on console
    fclose(ptr);
    printf("\nFILE CLOSED SUCESSFULLY");

    // 2. Writing to a file 
    char message[100] = "Wrting a file from code in c programing using file handling concept";
    ptr = fopen("25_FILEHANDLING.txt","w"); // Opened File in WRITE MODE
    printf("\n\nFile Opened succesfully in WRITE MODE");
    fprintf(ptr,"%s",message);
    printf("\nFile WRITEN SUCCESFULLY");
    fclose(ptr);
    printf("\nFILE CLOSED SUCESSFULLY");

    // NOTE : using write mode the previous content is deleted and new content is wrinten and saved
    // APEND MODE
    char apeend[100] = "\n****************************\n********************\nTHat's it BYEE";
    ptr = fopen("25_FILEHANDLING.txt","a"); // Opened File in APPENDING MODE
    printf("\n\nFile Opened succesfully in APPENDING MODE");
    fprintf(ptr,"%s",apeend);
    printf("\nFile APEND SUCCESFULLY");
    fclose(ptr);
    printf("\nFILE CLOSED SUCESSFULLY");

    ptr = NULL; // NULL POINTER

    return 0;
}
