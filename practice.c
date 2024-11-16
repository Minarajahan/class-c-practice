#include<stdio.h>
int main()
{
   char a;
    scanf("%c",&a);
    if(a>='Z')
    a=a-26;
    


    printf("%c\n",a);
    return 0;
}
