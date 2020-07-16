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
	sort(intervals.begin(), intervals.end());
	vector<vector<int>> vfind1;
	for (int i = 0; i < intervals.size();) {
		int t = intervals[i][1];
		int j = i + 1;
		while (j < intervals.size() && intervals[j][0] <= t) {
			t = max(t, intervals[j][1]);
			j++;
		}
		vfind1.push_back({ intervals[i][0], t });
		i = j;
	}
	return vfind1;
}

void Solution_numPractice::rotate(vector<vector<int>>& matrix)
{
	int nSize = matrix.size();
	int pSize = matrix[0].size();
	int ex1;
	for (int i = 0; i < nSize; i++)
	{
		for (int j = 0; j < pSize/2; j++)
		{
			ex1 = matrix[i][j];
			matrix[i][j] = matrix[i][pSize-1-j];
			matrix[i][pSize - 1 - j] = ex1;
		}
	}
	for (int i = 0; i < nSize; i++)
	{
		for (int j = 0; j < pSize - i; j++)
		{
			ex1 = matrix[i][j];
			matrix[i][j] = matrix[nSize-1-j][pSize - 1 - i];
			matrix[nSize - 1 - j][pSize - 1 - i] = ex1;
			if (j == pSize - 1)
			{
				break;
			}
		}
		if (i == nSize - 1)
		{
			break;
		}
	}
}

void Solution_numPractice::setZeroes(vector<vector<int>>& matrix)
{
	vector<vector<int>> vfind;
	vector<int> vf(2, -1);
	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = 0; j < matrix[0].size(); j++)
		{
			if (matrix[i][j] == 0)
			{
				vf[0] = i;
				vf[1] = j;
				vfind.push_back(vf);
			}
		}
	}
	for (int i = 0; i < vfind.size(); i++)
	{
		int m = vfind[i][0];
		int n = vfind[i][1];
		for (int j = 0; j < matrix[0].size(); j++)
		{
			matrix[m][j] = 0;
		}
		for (int j = 0; j < matrix.size(); j++)
		{
			matrix[j][n] = 0;
		}
	}
}

vector<int> Solution_numPractice::findDiagonalOrder(vector<vector<int>>& matrix)
{
	vector<int> vfind;
	if (matrix.empty() || matrix[0].empty())
	{
		return {};
	}
	int rSize = matrix.size();
	int cSize = matrix[0].size();
	int r = 0, c = 0;
	bool trState = true;
	for (int i = 0; i < rSize + cSize; i++)
	{
		if (trState)
		{
			r = i < rSize ? i : rSize - 1;
			c = i - r;
			while (r >= 0 && c < cSize)
			{
				vfind.push_back(matrix[r][c]);
				r--;
				c++;
			}
			trState = false;
		}
		else
		{
			c = i < cSize ? i : cSize - 1;
			r = i - c;
			while (c >= 0 && r < rSize)
			{
				vfind.push_back(matrix[r][c]);
				r++;
				c--;
			}
			trState = true;
		}
	}
	return vfind;
}
