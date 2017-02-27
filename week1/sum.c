#include <stdio.h>

#include <stdio.h>
int add(int a,int b)
{
return a+b;
}
int main ()
{
int a,b;	
printf("enter 2 numbers\n");
scanf("%d%d",&a,&b);
printf("The sum of the 2 numbers is =%d\n",add(a,b));
return 0;
}


