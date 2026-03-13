#include<stdio.h>
#include<stdlib.h>

int main(){

   int i,j,n;
   int tab[25];
   int k = 0;

   printf("donner le nombre :");
   scanf("%d",&n);
   for (i=2; i<=n; i++)
   {
       for (j=2; j<=i; j++)
       {
           if(i%j==0 && i!=j)
           {
               break;
           }

           if(i==j)
           {
               tab[k]=i;
               k++;
               break;
           }
       }
   }

   printf("Nombres premiers :\n");

   for(i=0;i<k;i++)
   {
       printf("%d ",tab[i]);
   }
   }
   