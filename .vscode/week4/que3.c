#include<stdio.h>

void count(int arr[],int n,int max)
{
    int i,c[100],b[100],k;
    for(i=0;i<=max;i++)
    {
        c[i]=0;
    }
    for(i=0;i<n;i++)
    {
        c[arr[i]]=c[arr[i]]+1;
    }
    for(i=1;i<=max;i++)
    {
        c[i]=c[i]+c[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        c[arr[i]]--;
        b[c[arr[i]]]=arr[i];
    }
     printf("sorted\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",b[i]);
    }
    printf("enter the kth term\n");
    scanf("%d",&k);  
    printf("kth smallest %d\n",b[k-1]);
    printf("kth largset %d\n",b[n-k+1]);
}
    int main()
{
    int n,i,arr[10],max;
    printf("enter size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
       if(arr[i]>max)
       {
        max=arr[i];
       }
    }
    count(arr,n,max); 
    
}