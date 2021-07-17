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

## https://leetcode.com/problems/sqrtx/

Example 1:

Input: x = 4
Output: 2

Example 2:

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since the decimal part is truncated, 2 is returned.

```c++
class Solution {
public:
    int mySqrt(int x) {
        
        int left=0, right=x;
        int ans=-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            
            if((long long)mid*mid<=x)
            {   
                ans=mid;
                left=mid+1;
            }
            else
            {
                right=mid-1;
            }
        }
        return ans;
    }
};
```
## https://leetcode.com/problems/guess-number-higher-or-lower/

```c++

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left=1,right=n;
        int ans=-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(guess(mid)==0)
            {
                return mid;
            }
            else if(guess(mid)==-1)
            {
                right=mid-1;
            }else
            {
                left=mid+1;
            }
        }
        return 1;
    }
};
```
