//week03-1.cpp
//LeetCode 1822.
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int N =nums.size();//陣列.size()大小
        int neg = 0;//負數有幾個?
        for(int num : nums){
            if(num==0)return 0;
            if(num<0)neg++;
        }
        if(neg%2==0)return 1;
        return -1;
        //下面是壞掉的版本 因為太多數相乘就爆炸了
        //int ans = 1;
        //for(int i=0; i<N;i++){
        //    ans = ans * nums[i];
        //}
        //if(ans>0)return 1;
        //if(ans<0)return -1;
        //return 0;
    }
};
