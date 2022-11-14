#include <stdio.h>

int func(int a,int b)
{
    int i,j,m,n;
    int c;
    i=a/10;
    j=a%10;
    m=b/10;
    n=b%10;
    c=i*1000+j*10+m*100+n;
    return c;
}

int main(void)
{
    printf("Please enter two number:\n");
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=func(a,b);
    printf("%d\n",c);
    return 0;
}

