class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.empty()) return 0;
        int range=0,arr=0,n=nums.size();
        for(int i=0;i<nums.size();i++){
            range^=nums[i];
        }
        for(int i=0;i<n+1;i++){
            arr^=i;
        }
        return range^arr;
        
    }
};