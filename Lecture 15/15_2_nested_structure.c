//                                      NESTED STRUCTURES
//                                      *****************

#include <stdio.h>
#include <string.h>

struct person_contact_details
{
    char email[40];
    char home_address[40];
};


struct person_details
{
    char name[15];
    int age;
    char birthdate[11];
    struct person_contact_details contact;//<-- This is nested structure variable name.
};

struct person_all_details
{
    struct person_details a;
    char gender[7];
    char marital_status[8];
};



int main()
{
    struct person_details customer[3];

    for (int i = 0; i < 3; i++)
    {
        // getchar();
        printf("\nENTER THE NEW CUSTOMER NAME : ");
        gets(customer[i].name);

        printf("\nENTER THE CUSTOMER AGE : ");
        scanf("%d", &customer[i].age);

        getchar();
        printf("\nENTER THE CUSTOMER BIRTHDATE : ");
        gets(customer[i].birthdate);

        // getchar();
        printf("\nENTER THE CUSTOMER HOME ADDRESS : ");
        gets(customer[i].contact.home_address);//<-- This is how NESTED stucture variable is accessed
        // structure_variable.nested_structure_variable_name.nested_structure_member_name
        // getchar();
        printf("\nENTER THE CUSTOMER EMAIL_ID : ");
        gets(customer[i].contact.email);
    }

    printf("\nNAME\t\tAGE\tBIRTHDATE\tADDRESS\t\t\t\tEMAIL ID");
    for (int i = 0; i < 3; i++)
    {
        printf("\n%s\t\t%d\t%s\t%s\t%s",
        customer[i].name,customer[i].age,customer[i].birthdate,
        customer[i].contact.home_address,customer[i].contact.email);
    }
    


    // struct person_all_details employee_details[3];

    // for (int i = 0; i < 3; i++)
    // {
    //     // getchar();
    //     printf("\nENTER THE NEW employee_details NAME : ");
    //     gets(employee_details[i].a.name);

    //     printf("\nENTER THE employee_details AGE : ");
    //     scanf("%d", &employee_details[i].a.age);

    //     getchar();
    //     printf("\nENTER THE employee_details BIRTHDATE : ");
    //     gets(employee_details[i].a.birthdate);

    //     // getchar();
    //     printf("\nENTER THE employee_details GENDER : ");
    //     gets(employee_details[i].gender);


    //     // getchar();
    //     printf("\nENTER THE employee_details MARITAL STATUS : ");
    //     gets(employee_details[i].marital_status);

    //     // getchar();
    //     printf("\nENTER THE employee_details HOME ADDRESS : ");
    //     gets(employee_details[i].a.contact.home_address);

    //     // getchar();
    //     printf("\nENTER THE employee_details EMAIL_ID : ");
    //     gets(employee_details[i].a.contact.email);
    // }


    // for (int i = 0; i < 3; i++)
    // {
    //     printf("\nDETAILS OF EMPLOYEE %d",i+1);

    //     printf("\n        NAME   :   %s",employee_details[i].a.name);

    //     printf("\n         AGE   :   %d",employee_details[i].a.age);

    //     printf("\n   BIRTHDATE   :   %s",employee_details[i].a.birthdate);

    //     printf("\n      GENDER   :   %s",employee_details[i].gender);

    //     printf("\nMARITAL STATUS :   %s", employee_details[i].marital_status);

    //     printf("\nHOME ADDRESS   :   %s", employee_details[i].a.contact.home_address);

    //     printf("\n    EMAIL ID   :   %s", employee_details[i].a.contact.email);

    // }
    
    return 0;
}
