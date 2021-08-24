#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

int main()
{
    int integer;
    long longtype;
    short shortinteger;
    float floattype;
    double doubletype;
    char chartype;
    bool booltype;

    printf("displaying memory located for:\n\n");

    //Shows the size of different type of variables.

    printf("size of integer: %ld bytes\n",sizeof (integer));
    printf("size of float type: %ld bytes\n",sizeof (floattype));
    printf("size of short integer: %ld bytes\n",sizeof (shortinteger));
    printf("size of long: %ld bytes\n",sizeof (longtype));
    printf("size of double: %ld bytes\n",sizeof (doubletype));
    printf("size of char: %ld bytes\n",sizeof (chartype));
    printf("size of boolean: %ld bytes\n\n",sizeof (booltype));

    //Shows the Maximum and minimum limits of different integers type

    printf("the minimum value of SIGNED CHAR = %ld\n", SCHAR_MIN);
    printf("the maximum value of SIGNED CHAR = %ld\n", SCHAR_MAX);
    printf("the maximum value of UNSIGNED CHAR = %ld\n", UCHAR_MAX);

    printf("the minimum value of SHORT INT = %ld\n", SHRT_MIN);
    printf("the maximum value of SHORT INT = %ld\n", SHRT_MAX);

    printf("the minimum value of INT = %ld\n", INT_MIN);
    printf("the maximum value of INT = %ld\n", INT_MAX);

    printf("the minimum value of CHAR = %ld\n", CHAR_MIN);
    printf("the maximum value of CHAR = %ld\n", CHAR_MAX);

    //Value for LONG is shown differently on two types of compiler(32 bits & 64 Bits)

    printf("the minimum value of LONG = %ld\n", LONG_MIN);
    printf("the maximum value of LONG = %ld\n", LONG_MAX);












    return 0;
}
