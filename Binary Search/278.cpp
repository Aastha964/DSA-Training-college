class Solution {
public:
    int firstBadVersion(int n) {
        int low=1;
        int high=n;
        if(low<=high){
            int mid=(low+high)/2;
            if(isBadVersion(mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
