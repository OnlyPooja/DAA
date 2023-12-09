#include<stdio.h>
int n;
void count(char arr[],char max, int c[])
{
    int i;
    for(i=0;i<max-96;i++)
    {
        c[i]=0;
    }
    for(i=0;i<n;i++)
    {
        c[arr[i]-97]=c[arr[i]-97]+1;
    }
}
int main()
{
    char arr[10],max;
    int i,c[30],m=1,index=-1;
    printf("enter valuue of n\n");
    scanf("%d",&n);
    fflush(stdin);
        for(i=0;i<n;i++)
    {
        scanf("%c",&arr[i]);
        fflush(stdin);
    }
    max='a';
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    count(arr,max,c);
    for(i=0;i<max-97;i++)
    {
        if(c[i]>m)
        {
            m=c[i];
            index=i;
        }
    }
     if(m==1){
            printf("No Duplicate Present\n");
        }
        else{
             printf("%c->%d\n",index+97,m);
        }
}