## Basic program of Binary search
``` c++
#include <iostream>
#include <array>
using namespace std;

int binarySearch(int arr[],int n,int x)
{
		int left=0;
		int right=n-1;
		while(left<=right)
		{
			int mid=left+(right-left)/2;
			if( arr[mid]==x) 
				return mid;
			if( arr[mid]<x)
			{
				left=mid+1;
			}
			else
			{
				right=mid-1;
			}
		
		}
		return -1;
}

int main(void)
{
		int arr[]={1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
		int x=18;
		int n=sizeof(arr)/ sizeof(arr[0]);
		int result=binarySearch(arr,n,x);
		if(result==-1) cout<<"element not present";
		else
		cout<<"Element presnt at index "<<result<<"\n";
		return 0;
}

```
