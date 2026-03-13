#include<stdio.h>
#include<stdlib.h>

int main()
{  
    int v1[3]={1,2,3};
    int v2[3]={0,5,0};
    int vecteur[3] ;
    int i,t=0;
    int P;
    for (i=0;i<3;i++)
    {
     
    t = t+ v1[i] * v2[i];
    vecteur [i] = t;
    t =0;
    }
    for (i=0;i<3;i++)
    {
    t += vecteur[i];
    }
    printf("%d",t);
   
    return 0;
}