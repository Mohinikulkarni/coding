 #include<stdio.h>
#include<string.h>

int main()
{
 char a[100],b[100];

 printf("enter the string to check if it a palidrome\n");
 gets(a);
 strcpy(b,a);
 strrev(b);

 if(strcmp(a,b)==0)
 printf("entered sring is a palidrome.\n");
else
printf("entererd string is a palidrome.\n");
 return 0;
 }
