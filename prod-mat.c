#include <stdio.h>
#include <stdlib.h>

int main(){
int tab1[2][2] = {{1,2},{0,1}};
int tab2[2][2] = {{3,4}, {1,0}};
int T[2][2];
int i,j,k;

    for (i=0;i<2;i++)
  {     for (j=0;j<2;j++)
      { 
      T[i][j]=0;
      
         for(k=0;k<2;k++){
         T[i][j] += tab1[i][k] * tab2[k][j];
         
        
         }
        } 
        
         
  }
  for (i=0; i<2; i++)
  { for(j=0; j<2; j++)
   {
   printf("%d ", T[i][j]);
   }
   printf("\n");
  }

}