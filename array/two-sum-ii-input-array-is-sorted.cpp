class Solution {
public:
    vector<int> twoSum(vector<int>& number, int target) {
        if(number.empty()){
            return{};
        }
        int n=number.size();
        int left=0,right=n-1,sum=0;
        while(left<right){
            sum=number[left]+number[right];
            if(sum==target){
                return {left+1,right+1};
            }
            if(sum<target){
                left++;
            }
            else{
                right--;
            }
        }
        return {};

    }
};