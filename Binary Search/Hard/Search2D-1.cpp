class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lb=0,ub=matrix.size()*matrix[0].size()-1;
        while(lb<=ub){
            int mid=(lb+ub)/2;
            int row=mid/matrix[0].size();
            int col=mid%matrix[0].size();
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]>target){
                ub=mid-1;
            }
            else{
                lb=mid+1;
            }
        }
        return false;
    }
};