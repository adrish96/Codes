#include <stdio.h>

int main()
{
    int a, *p, **p1;  // declaring the variable and pointer
    a = 10;
    p = &a;     // initializing the pointer
	p1= &p;
    printf("%d\n", *p);    //this will print the value of 'a'

    printf("%d\n", *&a);   //this will also print the value of 'a'

    printf("%u\n", &a);    //this will print the address of 'a'

    printf("%u\n", p);     //this will also print the address of 'a'

    printf("%u\n", &p);    //this will print the address of 'p'
    printf("%u\n", *p1);
    return 0;
}
