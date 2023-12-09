#include <stdio.h>

int main()
{
   int j,arr[20],min,t;
   for(int i=0;i<5;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("arrray in sorted form\n");
   for(int i=0;i<5;i++)
   {
       for(j=0;j<5-i-1;j++)
       {
           if(arr[j]>arr[j+1])
           {
               int t=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=t;
           }
       }
   }
   for(int i=0;i<5;i++)
   {
       printf("%d\n",arr[i]);
}
}