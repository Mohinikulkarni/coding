#include<stdio.h>
int main()
{
  int number,sum=0,temp,remainder;
  printf("enter an integer\n");
  scanf("%d",&number);
  temp=number;
  while(temp !=0)
  {
  remainder=temp%10;
  sum=sum+
  remainder*remainder*remainder;
  temp=temp/10;
  }
  if(number==sum)
  printf("entered number is  an amstrong number.\n");
  else
  printf("entered number is not an amstrong number.\n");
 return 0;
}
/*dell@dell-OptiPlex-7040:~$ gcc kulkarni2.c
dell@dell-OptiPlex-7040:~$ ./a.out
enter an integer
8
entered number is not an amstrong number.
dell@dell-OptiPlex-7040:~$ 

