#include <stdio.h>

int main()
{
    int var1 = 11;   // two integer variables
    int var2 = 22;
    int *ptr;        // pointer to integer

    ptr = &var1;     // pointer points to var1
    printf("%d\n", *ptr);   // print contents of pointer (11)
    
    ptr = &var2;     // pointer points to var2
    printf("%d\n", *ptr);   // print contents of pointer (22)

    return 0;
}
