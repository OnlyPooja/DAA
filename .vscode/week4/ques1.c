#include<stdio.h>
int c=0;
void merge(int arr[],int l,int mid,int h)
{
    int i,j,k;
    int n1=mid-l+1;
    int n2=h-mid;
    int l1[n1+1],l2[n2];
    for(i=0;i<n1;i++)
    {
        l1[i]=arr[l+i];
       
    }
    for(j=0;j<n2;j++)
    {
        l2[j]=arr[mid+j+1];
    }
    i=0;j=0;k=l;
    while(i<n1 && j<n2)
    {
        c=c+1;
        if(l1[i]<=l2[j])
        {
        
            arr[k]=l1[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=l2[j];
            j++;
            k++;
        }
    }

    while(i<n1)
    {
        arr[k]=l1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=l2[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int l,int h)
{
    int mid;
     if(l<h)
     {
        mid=(l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge(arr,l,mid,h);
     }
}
int main()
{
    int n,i,arr[10];
    printf("enter value of n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,n-1);
    printf("array is \n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("comparision %d",c);
}