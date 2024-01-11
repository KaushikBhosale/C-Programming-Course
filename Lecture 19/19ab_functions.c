//                        DEVELOPE FUNCTIONS DYNAMIC MEMORY ALLOCATION FOR ARRAY
//                        ******************************************************


#include <stdio.h>
#include <stdlib.h> // To use functions for DMA



int* user_dma_malloc(int *size)
{   
    int *p;

    printf("\nEnter the No of blocks of the Array you want to create :");
    scanf("%d", size);

    p = (int *) malloc(*size * sizeof(int));

    (p == NULL)?printf("\nMemory not allocated."):printf("\nMemory successfully allocated");
    
    return p;
}

int* user_dma_calloc(int *size)
{   
    int *p;

    printf("\nEnter the No of blocks of the Array you want to create :");
    scanf("%d", size);

    p = (int *) calloc(*size , sizeof(int));

    (p == NULL)?printf("\nMemory not allocated."):printf("\nMemory successfully allocated");
    
    return p;
}

void create_dma_array(int size, int a[size])
{
    if (a != NULL)
    {
    for (int i = 0; i < size; i++)
        {
            printf("\nEnter the value at index [%d] : ",i);
            scanf("%d", &a[i]);
        }
    }
    else 
    {
    printf("\nCannot Enter the Values Insuficient Memory");
    }
}

void show_dma_array(int size, int a[size])
{
    if (a != NULL)
    {
    for (int i = 0; i < size; i++)
    {
        printf("\nThe Array value at index [%d] : %d at ADDRESS %d",i, a[i], &a[i]);
    }
    }
    else 
    {
    printf("\nVALUES NOT INITIALIZED DUE TO INSUFICIENT MEMORY");
    }
}

void user_dma_realloc(int *size,int *p)
{   


    printf("\n[REALLOCATION OF MEMORY]\nEnter the No of blocks of the Array you want to create :");
    scanf("%d", size);

    p = (int *) realloc(p, *size * sizeof(int));

    (p == NULL)?printf("\nMemory not allocated."):printf("\nMemory successfully allocated");

}


int* dma_malloc(int size)
{   
    int *p;

    p = (int *) malloc(size * sizeof(int));

    (p == NULL)?printf("\nMemory not allocated."):printf("\nMemory successfully allocated");
    
    return p;
}

int* dma_calloc(int size)
{   
    int *p;

    p = (int *) calloc(size , sizeof(int));

    (p == NULL)?printf("\nMemory not allocated."):printf("\nMemory successfully allocated");
    
    return p;
}

void dma_realloc(int size,int *p)
{
    p = (int *) realloc(p, size * sizeof(int));

    (p == NULL)?printf("\nMemory not allocated."):printf("\nMemory successfully allocated");

}

int main()
{   
    int *ptr, size;
    // user malloc
    ptr = user_dma_malloc(&size);
    create_dma_array(size, ptr);
    show_dma_array(size, ptr);

    // user calloc
    ptr = user_dma_calloc(&size);
    create_dma_array(size, ptr);
    show_dma_array(size, ptr);

    // user realloc
    user_dma_realloc(&size,ptr);
    create_dma_array(size, ptr);
    show_dma_array(size, ptr);


    // as per dev requirement malloc
    ptr = dma_malloc(4);
    create_dma_array(4, ptr);
    show_dma_array(4, ptr);

    // as per dev requirement calloc
    ptr = dma_calloc(6);
    create_dma_array(6, ptr);
    show_dma_array(6, ptr);

    // as per dev requirement realloc
    dma_realloc(3,ptr);
    create_dma_array(3, ptr);
    show_dma_array(3, ptr);

    free(ptr);
    printf("\npointer ptr is free");

    return 0;
}
