/*
	27. 移除元素

	给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
*/

#pragma once
#include "commont.h"

class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int nSize = nums.size();
		int val1 = 0;
		if (nSize > 1)
		{
			int lo = 0, hi = nSize - 1;
			while (lo < hi)
			{
				while(nums[nSize - 1] == val && hi > 1)
				{
					nums.pop_back();
					hi--;
					nSize--;
					if (nSize == 0)
					{
						return NULL;
					}
				}
				while(nums[lo] == val && lo < hi)
				{
					val1 = nums[nSize - 1];
					nums[nSize - 1] = nums[lo];
					nums[lo] = val1;
					nums.pop_back();
					hi--;
					nSize--;
					if (nSize == 0)
					{
						return NULL;
					}
				}
				if (nums[hi] == val)
				{
					val1 = nums[nSize - 1];
					nums[nSize - 1] = nums[hi];
					nums[hi] = val1;
					nums.pop_back();
					hi--;
					nSize--;
					if (nSize == 0)
					{
						return NULL;
					}
				}
				else
				{
					hi--;
				}
			}
		}
		else
		{
			if (nSize == 1)
			{
				if (nums[0] == val)
				{
					nums.pop_back();
					nSize--;
					if (nSize == 0)
					{
						return NULL;
					}
				}
			}
		}
		if (nSize == 0)
		{
			return NULL;
		}
		return nSize;
	}
};