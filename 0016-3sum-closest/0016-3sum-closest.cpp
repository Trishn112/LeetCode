class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.empty()) return 0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int sum=0;
        int closest=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            int left=i+1;
            int right=n-1;
            while(left<right){
                sum=nums[i]+nums[left]+nums[right];
                int diff=abs(sum-target);
                if(diff<abs(closest-target)){
                    closest=sum;
                }
                if(sum==target){
                    return sum;
                }
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return closest;
    }
};