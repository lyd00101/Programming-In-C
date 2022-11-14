#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Please enter name:\n");
    char name[25];
    gets(name);
    printf("\"%s\"\n",name);
    int l,r,t;
    l=20-strlen(name);
    printf("\"%*s\"\n",l,name);
    r=strlen(name)-20;
    printf("\"%*s\"\n",r,name);
    t=strlen(name)+3;
    printf("%*s\n",t,name);
    return 0;
}

