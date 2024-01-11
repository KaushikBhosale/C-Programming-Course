//                        DYNAMIC MEMORY ALLOCATION FOR STRUCTURES FUNCTIONS
//                        **************************************************

#include <stdio.h>
#include <stdlib.h>

typedef struct truck_driver_details
{
    char driver_name[50];
    int driver_id;
    char route[30];
} tdd;

tdd *user_struct_DMA_malloc(int *size)
{
    printf("\nEnter the array size : ");
    scanf("%d", size);

    tdd *p;
    p = (tdd *)malloc(*size * sizeof(tdd));
    (p == NULL) ? printf("\nMEMORY ALLOCATION FAILED") : printf("\nMEMORY ALLOCATION SUCCESSFULL");

    return p;
}

tdd *user_struct_DMA_calloc(int *size)
{
    printf("\nEnter the array size : ");
    scanf("%d", size);

    tdd *p;
    p = (tdd *)calloc(*size, sizeof(tdd));
    (p == NULL) ? printf("\nMEMORY ALLOCATION FAILED") : printf("\nMEMORY ALLOCATION SUCCESSFULL");

    return p;
}

void user_struct_DMA_realloc(int *size, tdd *p)
{
    printf("\n[REALLOCATION] Enter the array size : ");
    scanf("%d", size);

    p = (tdd *) realloc(p, *size * sizeof(tdd));
    (p == NULL) ? printf("\nMEMORY ALLOCATION FAILED") : printf("\nMEMORY ALLOCATION SUCCESSFULL");
}


void create_struct_detail(int size, tdd a[size])
{
    for (int i = 0; i < size; i++)
    {
        getchar();
        printf("\nEnter the Driver_Name : ");
        gets(a[i].driver_name);

        printf("\nEnter the Driver_id : ");
        scanf("%d", &a[i].driver_id);

        getchar();
        printf("\nEnter the Driver route : ");
        gets(a[i].route);

        if (i != (size - 1))
        {
            printf("\nPress [ ENTER ] key To Input New Driver Details");
        }
    }
}

void show_struct_detail(int size, tdd a[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("\nMemory Addres pointer[%d] : %d", i, &a[i]);

        printf("\nDriver_Name is : %s", a[i].driver_name);
        printf("\nDriver_id      : %d", a[i].driver_id);
        printf("\nDrivers Travel Route : %s\n", a[i].route);
    }
}

int main()
{
    printf("\nsize of tdd : %d", sizeof(tdd));

    tdd *ptr;
    int size;

    // ptr = user_struct_DMA_malloc(&size);
    // create_struct_detail(size, ptr);
    // show_struct_detail(size, ptr);

    ptr = user_struct_DMA_calloc(&size);
    create_struct_detail(size, ptr);
    show_struct_detail(size, ptr);

    user_struct_DMA_realloc(&size, ptr);
    create_struct_detail(size, ptr);
    show_struct_detail(size, ptr);

    free(ptr);
    printf("\npointer is free\n DONE ");

    return 0;
}
