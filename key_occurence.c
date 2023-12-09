#include<stdio.h>
#include<math.h>
int linear(int arr[],int n,int key,int *c)
{
    
    *c=0;
    int flag=-1,i;
    for(i=0;i<n;i++)
    {
    if(arr[i]==key)
    {
        flag=0;
        *c=*c+1;
    }
    }
    return flag;
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
    c=linear(arr,n,key,&cmp);
    if(c!=-1)
    {
        printf("present\n");
        printf("no of occurences %d",cmp);
    }
    else{
        printf("not presnet\n");
    }
}

