#include <stdio.h>
int add3(int a,int b,int c)
{
return a+b+c;
}
int main ()
{
int a,b,c,sum;
printf("enter 3 numbers\n");
scanf("%d%d%d",&a,&b,&c);
sum = add3(a,b,c);
printf("The sum of 3 numbers is = %d\n",sum);
return 0;
}
