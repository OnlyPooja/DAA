#include<stdio.h>
int main()
{
int arr[20],n,temp,i,j;
printf("enter value of n\n");
scanf("%d",&n);
for( i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("array in sorted form\n");
for(i=1;i<n;i++)
{
    temp=arr[i];
    j=i-1;
    while(j>=0 && temp<arr[j])
    {
        arr[j+1]=arr[j];
        j--;   
    }
    arr[j+1]=temp;
}

for(i=0;i<n;i++)
{
    printf("%d\n",arr[i]);
}
}