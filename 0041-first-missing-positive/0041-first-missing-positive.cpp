class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.empty()){
            return 1;
        }
        int i=0;
        int n=nums.size();
        while(i<n){
            int indexcorr;
            if(nums[i] >= 1 && nums[i] <= n){
                int indexcorr=nums[i]-1;
                if(nums[i]!=nums[indexcorr]){
                    swap(nums[i],nums[indexcorr]);
                }
                else{
                    i++;
                }               
            }
            else{
                i++;
            }
        }
        for(int j=0;j<n;j++){
            if(nums[j]!=j+1){
                return j+1;
            }
        }
        return n+1;
    }
};