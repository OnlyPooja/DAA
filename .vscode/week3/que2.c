#include<stdio.h>
int c=0;
int s=0;
void selection(int arr[],int n)
{
    int i,min,temp,j;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            c++;
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        s++;
    }
}
int main()
{
    int n,i,arr[10],key,j;
    printf("enter range\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selection(arr,n);
    printf("after sorting\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("shifts %d",s);
    printf("comparision %d",c);
}