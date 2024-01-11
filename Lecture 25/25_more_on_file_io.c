                            // MORE ON FILE I/O IN C 
                            // *********************


//  We have already covered file pointer, opening/closing, reading/writing to a file,
//  and the different modes of opening a file.
//  Now we will see a few more built-in functions related to files in C.
//  By using these functions, we can read or write data from or to the files, character by character,
//  or in the form of a full string.

/* MODES USED ALONG WITH THE FUNCTIONS AND ITS DESCRIPTION.

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

/* OTHER FILE I/O FUNCTIONS IN C

> fputc
> fputs
> fgetc
> fgets

*/

/* fputc

> fputc() is used to write characters to the file. The C in the name of the function stands for character.
> The function takes two parameters as input.
> The first one is the single character that we want to input
  to the file.
> The second parameter is the pointer to the file.
> On successful implementation, it returns the character on to the screen.
> If it couldn't do so in case of any other issue, it would display an EOF exception.
  EOF(End of file character) stands for End of File. You will see a lot of this exception while working with files.

Syntax:

            type fputc(‘character’,file_pointer);
Example:

            int fputc(‘a’,ptr);

*/

/* fputs

> fputs() is used to write a null-terminated string to the file.
> The S in the name of the function stands for string.
> It also takes two parameters, the same as fputc().
> One is the variable storing the string and the second one is the pointer to the file.
> A null-terminated string is a character string that can be terminated by a null character 
  i.e., \0. You do not have to bother much about null-terminated strings as our computer automatically 
  converts character strings to null-terminated strings.

Syntax:

            fputs(“string”,file_pointer);
Example:

            fputs("code with harry",ptr);

*/

/* fgetc

> fgetc() works exactly the opposite of fputc(). It reads the character from the file. 
> It reads only one character at a time. 
> We can print it as many times as we want to get the next character and so on. 
> Its syntax is straightforward, as we have to send the file pointer as a parameter. 
> We can store the character into another character to display it onto the screen.

Syntax:

            type = fgetc(file_pointer);
Example:

            c = fgetc(ptr);

*/

/* fgets

> fgets() is used to read a string from a file. 
> It takes three parameters as input and stores them in a null terminated array. 
> Now talking about the parameters, the first one is the storage array we want our string to store. 
> The third one is the file pointer, and the second one is the count of variables
  we want to get from the files. For example, we want to take the first four characters from the string,\
  so we will input the second parameter equals to 5.
  The purpose of doing that is that the null character will hold the fifth place.

NOTE : Blank space is also considered as a character.

Syntax:

            int fgets(const char *s, int n, file_pointer);
Example:

            fgets(str, 5, ptr);


*/



#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    // printf("\n%d",sizeof(FILE));

    ptr = fopen("25_FILEHANDLING.txt","r"); // file open in read mde
    char c ;//= fgetc(ptr);

    printf("\n%c <-- character from fgetc",c);
    c = fgetc(ptr);
    printf("\n%c <-- character from fgetc",c);

    for (int i = 0; i < 100; i++)
    {
        c = fgetc(ptr);
        printf("%c",c);
    }




    char str[4];

    fgets(str,8,ptr); // takes 8 character (7 character , at last null character "\o")

    printf("\n\n%s <-- number of strings from fgets", str);

    fclose(ptr);
    ptr = NULL;

// ***************************************************************************************************

    ptr = fopen("25_FILEHANDLING.txt","w"); // file open in write mode
    fputc('o', ptr);


    fputs("Writing a file from code in c programing using file handling concept************************************************THat's it BYEE", ptr);

    fclose(ptr);
    ptr = NULL;

// ****************************************************************************************************

    FILE *ptr1 = NULL;
    ptr1 = fopen("25_FILEHANDLING.txt","r+"); // reading and adding content by replacing from the begining
    fputc('A',ptr1);
    fputs("Hello this is me ",ptr1);

    fclose(ptr1);
    ptr1 = NULL;

// ****************************************************************************************************

    FILE *ptr2 = NULL;
    ptr2 = fopen("25_FILEHANDLING.txt","w+"); // reading and adding content by Clearing the file.
    fputc('A',ptr2);
    fputs(" w+ mode  Thats it",ptr2);

    fclose(ptr2);

// *****************************************************************************************************

    ptr2 = fopen("25_FILEHANDLING.txt","a+"); // reading and adding content at end file.
    fputc('H',ptr2);
    fputs(" Writing a file from code in c programing using file handling concept************************************************THat's it BYEE",ptr2);




    fclose(ptr2);
    ptr2 = NULL;
    return 0;
}