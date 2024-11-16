#include<stdio.h>
int main()
{
   int a;
    scanf("%d",&a);
    if(a>=90 && a<=100)
    printf("A",a);
    if(a>=80 && a<=89)
    printf("B",a);
    if(a>=70 && a<=79)
    printf("C",a);
    if(a>=60 && a<=69)
    printf("D",a);
    if(a>=0 && a<=59)
    printf("E",a);

    return 0;
}