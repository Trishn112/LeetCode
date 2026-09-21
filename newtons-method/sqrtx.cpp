class Solution {
public:
    int mySqrt(int x) {
     int low=0;
     int high=x;
     long long mid;
     int ans=0;
    while(low <= high){
        mid=(low+high)/2;
        if((mid*mid)==x){
            return mid;
        }
        if((mid*mid)<x){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
     }
    return ans;
   
    }
};