class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int n = nums.size();
        if(n==0) return 0;
        int j = n-1;
        while(i<j){
            int mid = i+(j-i)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>target) j = mid;
            else i=mid+1;
        }
        if(i==n-1&&nums[i]<target) return n;
        return i;
    }
};
