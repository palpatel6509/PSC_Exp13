#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,i,n = 3;

    /* 1. ALLOCATE MEMORY USING malloc() */
    ptr = (int*) malloc( n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n",n);
    for( i = 0; i < n; i++ )
    {
        scanf("%d",&ptr[i]);
    }

    /* 2. USING realloc() TO RESIZE MEMORY */
    n = 5;
    ptr = (int*) realloc(ptr,n * sizeof(int));
    printf("Enter 2 more integers:\n");
    for( i = 3; i < n; i++ )
    {
        scanf("%d",&ptr[i]);
    }

    /* DISPLAY ELEMENTS */
    printf("All elements: ");
    for( i = 0; i < n; i++ )
    {
        printf("%d ",ptr[i]);
    }

    /* 3. Using free() TO RELEASE MEMORY */
    free(ptr);
    printf("\nMemory successfully freed.\n");

    return 0;
}