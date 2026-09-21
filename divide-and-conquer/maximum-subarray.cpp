class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int c_sum=0,max_sum;
        for(int i=0;i<nums.size();i++){
            c_sum+=nums[i];
            max_sum=max(max_sum,c_sum);
            if(c_sum<0) c_sum=0;

        }return max_sum;
    }
};