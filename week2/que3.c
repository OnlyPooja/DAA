#include<stdio.h>
#include<math.h>
int linear(int arr[],int n,int key,int *c)
{
   int i,j;
   for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
     {
        if(arr[i]>arr[j])
        {
            if((arr[i]-arr[j])==key)
            {
                *c=*c+1;
            }
        }
        if(arr[j]>arr[i])
        {
            if((arr[j]-arr[i])==key)
            {
                *c=*c+1;
            }
        }
     }
   } 
   return c;
    
}
int main()
{
    int n,i,arr[10],key,cmp=0,c;
    printf("enter the range of array\n");
    scanf("%d",&n);
    printf("enter the numbers\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("enter the key to be searched\n");
    scanf("%d",&key);
    c=linear(arr,n,key,&cmp);
     printf("pair of integer %d",cmp);
}

