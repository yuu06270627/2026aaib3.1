// week10-2a.cpp
// LeetCode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0; // 失敗的例子
        for (int i=low; i<=high; i++) { // 失敗的例子
            if (i%2==1) ans++; // 失敗的例子
        }
        return ans;
    }
};
