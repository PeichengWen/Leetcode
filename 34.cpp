class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int n = nums.size();
        vector<int> res;
        if(n==0) return {-1,-1};
        int right = n-1;
        while(left<right){
            int mid = left+(right-left)/2;
            if(nums[mid]>=target) right = mid;
            else left = mid+1;
        }
        
        if(nums[left]!=target) return {-1,-1};
        res.push_back(left);
        left = 0;
        right = n-1;
        while(left<right){
            int mid = left+(right-left)/2;
            if(nums[mid]<=target) left = mid+1;
            else right = mid;
        }
        if(nums[left]==target)
            res.push_back(left);
        else res.push_back(left-1);
        
        return res;
        
        
        
    }
    
};
