class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0,start=0;
        for(int i=0;i<nums.size();i++){
            if(freq==0){
                start=nums[i];
            }
            if(nums[i]==start){
                freq++;
            }
            else
                freq--;

        }
        return start;
        
        
    }
        
};