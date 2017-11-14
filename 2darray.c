#include<stdio.h>
 int main(){
 int disp[2][3];
 int i, j;
 for(i=0; i<2; i++) {
   for(j=0;j<3;j++) {
      printf("enter value for disp[%d][%d]:", i, j);
        scanf("%d", &disp[i][j]);
      }
   }
  
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;

}
    ^
/*dell@dell-OptiPlex-7040:~/mohinikulkarni$ gcc 2darray.c
dell@dell-OptiPlex-7040:~/mohinikulkarni$ ./a.out
enter value for disp[0][0]:2
enter value for disp[0][1]:3
enter value for disp[0][2]:7
enter value for disp[1][0]:4
enter value for disp[1][1]:6
enter value for disp[1][2]:3
Two Dimensional array elements:
2 3 7 
4 6 3 
dell@dell-OptiPlex-7040:~/mohinikulkarni$ 


 

