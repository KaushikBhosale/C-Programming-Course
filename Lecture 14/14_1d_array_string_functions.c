//                              1D ARRAY STRINGS FUNTIONS
//                              *************************

#include <stdio.h>

void create_string(int size,char ch[size])
{
    size = size - 1;
    printf("\nEnter the character : ");
    gets(ch);
    ch[size] = '\0';
}

void show_string(char ch[])
{
    printf("\nYour String is : %s",ch);
}

int length_function(char ch[])
{
    int i;
    for (i = 0; ch[i] != '\0'; i++)
    {
    }

    // printf("\nlenght of %s is %d", ch,i);// optional
    return i;
}

void copy_function(char ch[],char copy[])
{
    int i;
    for (i = 0; ch[i] != '\0'; i++)
    {
        copy[i] = ch[i];
    }
        copy[i] = '\0';


    // printf("\nstring copied\n",i); // optional
}

void concate_function(char ch1[],char ch2[])
{
    int len,i;
    len = length_function(ch1);
    ch1[len] = ' ';
    len++;
    for (i = 0; ch2[i] != '\0'; i++)
    {
        ch1[len] = ch2[i];
        len++;
    }
    ch1[len] = '\0';
}

void reverse_show_function(char ch[])
{
    int len = length_function(ch);
    --len;
    printf("\nReverse output : ");
    for ( len; len >= 0 ; len--)
    {
        printf("%c",ch[len]);
    }
}

void reverse_string_function(int size,char ch[size])
{
    char rev_ch[size];

    int len = length_function(ch);
    --len;

    int i = 0;
    for (i = 0; len >= 0 ;i++)
    {
        rev_ch[i] = ch[len];
        len--;
    }  
    rev_ch[i] = '\0';

    for (i = 0; rev_ch[i] != '\0'; i++)
    {
        ch[i] = rev_ch[i];
    }
    
}

void ptr_create_str(char* a,int size) // pointer function to create string
{
    size = size - 1;
    printf("\nEnter the character : ");
    gets(a);
    *(a+size) = '\0';
}



int main()
{
    char name[10];

    // create_string(10,name);
    // show_string(name);

    int name_lenght;
    // name_lenght = length_function(name);
    // printf("\n%d", name_lenght);

    char copy_str[10] = "123456789";
    char paste_str[10];

    copy_function(copy_str,paste_str);
    puts("paste_str");
    puts(paste_str);


    char full_name[20] = "kaushik", last_name[15] = "bhosale";
    
    concate_function(full_name,last_name);
    puts(full_name);

    printf("\nfull_name ");
    reverse_show_function(full_name);
    reverse_show_function("hello");
    
    char num[10] = "123456789";
    printf("\nnum : %s",num);
    reverse_string_function(10,num);
    printf("\nnum after rev : %s",num);

    ptr_create_str(num,10); // POINTER FUNCTION
    show_string(num);
    return 0;
}