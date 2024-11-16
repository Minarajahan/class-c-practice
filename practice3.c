#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    a=a+3;
    if(a>'Z')
    a=a-26;
    if (a>'z')
        a=a-26;
    printf("%c\n",a);
    return 0;
}