#include<stdio.h>
#include<stdlib.h>

int main(){
   int t[70]={3,-4};
   
   int S=0,i,j,n=70;
   for (i=2;i<=n;i++)
   {
      t[i]=2*t[i-1] + 3*t[i-2];
      printf("%d ieme element %d \n",i,t[i]);
   }
   printf("\n\n");
   for(j=0;j<30;j++)
   {
   S+=t[j];
   }
printf("la somme des 30 premiers nombres de la suite est :%d",S);



}