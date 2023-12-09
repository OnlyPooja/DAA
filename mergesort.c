 
 #include<stdio.h>
 
 void mergesort(int arr[20],int l,int h)
 {
 	int m;
 	if(l<h)
 	{
 		m=(l+h)/2;
 		mergesort(arr,l,m);
 		mergesort(arr,m+1,h);
 		merge(arr,l,m,h);
	 }
 }
 
 void merge(int arr[20],int l,int m,int h)
 {
 	int i=0,j=0,k=1;
 	int n1=m-l+1;
 	int n2=h-m;
 	int l1[n1],l2[n2];
 	for(i=0;i<n1;i++)
 	{
 		l1[i]=arr[l+i];
	 }
	 for(j=0;j<n2;j++)
	 {
	 	l2[j]=arr[m+1+j];
	 }
	 i=0;
	 j=0;
	 k=1;
	 while(i<n1 && j<n2)
	 {
	 if(l1[i]<=l2[j])
	 {
	 	arr[k]=l1[i];
	 	i++;
	 	k++;
	 }
	 if(l2[j]<l1[i])
	 {
	 	arr[k]=l2[j];
	 	k++;
	 	j++;
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
 int main()
 {
 	int i=0,n,arr[20];
 	printf("enter range of array\n");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	 mergesort(arr,0,n-1);
	 printf("arrray in sorted form\n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d\n",arr[i]);
	 }
}
