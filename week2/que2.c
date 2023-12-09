#include<stdio.h>
int main()
{
    int i,n,arr[10],flag=0,j,k;
    printf("enter value of n\n");
    scanf("%d",&n);
    printf("enter elemets of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]==arr[k])
                {
                    printf("%d %d %d",i,j,k);
                    return;
                }
            }
        }
    }
    printf("not found\n");
}