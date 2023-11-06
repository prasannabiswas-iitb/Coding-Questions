// Initial solution
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> inter(nums);
        int n=nums.size();
        for(int i=0; i<n; i++)
            nums[(i+k)%n] = inter[i];
    }
};

//O(n)--O(1)
// After hints
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k%n!=0){
            k=k%n;
            // reverse entire array
            int left=0;
            int right=n-1;
            while(left<right){
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
            // reverse both parts
            left=0;
            right=k-1;
            while(left<right && right<n){
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
            left=k;
            right=n-1;
            while(left<right && right<n){
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
        }
    }
};