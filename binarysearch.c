/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int binary(int arr[20],int key,int low,int high)
{
    
    while(low<=high)
    {
    int mid=(low+(high-low))/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(key>arr[mid])
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
    }
    return -1;
}

int main()
{
    int i=0,n,key,arr[20],low=0,high;
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    high=n-1;
    printf("enter the key to be searched\n");
    scanf("%d",&key);
    int c=binary(arr,key,low,high);
    if(c==-1)
    printf("not found\n");
    else
    printf("found at location %d",c);
    return 0;
}