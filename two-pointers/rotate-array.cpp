class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};


// brute force:-

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         if(nums.empty()){
//             return;
//         }
//         if(k>nums.size()){
//             k=k%nums.size();
//         }
//         vector<int>temp(k);
//         for(int i=0;i<k;i++){
//             temp[i]=nums[nums.size()-k+i];
//         }
//         for(int i=nums.size()-k-1;i>=0;i--){
//             nums[i+k]=nums[i];
//         }
//         for(int i=0;i<k;i++){
//             nums[i]=temp[i];
//         }
//     }
// };