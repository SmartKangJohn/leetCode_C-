#include "leetcode_doublePtrPractice.h"

void Solution_doublePtrPractice::reverseString(vector<char>& s)
{
	int lo = 0, hi = s.size() - 1;
	if (hi < 1)
	{
		return;
	}
	char c1;
	while (hi > lo)
	{
		c1 = s[lo];
		s[lo] = s[hi];
		s[hi] = c1;
		lo++;
		hi--;
	}
}

int Solution_doublePtrPractice::arrayPairSum(vector<int>& nums)
{
	sort(nums.begin(), nums.end());
	int sum = 0;
	for (int i = 0; i < nums.size(); i+=2)
	{
		sum += nums[i];
	}
	return sum;
}

vector<int> Solution_doublePtrPractice::twoSum(vector<int>& numbers, int target)
{
	int lo = 0, hi = numbers.size() - 1;
	int mid = 0;
	vector<int> vfind(2);
	if (hi - lo < 1)
	{
		vfind.clear();
		return vfind;
	}
	while (numbers[hi] > target && target > 0)
	{
		hi--;
	}
	for (int i = hi; i > lo; i--)
	{
		for (int j = lo; j < i; j++)
		{
			if (numbers[i] + numbers[j] == target)
			{
				vfind[0] = j + 1;
				vfind[1] = i + 1;
				return vfind;
			}
		}
	}
	vfind.cend();
	return vfind;
}

int Solution_doublePtrPractice::removeElement(vector<int>& nums, int val)
{
	if (nums.empty())
	{
		return 0;
	}
	int lo_fast = 0, lo_later = 0;
	int nSize = nums.size();
	while (lo_fast < nSize)
	{
		if (nums[lo_fast] != val)
		{
			nums[lo_later] = nums[lo_fast];
			lo_later++;
		}
		lo_fast++;
	}
	return lo_later;
}

int Solution_doublePtrPractice::findMaxConsecutiveOnes(vector<int>& nums)
{
	int nSize = nums.size();
	int findSize = 0;
	int total = 0;
	for (int i = 0; i < nSize; i++)
	{
		if (nums[i] == 0)
		{
			total = 0;
		}
		else
		{
			total++;
		}
		if (total > findSize)
		{
			findSize = total;
		}
	}
	return findSize;
}

int Solution_doublePtrPractice::minSubArrayLen(int s, vector<int>& nums)
{
	if (nums.empty())
	{
		return 0;
	}
	int hi = 0;
	int minSize = nums.size()+1;
	int sum = 0;
	for (int lo = 0; lo < nums.size()-1; lo++)
	{
		if (lo == 0)
		{
			sum += nums[lo];
		}
		while (sum < s && hi < nums.size()-1)
		{
			hi++;
			sum += nums[hi];
		}
		if (hi - lo + 1 < minSize && sum >= s)
		{
			minSize = hi - lo + 1;
		}
		sum -= nums[lo];
	}
	if (minSize > nums.size())
	{
		minSize = 0;
	}
	return minSize;
}
