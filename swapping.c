#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers for swapping\n");
scanf("%d",&a);
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("The values after swapping are a=%d and b=%d",a,b);
return 0;
}
