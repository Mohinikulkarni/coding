#include<stdio.h>
int main(){

int n,i=1,sum=0;
printf("enter a number:");
scanf("%d",&n);
while(i<n){
if(n%i==0)
sum=sum+i;
i++;
}
if(sum==n)
printf("%dis a perfect number",i);
else
printf("%d is not a perfect",i);
return 0;
}
/*dell@dell-OptiPlex-7040:~$ gcc mohini2.c
dell@dell-OptiPlex-7040:~$ ./a.out
enter a number:8
8 is not a perfectdell@dell-OptiPlex-7040:~$ */

