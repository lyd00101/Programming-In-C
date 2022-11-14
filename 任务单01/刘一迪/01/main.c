#include<stdio.h>
#include<Windows.h>
void color(int num)
{
    if(num>=0&&num<=15)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),num);
    }
}
int main()
{
    printf("please enter first name and last name\n");
    char fname[10];
    char lname[10];
    scanf("%s%s",fname,lname);
    color(2);
    printf("%s",lname);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_INTENSITY);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7 | 8 | 13 | 80);
    printf("%s",fname);
}
