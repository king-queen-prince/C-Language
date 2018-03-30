#include<stdio.h>
int main(void)
{
    char  a[][3]={"ac","bd"};
    printf("%s\n",a);

    char *b[] ={"abc","def","hij"};
    printf("%c\n",b[0][0]);//地址+下标=内容
}
