class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low=1;
        long long high=num;
        while(low<=high){
            long long mid=(low+high)/2;
            long long s=mid*mid;
            if(s==num){
                return true;
            }
            else if(s<num){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};