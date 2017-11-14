#include<stdio.h>
int main()
{
int x,y,temp;
printf("enter the value of x and y\n");
scanf("%d%d",&x,&y);
printf("Before swaping\nx=%d\ny=%dn",x,y);
temp=x;
x=y;
y=temp;
printf("after swaping\nx=%d\ny=%d\n",x,y);
return 0;
}
/*dell@dell-OptiPlex-7040:~$ ./a.out
enter the value of x and y
6
7
Before swaping
x=6
y=7nafter swaping
x=7
y=6
dell@dell-OptiPlex-7040:~$ */

