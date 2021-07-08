class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>v1(32,0);
        for(auto x:nums)
        {
            for(int i=0;i<32;++i)
            {
                if(x &(1<<i))
                v1[i]++;
            }
        }
        int res=0;
        for(int i=0;i<32;++i)
        {
            if(v1[i] % 3==1)
                res+=(1<<i);
        }
        return res;
    }
};
