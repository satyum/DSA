class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>countmap;
        for(int x: nums)
        {
            if(countmap[x]) return true;
            
            countmap[x]++;
        }
        return false;
    }
};
