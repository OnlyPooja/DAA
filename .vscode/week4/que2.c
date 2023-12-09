#include<stdio.h>
int s=0,c=0;
int partition(int arr[],int l,int h)
{
    int j,i,temp;
    int x=arr[h];
    i=l-1;
    for(j=l;j<h;j++)
    {
        c++;
        if(arr[j]<=x)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            s++;
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[h];
    arr[h]=temp;
    s++;
    return i+1;
}
void quicksort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p=partition(arr,l,h);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,h);
    }
}
int main()
{
    int n,i,arr[10];
    printf("enter size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);
    printf("array in soretd form\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("comparision %d",c);
    printf("swappings %d",s);
}