//week02-4.cpp
// LeetCode 389.Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[26] = {};//用陣列統計左邊s的字母 大括號代表都是0
        for(char c: s){ //C++進階for迴圈 可把字母一個一個取出來

            H[c-'a'] += 1;
        }
        for(char c : t){
            H[c-'a']-=1;
            if(H[c-'a'] < 0) return c;
        }
        return 0;
    }
};
