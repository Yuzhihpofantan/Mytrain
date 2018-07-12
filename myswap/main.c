#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void myswap(int *a,int*b){
    *a^=*b;
    *b^=*a;
    *a^=*b;

}
int main()
{
    int a=20,b=10;

    myswap(&a,&b);

    printf("a=%d b=%d\n",a,b);

    return 0;
}