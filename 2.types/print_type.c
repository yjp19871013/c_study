
#include <stdio.h>
#include <wchar.h>

int main(void) {
    int a_int = -1;
    short a_short = -2;
    long a_long = -3;
    long long a_long_long = -4;

    unsigned int a_uint = 1;
    unsigned short a_ushort = 2;
    unsigned long int a_ulong = 3;
    unsigned long long int a_ulong_long = 4;

    char a_char = 'c';

    float a_float = 1.0;
    double a_double = 2.0;
    long double a_ldouble = 3.0;

    printf("size of int: %d, value is: %d\n",
                    sizeof(int), a_int);
    printf("size of short: %d, value is: %hd\n",
                    sizeof(short), a_short);
    printf("size of long: %d, value is: %ld\n",
                    sizeof(long), a_long);
    printf("size of long long: %d, value is: %lld\n",
                    sizeof(long long), a_long_long);

    printf("size of unsigned int: %d, value is: %u\n",
                    sizeof(unsigned int), a_uint);
    printf("size of unsigned short: %d, value is: %hu\n",
                    sizeof(unsigned short), a_ushort);
    printf("size of unsigned long: %d, value is: %lu\n",
                    sizeof(unsigned long), a_ulong);
    printf("size of unsigned long long: %d, value is: %llu\n",
                    sizeof(unsigned long long), a_ulong_long);

    printf("size of char: %d, value is: %c\n",
                    sizeof(char), a_char);

    printf("size of float: %d, value is: %f\n",
                    sizeof(float), a_float);
    printf("size of double: %d, value is: %lf\n",
                    sizeof(double), a_double);
    printf("size of long double: %d, value is: %llf\n",
                    sizeof(long double), a_ldouble);

    return 0;
}



