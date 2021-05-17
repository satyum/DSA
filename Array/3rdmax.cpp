#include <bits/stdc++.h>

using namespace std;

int main(){

int a[]={1,2,3,4,5,6,7};
int fm=INT_MIN,sm=INT_MIN,tm=INT_MIN;

for(int x : a)
    {
       if(x>fm) tm=sm ,sm=fm ,fm=x;

       else if (x==fm) continue;
       else if (x>sm) tm =sm , sm=x;
       else if (x=sm)  continue;
       else if (x>tm) tm=x;
    }
    cout<<"first max"<<fm;
    cout<<"second max"<<sm;
    cout<<"third max"<<tm;

  return 0;

}

