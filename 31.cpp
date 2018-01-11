class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int temp=0;
        int n=nums.size();
        if(n==1) return;
        if(n==2){
            temp=nums[0];
            nums[0]=nums[1];
            nums[1]=temp;
        }
        int i=n-2;
        
        for(;i>=0;i--){
            if(nums[i+1]>nums[i]&&(i+2)!=n){
                for(int i+)
                    }else if(nums[i+1]>nums[i]){
                        temp=nums[i+1];
                        nums[i+1]=nums[i];
                        nums[i]=temp;
                        break;
                    }
        }
        if(i==-1){
            i=n-2;
            for(;i>=0;i--){
                temp=nums[i+1];
                nums[i+1]=nums[i];
                nums[i]=temp;
            }
        }
        return;
    }
};
