//                              2D ARRAY STRINGS FUNTIONS
//                              *************************
#include <stdio.h>

void create_2d_str(int row,int col,char ch[row][col])
{
    for (int i = 0; i < row; i++)
    {
        gets(ch[i]);
    }   
}

void show_str(int row,int col,char ch[row][col])
{
    puts("List of array :");
    for (int i = 0; i < row; i++)
    {
        puts(ch[i]);
    }
}

void ptr_create_str(int row,int col,char (*a)[col]) // POINTER STRING FUNCTION
{
    for (int i = 0; i < row; i++)
    {
        gets(*(a+i));
    }
}


int main()
{
    char students_names[3][15];

    create_2d_str(3,15,students_names);
    show_str(3,15,students_names);
    
    ptr_create_str(3,15,students_names);
    show_str(3,15,students_names);
    return 0;
}