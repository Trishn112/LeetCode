class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()){
            return false;
        }
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0;
        int right=m*n-1;
        while(left<=right){
            int mid=(left+right)/2;
            int row=mid/n;
            int column=mid%n;
            if(matrix[row][column]==target){
                return true;
            }
            if(matrix[row][column]<target){
                left=mid+1;
            }
            if(matrix[row][column]>target){
                right=mid-1;
            }
        }return false;
    }
};