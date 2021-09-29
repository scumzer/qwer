#include<stdio.h>
int main(){
	int year;
	scanf("%d",&year);
    if(year % 4 == 0 && year % 100 !=0 || year % 400 == 0 )//条件语句==选择语句
	printf ("%d 年是闰年\n",year);
    else 
    printf ("%d 年不是闰年\n",year);
    return 0;
}
