class Solution {
public:
    bool search(vector<int>& arr, int target) {
        if(arr.empty()){
            return false;
        }
        int low=0,high=arr.size()-1;
        int mid=0;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]==target){
                return true;
            }
            if(arr[mid]==arr[low] && arr[high]==arr[mid]){
                low++;
                high--;
                continue;
            }
            if(arr[low]<=arr[mid]){
                if(arr[low]<=target && target<arr[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(arr[mid]<target && arr[high]>=target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }

        } return false;
    }
};