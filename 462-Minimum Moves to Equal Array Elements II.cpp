//
//  462-Minimum Moves to Equal Array Elements II.cpp
//  leecode
//  注意使用nth_element的库方法来找中位数，实现原理是快速排序的单次排序，比sort复杂度低
//  Created by lixiangqian on 17/2/2.
//  Copyright © 2017年 lixiangqian. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <math.h>
#include <stdlib.h>

using namespace std;
int minMoves2(vector<int>& nums) {
    int count = 0;
    long s = nums.size();
    if (s == 1) {
        return 0;
    }
    nth_element(nums.begin(), nums.begin()+s/2, nums.end());
    for (int i = 0; i < s; i ++) {
        count += abs(nums[i]- nums[s/2]);
    }
    return count;
}
int main(){
    vector<int> nums(8);
    nums[0] = 3;
    nums[1] = 0;
    nums[2] = 6;
    nums[3] = 2;
    nums[4] = 4;
    nums[5] = 7;
    nums[6] = 0;
    nums[7] = 0;
    int result = minMoves2(nums);
    cout<<result<<endl;
    cout<<"hello world!"<<endl;
    return 0;
}
