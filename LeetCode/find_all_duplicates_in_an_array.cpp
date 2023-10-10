class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int size=nums.size();
        vector<int> v;
        for(int i=0; i<size; i++)
        {
            int abs_num = abs(nums[i]);
            if(nums[abs_num-1] < 0)
                v.push_back(abs_num);
            else
                nums[abs_num-1] = -nums[abs_num-1];
        }
        return v;
    }
};