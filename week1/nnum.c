#include <stdio.h>
int addn(int a[],int n)
{
int i,sum = 0;
for(i=0;i<n;i++)
{
sum = sum + a[i];
}
return sum;
}
int main()
{
int a[1000],n,tot = 0,g;
printf("enter number of numbers to be added\n");
scanf("%d",&n);
for (g=0;g<n;g++)
{
printf("enter number\n");
scanf("%d",&a[g]);
}	
tot = addn(a,n);
printf("Sum is = %d ",tot);
return 0;
}
