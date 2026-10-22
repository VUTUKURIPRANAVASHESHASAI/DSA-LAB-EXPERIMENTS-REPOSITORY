#include <stdio.h>

int main() {
    int num = 5;

    int *ptr = &num;
    int **pptr = &ptr;

    printf("Value of num  : %d\n", num);

    printf("Address of num : %p\n", &num);

    printf("Value of ptr : %p\n", ptr);

    printf("Value at ptr (*ptr) : %d\n", *ptr);

    printf("Address of ptr : %p\n", &ptr);

    printf("Value of pptr : %p\n", pptr);

    printf("Value at pptr : %p\n", *pptr);

    printf("Value at **pptr : %d\n", **pptr);

    printf("Address of pptr : %p\n", &pptr);

    return 0;
}