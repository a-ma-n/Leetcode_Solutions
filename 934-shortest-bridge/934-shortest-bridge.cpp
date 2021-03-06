class Solution {
public:
    int shortestBridge(vector<vector<int>>& A) {
        int r=A.size(),c=A[0].size();
        for(int i =0,found=0;!found && i<r;++i)
            for(int j=0;!found && j<c;++j)
                found = paint(A,i,j);
        
    for (int cl = 2; ; ++cl)
        for (int i = 0; i < A.size(); ++i)
            for (int j = 0; j < A.size(); ++j) 
                    if (A[i][j] == cl && ((expand(A, i - 1, j, cl) || expand(A, i, j - 1, cl) || 
                    expand(A, i + 1, j, cl) || expand(A, i, j + 1, cl))))
                        return cl - 2;
    }
    int paint(vector<vector<int>>& A, int i, int j) {
    if (min(i, j) < 0 || max(i, j) == A.size() || A[i][j] != 1)
        return 0;
    A[i][j] = 2;
    return 1 + paint(A, i + 1, j) + paint(A, i - 1, j) + paint(A, i, j + 1) + paint(A, i, j - 1);
}
    bool expand(vector<vector<int>>& A, int i, int j, int cl) {
    if (min(i, j) < 0 || max(i, j) == A.size())
        return false;
    A[i][j] = A[i][j] == 0 ? cl + 1 : A[i][j];
    return A[i][j] == 1;
} 
};