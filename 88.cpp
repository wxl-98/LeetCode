/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 88.cpp
*       &Created Time:  2020年02月26日 星期三 23时59分22秒  CST  Day/057 and Week/08 of this year
*       &Description:
***********************************************************/


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    for (int i = 0; i < n; i++) {
        int j;
        for (j = m - 1; j >= 0; j--) {
            if (nums2[i] < nums1[j]) nums1[j + 1] = nums1[j];
            else break;
        }
        nums1[j + 1] = nums2[i];
        m++;
    }
}
