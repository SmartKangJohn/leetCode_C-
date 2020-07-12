#include "leetCode_practice.h"

int Solution_numPractice::pivotIndex(vector<int>& nums)
{
	int nSize = nums.size();
	int findmid = -1;
	if (nSize >= 2)
	{
		int sumL = 0, sumR = 0;
		int p_l = -1;
		int p_r = nSize - 1;
		while (p_r > p_l + 1)
		{
			sumR += nums[p_r];
			p_r--;
		};
		if (sumL == sumR) {
			return p_l + 1;
		}
		while (p_l < nSize - 2)
		{
			p_l++;
			sumL += nums[p_l];
			sumR -= nums[p_l + 1];
			if (sumL == sumR)
			{
				return p_l + 1;
			}
		}
	}
	else
	{
		return -1;
	}
	return findmid;
}

int Solution_numPractice::searchInsert(vector<int>& nums, int target)
{
	int nSize = nums.size();
	int findIndex = 0;
	if (nSize < 1)
	{
		return 0;
	}
	else
	{
		int lo = 0, hi = nSize - 1;
		if(lo < hi)
		{
			int mid = lo + (hi - lo) / 2;
			if (nums[mid] == target)
			{
				return mid;
			}
			while (nums[mid] < target && mid < hi-1)
			{
				lo = mid;
				mid = lo + (hi - lo) / 2;
				if (nums[mid] == target)
				{
					return mid;
				}
			}
			while (nums[mid] > target && mid > lo)
			{
				hi = mid;
				mid = lo + (hi - lo) / 2;
				if (nums[mid] == target)
				{
					return mid;
				}
			}
			for (int i = lo; i <= hi;)
			{
				if (nums[i] == target)
				{
					return i;
				}
				else if(nums[i] < target)
				{
					i++;
				}
				else if (nums[i] > target)
				{
					return i;
				}
				if (i == hi && nums[i] < target)
				{
					return i + 1;
				}
			}
		}
		else
		{
			if (nums[0] >= target)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	return findIndex;
}

vector<vector<int>> Solution_numPractice::merge(vector<vector<int>>& intervals)
{
	vector<vector<int>> vfind1;
	vector<int> vf1(2, 0);
	int nSize = intervals.size();
	for (int i = 0; i < nSize; i++)
	{
		for (int j = 0; j < nSize; j++)
		{
		}
	}
	return vfind1;
}
