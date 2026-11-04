//week09-1b.cpp
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N = mat.size(); // 矩陣的大小
        int ans = 0;
        // 迴圈裡面, 要查對角線 方法1: 查兩條對角線
        for (int i=0; i<N; i++) {
            ans += mat[i][i];
        }
        for (int i=0; i<N; i++) {
            ans += mat[N-1-i][i];
        }
        if (N%2==1) ans -= mat[N/2][N/2];
        return ans;
    }
};
