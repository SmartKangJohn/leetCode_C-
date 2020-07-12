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
	//int num[15] = {-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6};
	//int num[6] = { -1, 0, 1, 2, -1, -4 };
	//int num[4] = { 1, -1, -1, 0 };
	int num[11] = { -3, 1, -5, 2, -4, 2, -1, 1, -5, -1, 4 };
	int numLen = 11;

	vector<int> nums, nums1, nums2;
	for (int i = 0; i < numLen; i++)
	{
		nums.push_back(num[i]);
		nums1.push_back(num[i]);
		nums2.push_back(num[i]);
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
	cout << endl;

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
	cout << endl;

	Solution_15_2 slon_15_2;
	findNum.clear();
	findNum = slon_15_2.threeSum(nums2);
	for (int i = 0; i < findNum.size(); i++)
	{
		cout << "findNum_2[" << i << "] = (";
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
	cout << endl;

}

void test_27()
{
	vector<int>nums = { 3,2,2,3 };
	int val = 3;
	vector<int>nums1 = { 0, 1, 2, 2, 3, 0, 4, 2 };
	int val1 = 2;
	vector<int>nums2 = {};
	int val2 = 0;
	Solution_27 so;
	int len = so.removeElement(nums, val);
	cout << "nums���� = " << len << endl;

	len = so.removeElement(nums1, val1);
	cout << "nums���� = " << len << endl;

	len = so.removeElement(nums2, val2);
	cout << "nums���� = " << len << endl;
}

void test_pivotIndex()
{
	vector<int>nums = { 1, 7, 3, 6, 5, 6 };
	vector<int>nums1 = {-1, -1, -1, -1, -1, 0};
	vector<int>nums2 = { -1, -1, -1, 0, 1, 1 };
	Solution_numPractice so;
	int centerIndex = so.pivotIndex(nums);
	cout << "nums������������ = " << centerIndex << endl;

	centerIndex = so.pivotIndex(nums1);
	cout << "nums������������ = " << centerIndex << endl;

	centerIndex = so.pivotIndex(nums2);
	cout << "nums������������ = " << centerIndex << endl;
}

void test_searchInsert()
{
	vector<int>nums0 = { 1, 3, 5, 6 };
	int target0 = 5;
	vector<int>nums1 = { 1, 3, 5, 6 };
	int target1 = 2;
	vector<int>nums2 = { 1, 3, 5, 6 };
	int target2 = 7;
	vector<int>nums3 = { 1, 3, 5, 6 };
	int target3 = 0;
	Solution_numPractice so;
	int findIndex = so.searchInsert(nums0, target0);
	cout << "nums��Ŀ������ = " << findIndex << endl;

	findIndex = so.searchInsert(nums1, target1);
	cout << "nums��Ŀ������ = " << findIndex << endl;

	findIndex = so.searchInsert(nums2, target2);
	cout << "nums��Ŀ������ = " << findIndex << endl;

	findIndex = so.searchInsert(nums3, target3);
	cout << "nums��Ŀ������ = " << findIndex << endl;
}

void test_merge()
{
	vector<vector<int>>intervals0(4, vector<int>(2, 0));
	intervals0[0][0] = 1;
	intervals0[0][1] = 3;
	intervals0[1][0] = 2;
	intervals0[1][1] = 6;
	intervals0[2][0] = 8;
	intervals0[2][1] = 10;
	intervals0[3][0] = 15;
	intervals0[3][1] = 18;
	vector<vector<int>>intervals1(2, vector<int>(2, 0));
	intervals0[0][0] = 1;
	intervals0[0][1] = 4;
	intervals0[1][0] = 4;
	intervals0[1][1] = 5;
	Solution_numPractice so;
	vector<vector<int>> find_intervals = so.merge(intervals0);
	for (int i = 0; i < find_intervals.size(); i++)
	{
		if (i == 0)
		{
			printf("�������Ϊ��[ ");
		}
		printf("[%d, %d],", find_intervals[i][0], find_intervals[i][1]);
		if (i == find_intervals.size()-1)
		{
			printf(" ] .\n");
		}
	}

	find_intervals = so.merge(intervals1);
	for (int i = 0; i < find_intervals.size(); i++)
	{
		if (i == 0)
		{
			printf("�������Ϊ��[ ");
		}
		printf("[%d, %d],", find_intervals[i][0], find_intervals[i][1]);
		if (i == find_intervals.size() - 1)
		{
			printf(" ] .\n");
		}
	}
}