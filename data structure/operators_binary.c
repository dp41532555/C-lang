#include <stdio.h>
void main()
{
    int a = 1, b = 2, c = 3, d;
    d = a || ++b && ++c;
    printf("\n1: a:%d\tb:%d\tc:%d\td:%d", a, b, c, d);
    d = --a || ++b && ++c;
    printf("\n2: a:%d\tb:%d\tc:%d\td:%d", a, b, c, d);
    d = --a || ++b;
    printf("\n3: a:%d\tb:%d\td:%d", a, b, d);
    d = a && ++b;
    printf("\n4: a:%d\tb:%d\td:%d", a, b, d);
    d = --a && ++b;
    printf("\n5: a:%d\tb:%d\td:%d", a, b, d);
    d = a || ++b;
    printf("\n6: a:%d\tb:%d\td:%d", a, b, d);
}