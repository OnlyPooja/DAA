/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int linear(int arr[20],int key,int n)
{
    int location=-1;
    int i=0;
    while(i<n-1 && arr[i]!=key)
    {
        i=i+1;
        if(arr[i]==key)
        {
        location=i;
        return location;
        }
    }
    return -1;
}

int main()
{
    int i=0,n,key,arr[20];
    printf("enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the key to be searched\n");
    scanf("%d",&key);
    int c=linear(arr,key,n);
    if(c>=0)
    printf("found at location %d",c);
    else
    printf("not found\n");
    
}