#include<stdio.h>
int count=0;
void merge(int arr[],int l,int mid,int h )
{
    int n1=mid-l+1,i,j,k;
    int n2=h-mid;
    int l1[n1];
    int l2[n2];
    for(i=0;i<n1;i++)
    {
        l1[i]=arr[i+l];
    }
    for(j=0;j<n2;j++)
    {
        l2[j]=arr[j+mid+1];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        count++;
        if(l1[i]<l2[j])
        {
           arr[k]=l1[i];
           i++;
           k++;
        }
        else{
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
    if(l<h)
    {
        int mid=(l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}
int main()
{
    int n,i,arr[10],c=0;
    printf("enter range\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
}