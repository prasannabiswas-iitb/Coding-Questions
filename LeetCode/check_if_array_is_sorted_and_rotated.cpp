class Solution {
public:
    bool check(vector<int>& nums) {
        int count_pair=0, n=nums.size();
        for(int i=0; i<n-1; i++){
            if(nums[i]>nums[i+1])
                count_pair++;
        }
        if(nums[n-1]>nums[0])
            count_pair++;
        if(count_pair<=1)
            return true;
        return false;
    }
};