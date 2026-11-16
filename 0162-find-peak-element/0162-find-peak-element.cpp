class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.empty()) return 0;
        int low=0;
        int high=nums.size()-1;
        while(low<high){
            int mid=(low+high)/2;
            if(nums[mid]<nums[mid+1]){
                low=mid+1;
            }
            else{
             high=mid;   
            }
        }
        if(low<high){
            return high;
        }
        else{
            return low;
        }
    }
};