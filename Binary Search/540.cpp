class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=1;
        int n=nums.size();
        int h=n-2;
        if(nums.size()==1){
            return nums[0];
        }
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[n-1]!=nums[n-2]){
            return nums[n-1];
        }
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m-1]!=nums[m] && nums[m+1]!=nums[m]){
                return nums[m];
            }
            if(m%2==1 && nums[m-1]==nums[m] || m%2==0 && nums[m+1]==nums[m]){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return -1;
    }
};
