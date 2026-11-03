class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int startRow=0,startCol=0;
        int endRow=r-1,endCol=c-1;
        vector<int> res;
        while(startRow<=endRow && startCol<=endCol){ // we can go for the (n<row*col) and increase n in every value inserted in res

        // print the top row
            for(int i=startCol;i<=endCol &&(startRow<=endRow && startCol<=endCol);i++){
                res.push_back(matrix[startRow][i]);
            }
            startRow++;
        //print the last coloumn
            for(int i=startRow;i<=endRow && (startRow<=endRow && startCol<=endCol);i++){
                res.push_back(matrix[i][endCol]);
            }
            endCol--;
        
        //print the last row
            for(int i=endCol;i>=startCol && (startRow<=endRow && startCol<=endCol);i--){
                res.push_back(matrix[endRow][i]);
            }
            endRow--;
            
        //print the first coloumn
            for(int i=endRow;i>=startRow && (startRow<=endRow && startCol<=endCol);i--){
                res.push_back(matrix[i][startCol]);
            }
            startCol++;
            }
        return res;
    }
};