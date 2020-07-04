/*
	15. 三数之和

	给你一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？请你找出所有满足条件且不重复的三元组。
	注意：答案中不可以包含重复的三元组。

	示例：
	给定数组 nums = [-1, 0, 1, 2, -1, -4]，
	满足要求的三元组集合为：
	[
	  [-1, 0, 1],
	  [-1, -1, 2]
	]
*/
#pragma once
#include "commont.h"

class Solution_15 {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		int numSize = nums.size();
		vector<vector<int>> findNums;
		if (numSize >= 3)
		{
			multiset<int> nums_set;
			for (int i = 0; i < numSize; i++)
			{
				nums_set.insert(nums[i]);
			}
			nums.clear();
			auto p = nums_set.begin();
			while (p != nums_set.end())
			{
				nums.push_back(*p);
				p++;
			}
			int left = 0, middle = 1, right = numSize - 1;
			int sum = 0;
			while (left < numSize - 2)
			{
				sum += nums[left];
				if (sum > 1)
				{
					return findNums;
				}
				while (right > middle)
				{
					sum += nums[right];
					while (middle < right)
					{
						sum += nums[middle];
						if (sum == 0)
						{
							vector<int> vNum;
							int lo = nums[left];
							int hi = nums[right];
							int mid = nums[middle];
							vNum.push_back(lo);
							vNum.push_back(mid);
							vNum.push_back(hi);
							if (findNums.empty())
							{
								findNums.push_back(vNum);
							}
							else
							{
								bool isNeed = true;
								for (int i = 0; i < findNums.size(); i++)
								{
									if (lo == findNums[i][0]){
										if (mid == findNums[i][1]) {
											if (hi == findNums[i][2]) {
												isNeed = false;
												break;
											}
										}
									}
								}
								if (isNeed)
								{
									findNums.push_back(vNum);
								}
							}
						}
						sum -= nums[middle];
						middle++;
						if (middle == right)
						{
							middle = left + 1;
							break;
						}
					}
					sum -= nums[right];
					right--;
				}
				sum -= nums[left];
				left++;
				if (middle == right)
				{
					right = numSize - 1;
					middle = left + 1;
				}
				if (left == numSize - 2)
				{
					break;
				}
			}
		}
		return findNums;
	}
};

class Solution_15_1 {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		int numSize = nums.size();
		vector<vector<int>> findNums;
		vector<int> vNum(3);
		if (numSize >= 3)
		{
			sort_slf(nums);
			for (int i = 0; i <= numSize-3 && nums[i] <= 0; i++)
			{
				for (int j = numSize - 1; j >= 2 && nums[j] >= 0; j--)
				{
					for (int k = i + 1; k < j; k++)
					{
						int sum = nums[i] + nums[j] + nums[k];
						if (sum == 0)
						{
							vNum[0] = nums[i];
							vNum[1] = nums[k];
							vNum[2] = nums[j];
							if (findNums.empty())
							{
								findNums.push_back(vNum);
							}
							else
							{
								bool isNeed = true;
								for (int i = 0; i < findNums.size(); i++)
								{
									if (vNum[0] == findNums[i][0]) {
										if (vNum[1] == findNums[i][1]) {
											if (vNum[2] == findNums[i][2]) {
												isNeed = false;
												break;
											}
										}
									}
								}
								if (isNeed)
								{
									findNums.push_back(vNum);
								}
							}
						}
					}
				}
			}
		}
		return findNums;
	}

	void sort_slf(vector<int>& nums)
	{
		vector<int> newNum(nums.size());
		sort_slf(nums, 0, nums.size()-1, newNum);
	}

	void sort_slf(vector<int>& nums, int lo, int hi, vector<int>& newNum)
	{
		if (hi <= lo) { return; }
		int mid = lo + (hi - lo) / 2;
		sort_slf(nums, lo, mid, newNum);
		sort_slf(nums, mid + 1, hi, newNum);
		merge_slf(nums, lo, mid, hi, newNum);
	}

	void merge_slf(vector<int>& nums, int lo, int mid, int hi, vector<int>& newNum)
	{
		for (int k = lo; k <= hi; k++)
		{
			newNum[k] = nums[k];
		}
		int i = lo, j = mid + 1;
		for (int k = lo; k  <= hi; k++)
		{
			if (i > mid)
			{
				nums[k] = newNum[j++];
			}
			else if (j > hi)
			{
				nums[k] = newNum[i++];
			}
			else if(newNum[j] < newNum[i])
			{
				nums[k] = newNum[j++];
			}
			else
			{
				nums[k] = newNum[i++];
			}
		}
	}
};