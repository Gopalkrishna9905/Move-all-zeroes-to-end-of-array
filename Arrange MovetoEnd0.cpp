#include<iostream>
using namespace std;

void MoveToZeroEnd(int arr[],int n)
{
	for(int i =0 ;i<n;i++)
	{
		for(int j =i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


 void printArray(int arr[], int n)
 {
 	for(int i =0 ; i< n ;i++)
 	{
 		cout<<arr[i]<<" ";
	 }
 }

int main()
{
	int arr[]={5,0,3,7,0,0,9,6,47,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	 MoveToZeroEnd(arr,n);
	printArray(arr,n);
}
