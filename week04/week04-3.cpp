//week04-3.cpp
//LeetCode 896

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int red = 0, green = 0;//紅色代表往上 綠色往下
        for (int i=0; i<nums.size()-1;i++){
            if(nums[i]<nums[i+1])red++;
            if(nums[i]>nums[i+1])green++;
        }
        if(red==0 || green==0)return true;
        return false;
    }
};
