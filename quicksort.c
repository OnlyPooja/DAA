 #include<stdio.h>
 
 void quicksort(int arr[20],int l,int h)
 {
 	if(l<h)
 	{
 		int p=partition(arr,l,h);
 		 quicksort(arr,l,p-1);
 		 quicksort(arr,p+1,h);
	 }
 	
 }
 
 int partition(int arr[20],int l,int h)
 {
 	int x,i,j,temp;
 	x=arr[h];
 	i=l-1;
 	for(j=l;j<h;j++)
 	{
 		if(arr[j]<=x)
 		{
 			i++;
 			temp=arr[i];
 			arr[i]=arr[j];
 			arr[j]=temp;
		 }
	 }
	 temp=arr[i+1];
	 arr[i+1]=arr[h];
	 arr[h]=temp;
	 return i+1;
 }
 int main()
 {
 	int n,arr[20],i;
 	printf("enter size of array\n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	 quicksort(arr,0,n-1);
	 printf("after sorting\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\n",arr[i]);
	 }
 }

