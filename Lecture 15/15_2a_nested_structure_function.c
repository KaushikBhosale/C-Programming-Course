//                                      NESTED STRUCTURES FUNCTIONS
//                                      ***************************

#include <stdio.h>
#include <string.h>

struct req_details
{
    char email[40];
    char home_address[40];
};


struct person_details
{
    char name[15];
    int age;
    char date[11];
    struct req_details person_info;
};

void create_details(int size,struct person_details a[size])
{
    for (int i = 0; i < size; i++)
    {
        // getchar();
        printf("\nENTER THE NEW CUSTOMER NAME : ");
        gets(a[i].name);

        printf("\nENTER THE CUSTOMER AGE : ");
        scanf("%d", &a[i].age);

        getchar();
        printf("\nENTER THE CUSTOMER BIRTHDATE : ");
        gets(a[i].date);

        // getchar();
        printf("\nENTER THE CUSTOMER HOME ADDRESS : ");
        gets(a[i].person_info.home_address);

        // getchar();
        printf("\nENTER THE CUSTOMER EMAIL_ID : ");
        gets(a[i].person_info.email);
    }
    
}

void show_details(int size,struct person_details a[size])
{
    printf("\nNAME\t\tAGE\tBIRTHDATE\tADDRESS\t\t\t\tEMAIL ID");
    for (int i = 0; i < size; i++)
    {
        printf("\n%s\t\t%d\t%s\t%s\t%s",
        a[i].name,a[i].age,a[i].date,
        a[i].person_info.home_address,a[i].person_info.email);
    }
    
}

int main()
{
    struct person_details customer[3];
    create_details(3,customer);
    show_details(3,customer);
    return 0;
}