#include <stdio.h>
void swap(int *i,int *j)
{
    int t;
    t=*i;
    *i=*j;
    *j=t;
}

int main()
{
   int i=0,j,arr[20],min;
   for( i=0;i<5;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("arrray in sorted form\n");
   for( i=0;i<5-1;i++)
   {
       min=i;
       for(j=i+1;j<5;j++)
       {
           if(arr[j]<arr[min])
           {
               min=j;
           }
          
       }
       if(min!=i) 
       swap(&arr[min],&arr[i]);
       
   }
   for( i=0;i<5;i++)
   {
       printf("%d\n",arr[i]);
}
}
