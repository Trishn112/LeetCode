class Solution {
public:
    int countCommas(int n) {
        long long total=0;
        for(long long p=1000;p<=n;p+=1000){
            total+=n-p+1;
            return total;
        }
        return total;
        
    }
};