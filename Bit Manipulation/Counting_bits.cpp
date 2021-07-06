//for O(n log n)

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;
        for(int i=0;i<=n;++i)
        {
            int n=i;
            int count=0;
            while(n)
            {
                count++;
                n=n&(n-1);
                
            }
            res.push_back(count);
        }
        return res;
    }
};
