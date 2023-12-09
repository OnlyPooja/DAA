#include<stdio.h>
void insertion(int arr[10],int n)
{
    int i=0,j,temp,s=0,c=0;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && temp<arr[j])
        {
            c=c+1;
            arr[j+1]=arr[j];
            s=s+1;
            j--;
        }
        arr[j+1]=temp;
        s++;

    }
    printf("no of comaprison %d\n",c);
    printf("no of shift %d\n",s);
}
int main()
{
    int n,i,arr[10];
    printf("enter range of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    insertion(arr,n);
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
}