#include<stdio.h>
int main()
{
int a,b;
printf("\nEnter value for num1 & num2:");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swaping value of a:%d",a);
printf("\nAfter swaping value of b:%d",b);
return(0);
}
/*$ gcc mohini3.c
dell@dell-OptiPlex-7040:~$ ./a.out

Enter value for num1 & num2:5
7

After swaping value of a:7
After swaping value of b:5dell@dell-OptiPlex-7040:~$ */


