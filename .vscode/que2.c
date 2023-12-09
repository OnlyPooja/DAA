#include<stdio.h>
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
 void selection(int arr[],int n)
 {
     int min,i,j,c=0,s=0;
     for(i=0;i<n-1;i++)
     {
        min=i;
        for(j=i+1;i<n;j++)
        {
            c++;
         if(arr[j]<arr[min])
         {
            min=j;
         }
     }
     if(min!=i)
         {
            swap(&arr[min],&arr[i]);
            s++;
         }
     }

 }
int main()
{
    int n,i,arr[10];
    printf("enter value of n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    selection(arr,n);
    for(i=0;i<n;i++)
    {
      printf("%d",arr[i]);
    }
}