char fun(char buf)
{
    FILE *fp = fopen("hello.c", "r");
    if(fp != NULL)
    {
        char buf[100] = { 0 };
        while(fgets(buf, sizeof(buf), fp) != NULL)
        {
            int i,j=0;
            for(i=0;*(buf+i)!='c';i++);
            for (; *(str + i) != '\0'; i++)
            {
                *(ss + j) = *(str + i-1);
                j++;
            }
            printf("%s", buf);
        }
    }
}
