class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=1;
        int h=nums.size()-1;
        int ans;
        while(l<h){
            int mid=(l+h)/2;
            int cnt=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<=mid){
                    cnt++;
                }
            }
            if(cnt>mid){
                h=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};
