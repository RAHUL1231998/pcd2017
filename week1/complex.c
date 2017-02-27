#include <stdio.h>

struct complex {float real;float img;};

struct complex add(struct complex x, struct complex y) 
{
struct complex c;
c.real = x.real + y.real;
c.img = x.img +y.img;	
return c;
}

int main()
{
struct complex a,b; 	

printf("enter real and imaginary numbers\n");
scanf("%f%f",&a.real,&a.img);
 
printf("enter real and imaginary numbers\n");
scanf("%f%f",&b.real,&b.img);

struct complex c = add(a,b);
printf("the complex number is = %f + i %f\n",c.real,c.img);

return 0;
}
