#include<stdio.h>
int binarysearch(int arr[],int l,int r,int val)
{
	int mid;
	if(r>=l)
	{
		mid=l+(r-l)/2;
		if(arr[mid]==val)
		{
			return mid+1;

		}
		if(val<arr[mid])
		{
			return binarysearch(arr,l,mid-1,val);
		}
		
		
		return binarysearch(arr,mid+1,r,val);
	}
	return -1;
}
int main()
{
    int n,res,val;
	printf("Enter the total number of jails in Humayun's Place:\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter the jail number %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the clue given by Humayun:\n");
	scanf("%d",&val);
	res=binarysearch(arr,0,n-1,val);
	if(res==-1)
	{
		printf("The King has been fooled by Humayun");
		

	}
	else
	printf("Hurray!The King rescued the Queen\n");

	
	
	
	return 0;
}