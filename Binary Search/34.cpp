class Solution {
public:
    int searchfirst(vector<int>&nums,int target){
        int l=0;
        int h=nums.size()-1;
        int first=-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                first=mid;
                h=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return first;
    }

  int searchlast(vector<int>&nums,int target){
    int l=0;
    int h=nums.size()-1;
    int last=-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(nums[mid]==target){
            last=mid;
            l=mid+1;
        }
        else if(nums[mid]<target){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return last;
  }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first,last;
        first=searchfirst(nums,target);
        last=searchlast(nums,target);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};
