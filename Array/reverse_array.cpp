/*  reverse the array*/

#include <bits/stdc++.h>
using namespace std;


	
void revarray(int arr[],int start,int end){
	while(start<end){
		int temp= arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
		}
	}
	
	void printarray(int arr[],int size){
		for (int i=0;i<size;i++)
		cout<<arr[i]<<" ";
		cout<<"\n";
		}

int main(){
	
	int arr[] = {1,2,3,4,5,6};
	int n=sizeof(arr) / sizeof(arr[0]);
	printarray(arr,n);
	revarray(arr ,0,n-1);
	cout<<"reverese array\n";
	printarray(arr,n);
	return 0;
	}
