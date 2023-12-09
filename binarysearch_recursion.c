#include<stdio.h>

int recursion(int arr[20],int low,int high,int key)
{
    int mid;
    if(low>high)
    {
        return -1;
    }
   else
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        return mid;
        else if(key>arr[mid])
        {
        return recursion(arr,mid+1,high,key);
        }
        else
        {
        return recursion(arr,low,mid-1,key);
        }
    }
}  
int main()
{
    int i=0,n,key,arr[20],low=0,high,c;
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter key\n");
    scanf("%d",&key);
    high=n-1;
    c=recursion(arr,low,high,key);
    if(c>=0)
 printf("element is present at %d\n",c);
    else
       printf("element is  not present");
}