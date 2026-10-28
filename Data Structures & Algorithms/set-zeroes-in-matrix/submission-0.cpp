class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix){
        vector<vector<int>> matrix1=matrix;
        for(int i=0;i<matrix1.size();i++){
            for(int j=0;j<matrix1[i].size();j++){
                if(matrix1[i][j]==0){
                    for(int k=0;k<matrix1.size();k++){
                        matrix[k][j]=0;
                    }
                    for(int k=0;k<matrix1[i].size();k++){
                        matrix[i][k]=0;
                    }
                }
            }
        }
        
    }
};
