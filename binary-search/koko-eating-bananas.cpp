class Solution {
public:
    int max_element(vector<int>&arr){
        int max=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        return max;
    }
    long long rate(vector<int>&arr,int hours){
        long long totalHrs=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
        totalHrs+=((long long)arr[i]+hours-1)/hours;        
        }
        return totalHrs;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=max_element(piles);
        int mid=0;
        while(low<=high){
            mid=(low+high)/2;
            long long hourstaken=rate(piles,mid);
            if(hourstaken<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};