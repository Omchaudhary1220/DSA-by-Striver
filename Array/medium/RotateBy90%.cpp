//brute force solution using extra space.
void rotateMatrix(vector<vector<int>> &mat){
	 int n=mat.size();
    vector<vector<int>>mat2(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            mat2[i][n-j-1]=mat[j][i];
        }
    }
    mat=mat2;
}
//optimised solution with no extra space.
class Solution {
private:
    void swap(int* p,int* q){
        int temp=*p;
        *p=*q;
        *q=temp;
    }
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(&matrix[i][j],&matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
