#include <bits/stdc++.h>

using namespace std;

int main(){

int arr[]={1, 2, 3 ,5, 4,7,6};
int size=sizeof(arr)/sizeof(arr[0]);
int max=arr[0],min=arr[0];

    for(int i=0;i<size;++i)
    {
        if(arr[i]>max) max=arr[i];
        else
        if(arr[i]<min) min=arr[i];
    }

    cout<<"max :"<<min;
    cout<<"min :"<<max;

    return 0;
}

