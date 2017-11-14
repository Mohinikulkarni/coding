#include<stdio.h>
 void main()
{
int a,b,c;
 printf("enter any three numbers:\n");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b&&a>c)
 printf("greatest numberis: %d",a);
 else if(b>c)
 printf("greatestnumber is: %d",b);
 else
 printf("greatest number is: %d",c);
}
/*dell@dell-OptiPlex-7040:~$ cd mohinikulkarni
dell@dell-OptiPlex-7040:~/mohinikulkarni$ gcc greatestnumber.c
dell@dell-OptiPlex-7040:~/mohinikulkarni$ ./a.out
enter any three numbers:
2  
6
4
greatestnumber is: 6dell@dell-OptiPlex-7040:~/mohinikulkarni$ 


