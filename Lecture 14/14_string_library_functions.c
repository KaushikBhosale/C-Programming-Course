//                        STRING.H LIBRARY AND ITS FUNCTIONS
//                        **********************************
//
// C provides us the useful string handling library functions.
// The string.h library is used to perform string operations.
// It provides several functions for manipulating character strings.
// We need to often manipulate or change the strings according to the need of a problem,
// The string.h library makes handling string in programming simple and easy to understand.
//
// 
// Following are some commonly used string handling functions:
// 
//      FUNCTIONS       USE
// 
//      strcat()        THIS FUNCTION IS USED TO CONCATENATE OR JOIN THE TWO GIVEN STRINGS
//                      EXAMPLE char string1[15] = "hello", string2[15] = "world";
//                              strcat(string1,string2);
//                              puts(string2);
//                              output : helloworld
// 
//      strlen()        THIS FUNCTION IS USED TO SHOW THE LENGTH OF THE STRING
//                      EXAMPLE int len = strlen("hello");
//                              printf("\n%d", len)
//                              output : 5
// 
//      strrev()        THIS FUNCTION IS USED TO REVERSE THE STRING
//                      EXAMPLE char string1[15] = "hello";
//                              strrev(string1);
//                              puts(string1);
//                              output : olleh
// 
//      strcpy()        THIS FUNCTION IS USED TO COPY THE STRING
//                      EXAMPLE char string1[15] = "hello", string2[15];
//                              strcpy(string1,string2);
//                              puts(string2);
//                              output : hello
// 
//      strcmp()        THIS FUNCTION IS USED TO COMPARE TWO STRINGS USING ASCII VALUE 
//                      AND GIVES THE OUTPUT OF 1st argument any positive/ negative /  0 number    
//                                                     indicates greater / smaller  / (same/equal).
//                                                          
//                      EXAMPLE char string1[15] = "A", string2[15] = "a";
//                              printf("\n%d",strcmp(string1,string2));
//                              output :-1
//                              negative indicates ("A") is smaller than a because ACII A = 65,a = 97.
// 
// 

#include <stdio.h>
#include <string.h> // include this library to use its functions which present in library.

int main()
{
    char sentence1[60] = "Lets start programming";
    char sentence2[60] = "Using c langauge";

    // 1] strcat(str1,str2);
    strcat(sentence1,sentence2);// Note Only two argument strings can be passed.
    puts("Using strcat : ");
    puts(sentence1);

    // 2] strlen(str1);
    int len_sentence2;

    len_sentence2 = strlen(sentence2);// Note Only one argument strings can be passed 
    printf("\nLength of sentence2 = %d",len_sentence2);//    to calc length of string.

    int len_sentence1;
    printf("\nLength of sentence1 = %d",strlen(sentence1));

    // 3] strcpy(Destination, Source);
    strcpy(sentence1,sentence2); // Note Only two argument Destination, Source
    printf("\nsentence1 : %s",sentence1);

    // 4] strrev(str1);
    strrev(sentence1);// Note Only one argument strings can be passed.
    printf("\nsentence1 array is reversed : %s",sentence1);

    // 5] strcmp(str1,str2);
    printf("\n%d",strcmp("a","A"));// output 1 so (a) has greater ascii value
    printf("\n%d",strcmp(sentence1,sentence2)); // output 1 so sentence1 has greater ascii value





    return 0;
}
