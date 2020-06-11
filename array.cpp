#include<iostream>
using namespace std;
     
int main()
{
	int n,i,arr[10],max,min; // Here you can change the size of array.
	cout<<"enter the size of an array max [10]\n";// Mention your changed array size here.
	cin>>n;
	cout<<"enter elements\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int smallest=max;//max holds the garbage value.
	int secondsmallest=max;

	for(i=0;i<n;i++)
	{
		if(arr[i]<smallest)
		{
			secondsmallest=smallest;
			smallest=arr[i];
		}
		if(arr[i]>smallest && arr[i]<secondsmallest)
		{
			secondsmallest=arr[i];
		}
	}
	if(secondsmallest==max)
	{
		cout<<"All elements are same";
    }
	else 
	{
	 cout<<"second smallest element is "<<secondsmallest;
    }
	return 0;
}
