#include <stdio.h>
#include <math.h>
//��һԪ���η���y=x* 
int main()
{
	float x;
	float y,a,b,c,x1,x2;
	printf("������ϵ��\n");
	scanf("%f,%f,%f,%f",&y,&a,&b,&c);
	c=c-y;
	float temp = sqrt(b*b-4*a*c);
	x1=(-b+temp)/(2*a);
	x2=(-b-temp)/(2*a);
	printf("һԪ���η��̵ĸ�");
	printf("%f\n",x1);//��һԪ���η��̵ĸ� //��bug 
	printf("%f\n",x2);
	return 0;
 } 
