/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode217.cpp
*       &Created Time:  2020年03月01日 星期日 23时19分23秒  CST  Day/061 and Week/09 of this year
*       &Description:
***********************************************************/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> u;
        for (int i = 0; i < nums.size(); i++) {
            if (u.find(nums[i]) != u.end()) return true;
            u.insert(nums[i]);
        }
        return false;
    }
};
