class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(),col=matrix[0].size();

        //make the start and end of the matrix for binary search index
        int start=0;
        int end=row*col-1;
        while(start<=end){
            //get the mid index for search
            int number=start+(end-start)/2;
            //calculate the row and col as per the index no of mid with binary seacr option
            int r=number/col;
            int c=number%col;
            if(matrix[r][c]==target){
                return true;
            }
            else if(matrix[r][c]<target){
                start=number+1;
            }
            else{
                end=number-1;
            }
        }
        return false;
    }
};