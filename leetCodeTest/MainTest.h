#pragma once
#include "MainTestCom.h"

void test_209()
{
	//int s = 7;
	//int nums[6] = { 2, 3, 1, 2, 4, 3 };
	//int s = 4;
	//int nums[3] = { 1, 4, 4 };
	int s = 11;
	int nums[5] = { 1, 2, 3, 4, 5 };
	vector<int> nums1;
	for (int i = 0; i < 5; i++)
	{
		int num = nums[i];
		nums1.push_back(num);
	}

	Solution0 solution0;
	int minSize = solution0.minSubArrayLen(s, nums1);
	cout << "solution0 minSize = " << minSize << endl;

	Solution1 solution1;
	minSize = solution1.minSubArrayLen(s, nums1);
	cout << "solution1 minSize = " << minSize << endl;
}

void test_15()
{
	//int num[6] = { -1, 0, 1, 2, -1, -4 };
	//int num[4] = { 1, -1, -1, 0 };
	int num[11] = { -3, 1, -5, 2, -4, 2, -1, 1, -5, -1, 4 };
	vector<int> nums, nums1;
	for (int i = 0; i < 11; i++)
	{
		nums.push_back(num[i]);
		nums1.push_back(num[i]);
	}
	Solution_15 slon_15;
	vector<vector<int>> findNum;
	findNum = slon_15.threeSum(nums);
	for (int i = 0; i < findNum.size(); i++)
	{
		cout << "findNum[" << i << "] = (" ;
		for (int j = 0; j < findNum[i].size(); j++)
		{
			if (j == findNum[i].size() - 1)
			{
				cout << findNum[i][j];
			}
			else
			{
				cout << findNum[i][j] << ";";
			}
		}
		cout << ")" << endl;
	}

	Solution_15_1 slon_15_1;
	findNum.clear();
	findNum = slon_15_1.threeSum(nums1);
	for (int i = 0; i < findNum.size(); i++)
	{
		cout << "findNum_1[" << i << "] = (";
		for (int j = 0; j < findNum[i].size(); j++)
		{
			if (j == findNum[i].size() - 1)
			{
				cout << findNum[i][j];
			}
			else
			{
				cout << findNum[i][j] << ";";
			}
		}
		cout << ")" << endl;
	}

}