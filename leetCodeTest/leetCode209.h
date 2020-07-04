#pragma once
#include "commont.h"

class Solution0 {
public:
	/*
	struct smallNums
	{
		long sum;
		int size;
		int lo_index;
		int hi_index;
	}
	struct smallNums_set
	{
	   bool opreate()(const smallNums& s1, const smallNums& s2)
	   {
		   if(s1.sum < )
	   }
	}
	*/
	int minSubArrayLen(int s, vector<int>& nums) {
		int vSize = nums.size();
		if (vSize < 1) {
			return 0;
		}
		else {
			count_index = 0;
			vector<vector<int>> findNums;
			vector<int> findIndex;
			int minSize = 0;
			int minIndex = 0;
			cmpHalfVal(nums, s, 0, vSize - 1, findNums, findIndex, minSize, minIndex);
			return minSize;
		}
	}
	int cmpHalfVal(vector<int>& nums, const int s, int lo, int hi, vector<vector<int>>& findNums, vector<int>& findIndex, int& minSize, int& minIndex)
	{
		if (lo >= 0 && hi < nums.size())
		{
			vector<int> findNum;
			int sum = 0;
			if (hi >= lo) {
				for (int i = lo; i <= hi; i++)
				{
					sum += nums[i];
					findNum.push_back(nums[i]);
				}
				if (sum >= s) {
					findNums.push_back(findNum);
					count_index++;
					findIndex.push_back(count_index);
					if (count_index == 1) {
						minSize = findNum.size();
						minIndex = count_index;
					}
					else {
						if (minSize > findNum.size())
						{
							minSize = findNum.size();
							minIndex = count_index;
						}
					}
					cmpHalfVal(nums, s, lo + 1, hi, findNums, findIndex, minSize, minIndex);
					cmpHalfVal(nums, s, lo, hi - 1, findNums, findIndex, minSize, minIndex);
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
		return 1;
	}

private:
	int count_index;
};

class Solution1 {
public:
	int minSubArrayLen(int s, vector<int>& nums)
	{
		int vSize = nums.size();
		int start = 0, end = 0;
		int sum = 0, minSize = vSize + 1, findSize = 0;
		if (vSize == 0)
		{
			return 0;
		}
		while (end < vSize)
		{
			sum += nums[end];
			while (sum >= s)
			{
				findSize = min(minSize, end - start + 1);
				minSize = findSize;
				if (start == end)
				{
					break;
				}
				sum -= nums[start];
				start++;
			}
			end++;
		}
		if (minSize > vSize)
		{
			return 0;
		}
		return minSize;
	}
};