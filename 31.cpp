class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return;
        int i = nums.size()-2;
        int j = nums.size()-1;
        for(;i>=0;i--){
            if(nums[i]<nums[i+1]){
                for(;j>=i;j--){
                    if(nums[j]>nums[i]) break;
                }
                swap(nums[i],nums[j]);
                break;
            }
        }
        reverse(nums.begin()+i+1,nums.end());
    }
};
