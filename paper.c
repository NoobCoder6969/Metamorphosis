#include <stdio.h>
int main()
{
    int l, b, c=0;
    l=1189;
    b=841;
    printf("Size of A0 is %d X %d \n",l,b);
    for(int i=1;i<=8;i++)
    {
        c=l;
        l=b;
        b=c/2;
        printf("Size of A%d is %d X %d \n",i,l,b);
    }
}