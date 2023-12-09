#include<stdio.h>
#include<math.h>
int  jump(int arr[10],int n,int key,int *c)
{
    int i;
    *c=0;
    if(key<arr[0] || key >arr[n-1])
    {
        *c=*c+1;
        return -1;
    }
    else{
        int blocksize=sqrt(n);
    int left=0;
    int right=blocksize;
    while(key>arr[right] && right<n)
    {
        *c=*c+1;
        left=right;
        right=right+blocksize;
    }
    for(i=left;i<=right;i++)
    {
        *c=*c+1;
        if(arr[i]==key)
        return i;
    }
    return -1;
    }
    
}
int main()
{
    int n,i,arr[10],key,cmp=0,c;
    printf("enter the range of array\n");
    scanf("%d",&n);
    printf("enter the numbers\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("enter the key to be searched\n");
    scanf("%d",&key);
    c=jump(arr,n,key,&cmp);
    if(c!=-1)
    {
        printf("present\n");
        printf("no of comparision %d",cmp);

    }
    else{
        printf(" not present\n");
        printf("no of comparision %d",cmp);
    }

}

