void countsort(int arr[],int n,int max)
{
    int i=0;
    int b[n];
    int c[max];
    for(i=0;i<=max;i++)
    {
        c[i]=0;
    }
    for(i=0;i<n;i++)
    {
       c[arr[i]]=c[arr[i]]+1;
    }
    for(i=1;i<=max;i++)
    {
        c[i]=c[i]+c[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
       c[arr[i]]--;
        b[c[arr[i]]]=arr[i];
         
    }
     printf("sorted\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}

int main()
{
    int n,i,arr[10],max=arr[0];
    printf("enter range of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    countsort(arr,n,max);
}







// count occurence of alphabet 

// #include<stdio.h>
// int n;
// void count(char arr[],char max,int c[])
// {
//     int i;
//     for(i=0;i<=max-96;i++)
//     {
//         c[i]=0;
//     }
//     for(i=0;i<n;i++)
//     {
//        c[arr[i]-97]=c[arr[i]-97]+1;
//     }
// }
// int main()
// {
//     int n,i,c[30],m=1,index=-1;
//     char arr[10],max;
//     printf("enter valuue of n\n");
//     scanf("%d",&n);
//     fflush(stdin);
//     for(i=0;i<n;i++)
//     {
//         scanf("%c",&arr[i]);
//         fflush(stdin);
//     }
//     max='a';
//     for(i=0;i<n;i++)
// {
//   if(arr[i]>max)
//   {
//     max=arr[i];
//   }
// }
// count(arr,max,c);
// for(i=0;i<n;i++)
// {
//     if(c[i]>max)
//     {
//         max=c[i];
//     }
// }
// if(m==1)
// {
//     printf("no duplicate\n");
// }
// else{
//     printf("duplicate\n");
// }
// }