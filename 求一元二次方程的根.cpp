#include <stdio.h>
#include <math.h>
//求一元二次方程y=x* 
int main()
{
	float x;
	float y,a,b,c,x1,x2;
	printf("请输入系数\n");
	scanf("%f,%f,%f,%f",&y,&a,&b,&c);
	c=c-y;
	float temp = sqrt(b*b-4*a*c);
	x1=(-b+temp)/(2*a);
	x2=(-b-temp)/(2*a);
	printf("一元二次方程的根");
	printf("%f\n",x1);//求一元二次方程的根 //找bug 
	printf("%f\n",x2);
	return 0;
 } 
