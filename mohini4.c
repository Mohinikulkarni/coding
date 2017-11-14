#include<stdio.h>
void main()
{
float a;
float surface_area,volume;
printf("enter size of any side of a cube:");
scanf("%f",&a);
surface_area=6*(a*a);
volume=a*a*a;
printf("Surface area of cube is:%.
3f",surface_area);
printf("\nVOlume of cube is:%..3f",volume);
}


/*dell@dell-OptiPlex-7040:~$ gcc mohini4.c
dell@dell-OptiPlex-7040:~$ ./a.out
enter an integer
4
entered number is not an amstrongnumber.
 dell@dell-OptiPlex-7040:~$ */

