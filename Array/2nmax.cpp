#include <bits/stdc++.h>

using namespace std;

int main(){

int a[]={1,2,3,4,5,6};
int firstmax=INT_MIN;
int secondmax=INT_MIN;
int size=sizeof(a)/sizeof(a[0]);

for(int i=0;i<size;++i)
    {
       if(a[i]>firstmax) secondmax=firstmax , firstmax=a[i];
        // means firstmax is not great so make first max as second and update first
       else
       if(a[i]>secondmax) secondmax=a[i];
    }
    
    cout<<"first max: "<<firstmax;
    cout<<"Second max: "<<secondmax;

    return 0;
    
}

