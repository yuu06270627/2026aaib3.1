//week03-2.cpp
//LeetCode 283
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k =0;//目標放在哪裡
        for(int num:nums){//c++進階for迴圈
            if(num !=0) {
                nums[k]=num;//把數字放左邊
                k++;
            }
        }
        for(int i=k;i<nums.size(); i++){
        nums[i]=0;
        }

    }
};
