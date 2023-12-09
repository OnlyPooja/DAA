 
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
 	int i=0,n,arr[20],j,key,flag=0;
 	printf("enter range of array\n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	 mergesort(arr,0,n-1);
     for(i=0;i<n;i++)
 	{
 		printf(" %d ",arr[i]);
	 }
     printf("enter the key\n");
     scanf("%d",&key);
     i=0;j=n-1;
     while(i<j)
     {
         if(arr[i]+arr[j]==key)
         {
            flag=1;
            printf("%d  %d",arr[i],arr[j]);
            break;
         }
         else if(arr[i]+arr[j]<key)
         {
            i++;
         }
         else
         {
            j--;
         }
     }
     if(flag==0)
     {
        printf("no such element exist\n");
     }
 }
