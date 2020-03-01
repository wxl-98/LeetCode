/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: LeetCode219.cpp
*       &Created Time:  2020年03月01日 星期日 23时19分31秒  CST  Day/061 and Week/09 of this year
*       &Description:
***********************************************************/


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> u;
        k++;
        for (int i = 0; i < nums.size(); i++) {
            u[nums[i]] += 1;
            if (i >= k) u[nums[i - k]] -= 1;
            if (u[nums[i]] == 2) return true;
        }
        return false;
    }
};
