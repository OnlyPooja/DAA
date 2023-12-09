#include<stdio.h>
int  common(int arr[],int arr1[],int n,int m,int c[])
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(arr[i]==arr[j])
        {
            c[k]=arr[i];
            i++;j++;k++;
        }
        if(arr[i]<arr1[j])
        {
            i++;
        }
        if(arr[i]>arr1[j])
        {
            j++;
        }

    }
    return k;
}
int main()
{
    int n,m,arr[10],arr1[10],c[20],k=-1,i;
    printf("enter value of n\n");
    scanf("%d",&n);
    printf("enter elements of array\n");
    for( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter range of m\n");
    scanf("%d",&m);
    for( i=0;i<m;i++)
    {
       scanf("%d",&arr1[i]);
    }
   k=common(arr,arr1,n,m,c);
   if(k!=-1)
   {
    printf("common elements\n");
    for( i=0;i<k;i++)
    {
        printf(" %d ",c[i]);
    }
   }
   else{
    printf("no common elemenyts\n");
   }
}