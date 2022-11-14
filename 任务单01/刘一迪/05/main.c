#include <stdio.h>

int main(void)
{
    printf("Please enter downloadspeed:\n");
    float ds;
    scanf("%f",&ds);
    printf("Please enter filesize:\n");
    float fs;
    scanf("%f",&fs);
    printf("DownloadSpeed:%.2f(Mb/s)\nFilesize:%.2f(MB)\nDownloadTime:%.2f(S)\n",ds,fs,8*fs/ds);
    return 0;
}

