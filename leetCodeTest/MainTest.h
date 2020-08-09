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
	cout << "nums长度 = " << len << endl;

	len = so.removeElement(nums1, val1);
	cout << "nums长度 = " << len << endl;

	len = so.removeElement(nums2, val2);
	cout << "nums长度 = " << len << endl;
}

void test_pivotIndex()
{
	vector<int>nums = { 1, 7, 3, 6, 5, 6 };
	vector<int>nums1 = {-1, -1, -1, -1, -1, 0};
	vector<int>nums2 = { -1, -1, -1, 0, 1, 1 };
	Solution_numPractice so;
	int centerIndex = so.pivotIndex(nums);
	cout << "nums靠左中心索引 = " << centerIndex << endl;

	centerIndex = so.pivotIndex(nums1);
	cout << "nums靠左中心索引 = " << centerIndex << endl;

	centerIndex = so.pivotIndex(nums2);
	cout << "nums靠左中心索引 = " << centerIndex << endl;
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
	cout << "nums的目标索引 = " << findIndex << endl;

	findIndex = so.searchInsert(nums1, target1);
	cout << "nums的目标索引 = " << findIndex << endl;

	findIndex = so.searchInsert(nums2, target2);
	cout << "nums的目标索引 = " << findIndex << endl;

	findIndex = so.searchInsert(nums3, target3);
	cout << "nums的目标索引 = " << findIndex << endl;
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
	intervals1[0][0] = 1;
	intervals1[0][1] = 4;
	intervals1[1][0] = 0;
	intervals1[1][1] = 0;
	Solution_numPractice so;
	vector<vector<int>> find_intervals = so.merge(intervals0);
	for (int i = 0; i < find_intervals.size(); i++)
	{
		if (i == 0)
		{
			printf("输出区间为：[ ");
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
			printf("输出区间为：[ ");
		}
		printf("[%d, %d],", find_intervals[i][0], find_intervals[i][1]);
		if (i == find_intervals.size() - 1)
		{
			printf(" ] .\n");
		}
	}
}

void test_rotate()
{
	vector<vector<int>> matrix0 =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 } 
	};
	vector<vector<int>> matrix1 =
	{
		{ 5, 1, 9,11 },
		{ 2, 4, 8,10 },
		{ 13, 3, 6, 7 },
		{ 15, 14,12,16 }
	};
	Solution_numPractice so;
	so.rotate(matrix0);
	for (int i = 0; i < matrix0.size(); i++)
	{
		if (i == 0)
		{
			cout << "matrox0 = [ " << endl;
		}
		for (int j = 0; j < matrix0[0].size(); j++)
		{
			if (j == 0)
			{
				cout << " [ ";
			}
			cout << matrix0[i][j] << ",";
			if (matrix0[0].size() - 1 == j)
			{
				cout << " ] " << endl;
			}
		}
		if (i == matrix0.size() - 1)
		{
			cout << " ] " << endl;
		}
	}

	so.rotate(matrix1);
	for (int i = 0; i < matrix1.size(); i++)
	{
		if (i == 0)
		{
			cout << "matrox0 = [ " << endl;
		}
		for (int j = 0; j < matrix1[0].size(); j++)
		{
			if (j == 0)
			{
				cout << " [ ";
			}
			cout << matrix1[i][j] << ",";
			if (matrix1[0].size() - 1 == j)
			{
				cout << " ] " << endl;
			}
		}
		if (i == matrix1.size() - 1)
		{
			cout << " ] " << endl;
		}
	}
}

void test_setZeroes()
{
	vector<vector<int>> matrix0 =
	{
		{ 1, 1, 1 },
		{ 1, 0, 1 },
		{ 1, 1, 1 }
	};
	vector<vector<int>> matrix1 =
	{
		{ 0,1,2,0 },
		{ 3,4,5,2 },
		{ 1,3,1,5 }
	};
	Solution_numPractice so;
	so.setZeroes(matrix0);
	for (int i = 0; i < matrix0.size(); i++)
	{
		if (i == 0)
		{
			cout << "matrox0 = [ " << endl;
		}
		for (int j = 0; j < matrix0[0].size(); j++)
		{
			if (j == 0)
			{
				cout << " [ ";
			}
			cout << matrix0[i][j] << ",";
			if (matrix0[0].size() - 1 == j)
			{
				cout << " ] " << endl;
			}
		}
		if (i == matrix0.size() - 1)
		{
			cout << " ] " << endl;
		}
	}

	so.setZeroes(matrix1);
	for (int i = 0; i < matrix1.size(); i++)
	{
		if (i == 0)
		{
			cout << "matrox0 = [ " << endl;
		}
		for (int j = 0; j < matrix1[0].size(); j++)
		{
			if (j == 0)
			{
				cout << " [ ";
			}
			cout << matrix1[i][j] << ",";
			if (matrix1[0].size() - 1 == j)
			{
				cout << " ] " << endl;
			}
		}
		if (i == matrix1.size() - 1)
		{
			cout << " ] " << endl;
		}
	}
}

void test_findDiagonalOrder()
{
	vector<vector<int>> matrix0 =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};
	Solution_numPractice so;
	vector<int> vfind = so.findDiagonalOrder(matrix0);
	for (int i = 0; i < vfind.size(); i++)
	{
		if (i == 0)
		{
			cout << "matrox0 = [ ";
		}
		cout << vfind[i] << ",";
		if (i == vfind.size() - 1)
		{
			cout << " ] " << endl;
		}
	}
}

void test_longestCommonPrefix()
{
	vector<string> vstring0 = { "flower","flow","flight" };
	vector<string> vstring1 = { "dog","racecar","car" };
	Solution_stringPractice so;
	string sfind = so.longestCommonPrefix(vstring0);
	cout << "sfind = " << sfind << endl;

	sfind = so.longestCommonPrefix(vstring1);
	cout << "sfind = " << sfind << endl;
}

void test_longestPalindrome()
{
	string s0 = { "babad" };
	string s1 = { "abb" };
	Solution_stringPractice so;
	string sfind = so.longestPalindrome(s0);
	cout << "sfind = " << sfind << endl;

	sfind = so.longestPalindrome(s1);
	cout << "sfind = " << sfind << endl;
}

void test_reverseWords()
{
	string s0 = "the sky is blue";
	string s1 = "  hello world!  ";
	string s2 = "a good   example";
	Solution_stringPractice so;
	string sfind = so.reverseWords(s0);
	cout << "sfind = " << sfind << endl;

	sfind = so.reverseWords(s1);
	cout << "sfind = " << sfind << endl;

	sfind = so.reverseWords(s2);
	cout << "sfind = " << sfind << endl;
}

/*目前还存在着BUG*/
void test_strStr()  
{
	string haystack0 = "hello", needle0 = "ll";
	string haystack1 = "aaaaa", needle1 = "bba";
	Solution_stringPractice so;
	int findIndex = so.strStr(haystack0, needle0);
	cout << "findIndex = " << findIndex << endl;

	findIndex = so.strStr(haystack1, needle1);
	cout << "findIndex = " << findIndex << endl;
}

void test_reverseString()
{
	string s1 = "hello", s2 = "Hannah";
	vector<char> vc1, vc2;
	for (int i = 0; i < s1.length(); i++)
	{
		vc1.push_back(s1[i]);
	}
	for (int i = 0; i < s2.length(); i++)
	{
		vc2.push_back(s2[i]);
	}

	Solution_doublePtrPractice so;
	so.reverseString(vc1);
	for (int i = 0; i < vc1.size(); i++)
	{
		if (i == 0)
		{
			cout << "vector<char> = ";
		}
		cout << vc1[i];
		if (i == vc1.size()-1)
		{
			cout << endl;
		}
	}

	so.reverseString(vc2);
	for (int i = 0; i < vc2.size(); i++)
	{
		if (i == 0)
		{
			cout << "vector<char> = ";
		}
		cout << vc2[i];
		if (i == vc2.size() - 1)
		{
			cout << endl;
		}
	}
}

void test_arrayPairSum()
{
	vector<int> vs1 = { 1,4,3,2 };
	Solution_doublePtrPractice so;
	int sum = so.arrayPairSum(vs1);
	cout << "PairSum = " << sum << endl;
}

void test_twoSum()
{
	vector<int> vNum1 = { 0, 0, 3, 4 };
	int target1 = 0;
	vector<int> vNum2 = { 3,24,50,79,88,150,345 };
	int target2 = 200;

	Solution_doublePtrPractice so;
	vector<int> vfind = so.twoSum(vNum1, target1);
	for (int i = 0; i < vfind.size(); i++)
	{
		if (i == 0)
		{
			cout << "find[] = [";
		}
		cout << vfind[i] << ",";
		if (i == vfind.size()-1)
		{
			cout << "]" << endl;
		}
	}

	vfind = so.twoSum(vNum2, target2);
	for (int i = 0; i < vfind.size(); i++)
	{
		if (i == 0)
		{
			cout << "find[] = [";
		}
		cout << vfind[i] << ",";
		if (i == vfind.size() - 1)
		{
			cout << "]" << endl;
		}
	}
}

void test_removeElement()
{
	vector<int> v1 = { 0,1,2,2,3,0,4,2 };
	int target1 = 2;
	vector<int> v2 = { 3,2,2,3 };
	int target2 = 3;

	Solution_doublePtrPractice so;
	int newSize = so.removeElement(v1, target1);
	cout << "newSize = " << newSize << endl;

	newSize = so.removeElement(v2, target2);
	cout << "newSize = " << newSize << endl;
}

void test_findMaxConsecutiveOnes()
{
	vector<int> v1 = { 1,1,0,1,1,1 };
	vector<int> v2 = { 1,0,1,1,0,1 };

	Solution_doublePtrPractice so;
	int numMax = so.findMaxConsecutiveOnes(v1);
	cout << "1连续数量 = " << numMax << endl;

	numMax = so.findMaxConsecutiveOnes(v2);
	cout << "1连续数量 = " << numMax << endl;
}

void test_minSubArrayLen()
{
	vector<int> v1 = { 2,3,1,2,4,3 };
	int s1 = 7;
	vector<int> v2 = { 1,4,4 };
	int s2 = 4;

	Solution_doublePtrPractice so;
	int numMin = so.minSubArrayLen(s1, v1);
	cout << "最小子数组长度 = " << numMin << endl;

	numMin = so.minSubArrayLen(s2, v2);
	cout << "最小子数组长度 = " << numMin << endl;
}

void test_MyHashSet()
{
	MyHashSet hashSet;
	hashSet.add(1);
	hashSet.add(2);
	bool bRet;
	bRet = hashSet.contains(1);    // 返回 true
	bRet = hashSet.contains(3);    // 返回 false (未找到)
	hashSet.add(2);
	bRet = hashSet.contains(2);    // 返回 true
	hashSet.remove(2);
	bRet = hashSet.contains(2);    // 返回  false (已经被删除)
}

void test_MyHashMap()
{
	MyHashMap hashMap;
	hashMap.put(1, 1);
	hashMap.put(2, 2);
	int iRet;
	iRet = hashMap.get(1);            // 返回 1
	iRet = hashMap.get(3);            // 返回 -1 (未找到)
	hashMap.put(2, 1);         // 更新已有的值
	iRet = hashMap.get(2);            // 返回 1 
	hashMap.remove(2);         // 删除键为2的数据
	iRet = hashMap.get(2);            // 返回 -1 (未找到)
}

/*哈希集 - 用法*/
void test_unordered_set_hashset()
{
	// 1. initialize a hash set
	unordered_set<int> hashset;
	// 2. insert a new key
	hashset.insert(3);
	hashset.insert(2);
	hashset.insert(1);
	// 3. delete a key
	hashset.erase(2);
	// 4. check if the key is in the hash set
	if (hashset.count(2) <= 0) {
		cout << "Key 2 is not in the hash set." << endl;
	}
	// 5. get the size of the hash set
	cout << "The size of hash set is: " << hashset.size() << endl;
	// 6. iterate the hash set
	for (auto it = hashset.begin(); it != hashset.end(); ++it) {
		cout << (*it) << " ";
	}
	cout << "are in the hash set." << endl;
	// 7. clear the hash set
	hashset.clear();	
	// 8. check if the hash set is empty
	if (hashset.empty()) {
		cout << "hash set is empty now!" << endl;
	}
}

/*使用哈希集查重*/
/*
 * Template for using hash set to find duplicates.
 */
template <class Type>
bool findDuplicates(vector<Type>& keys) {
	// Replace Type with actual type of your key
	unordered_set<Type> hashset;
	for (Type key : keys) {
		if (hashset.count(key) > 0) {
			return true;
		}
		hashset.insert(key);
	}
	return false;
}

void test_containsDuplicate()
{
	vector<int> v1 = { 1,2,3,1 };
	vector<int> v2 = { 1,2,3,4 };
	vector<int> v3 = { 1,1,1,3,3,4,3,2,4,2 };

	Solution_hashTablePractice so;
	bool bRet = so.containsDuplicate(v1);
	cout << "v1数组是否有重复: " << bRet << endl;

	bRet = so.containsDuplicate(v2);
	cout << "v2数组是否有重复: " << bRet << endl;

	bRet = so.containsDuplicate(v3);
	cout << "v3数组是否有重复: " << bRet << endl;
}

void test_singleNumber()
{
	vector<int> v1 = { 2,2,1 };
	vector<int> v2 = { 4,1,2,1,2 };

	Solution_hashTablePractice so;
	int iRet = so.singleNumber(v1);
	cout << "v1数组只出现一次元素: " << iRet << endl;

	iRet = so.singleNumber(v2);
	cout << "v2数组只出现一次元素: " << iRet << endl;
}

void test_intersection()
{
	vector<int> v1 = { 1,2,2,1 };
	vector<int> v2 = { 2,2 };

	vector<int> v3 = { 4,9,5 };
	vector<int> v4 = { 9,4,9,8,4 };

	Solution_hashTablePractice so;
	vector<int> vfind = so.intersection(v1, v2);
	for (int i = 0; i < vfind.size(); i++)
	{
		if (i == 0)
		{
			cout << "find[] = [";
		}
		cout << vfind[i] << ",";
		if (i == vfind.size() - 1)
		{
			cout << "]" << endl;
		}
	}

	vfind = so.intersection(v3, v4);
	for (int i = 0; i < vfind.size(); i++)
	{
		if (i == 0)
		{
			cout << "find[] = [";
		}
		cout << vfind[i] << ",";
		if (i == vfind.size() - 1)
		{
			cout << "]" << endl;
		}
	}
}

void test_isHappy()
{
	int n1 = 2;  //19, 2, 

	Solution_hashTablePractice so;
	bool bRet = so.isHappy(n1);
	cout << "是否快乐数: " << bRet << endl;
}

void test_twoSum1()
{
	vector<int> nums0 = { 2, 7, 11, 15 };
	int traget0 = 9;
	vector<int> nums1 = { 3, 3};
	int traget1 = 6;

	Solution_hashTablePractice so;
	vector<int> vfind = so.twoSum(nums0, traget0);
	for (int i = 0; i < vfind.size(); i++)
	{
		if (i == 0)
		{
			cout << "find[] = [";
		}
		cout << vfind[i] << ",";
		if (i == vfind.size() - 1)
		{
			cout << "]" << endl;
		}
	}

	vfind = so.twoSum(nums1, traget1);
	for (int i = 0; i < vfind.size(); i++)
	{
		if (i == 0)
		{
			cout << "find[] = [";
		}
		cout << vfind[i] << ",";
		if (i == vfind.size() - 1)
		{
			cout << "]" << endl;
		}
	}
}

void test_isIsomorphic()
{
	string s0 = "egg", t0 = "add";  //true
	string s1 = "foo", t1 = "bar";  //false
	string s2 = "paper", t2 = "title";  //true

	Solution_hashTablePractice so;
	bool bRet = so.isIsomorphic(s0, t0);
	cout << "是否同构字符串 ： " << bRet << endl;

	bRet = so.isIsomorphic(s1, t1);
	cout << "是否同构字符串 ： " << bRet << endl;

	bRet = so.isIsomorphic(s2, t2);
	cout << "是否同构字符串 ： " << bRet << endl;
}

void test_findRestaurant()
{
	vector<string> ls0_1 = { "Shogun", "Tapioca Express", "Burger King", "KFC" }, 
		ls0_2 = { "Piatti", "The Grill at Torrey Pines", "Hungry Hunter Steakhouse", "Shogun" };
	vector<string> ls1_1 = { "Shogun", "Tapioca Express", "Burger King", "KFC" },
		ls1_2 = { "KFC", "Shogun", "Burger King" };
	vector<string> ls2_1 = {}, 
		ls2_2 = {};

	Solution_hashTablePractice so;
	vector<string> vfind = so.findRestaurant(ls0_1, ls0_2);
	for (int i = 0; i < vfind.size(); i++)
	{
		if (i == 0)
		{
			cout << "find[] = [";
		}
		cout << vfind[i] << ",";
		if (i == vfind.size() - 1)
		{
			cout << "]" << endl;
		}
	}

	vfind = so.findRestaurant(ls1_1, ls1_2);
	for (int i = 0; i < vfind.size(); i++)
	{
		if (i == 0)
		{
			cout << "find[] = [";
		}
		cout << vfind[i] << ",";
		if (i == vfind.size() - 1)
		{
			cout << "]" << endl;
		}
	}
}

void test_firstUniqChar()
{
	string s0 = "leetcode";
	string s1 = "loveleetcode";

	Solution_hashTablePractice so;
	int ifind = so.firstUniqChar(s0);
	cout << "字符串中第一个唯一字符索引：" << ifind << endl;

	ifind = so.firstUniqChar(s1);
	cout << "字符串中第一个唯一字符索引：" << ifind << endl;
}

void test_intersect()
{
	vector<int> v1 = { 1,2,2,1 };
	vector<int> v2 = { 2,2 };

	vector<int> v3 = { 4,9,5 };
	vector<int> v4 = { 9,4,9,8,4 };

	Solution_hashTablePractice so;
	vector<int> vfind = so.intersect(v1, v2);
	for (int i = 0; i < vfind.size(); i++)
	{
		if (i == 0)
		{
			cout << "find[] = [";
		}
		cout << vfind[i] << ",";
		if (i == vfind.size() - 1)
		{
			cout << "]" << endl;
		}
	}

	vfind = so.intersect(v3, v4);
	for (int i = 0; i < vfind.size(); i++)
	{
		if (i == 0)
		{
			cout << "find[] = [";
		}
		cout << vfind[i] << ",";
		if (i == vfind.size() - 1)
		{
			cout << "]" << endl;
		}
	}
}

void test_containsNearbyDuplicate()
{
	vector<int> v1 = { 1,2,3,1 };
	int k1 = 3;
	vector<int> v2 = { 1,0,1,1 };
	int k2 = 1;
	vector<int> v3 = { 1,2,3,1,2,3 };
	int k3 = 2;

	Solution_hashTablePractice so;
	bool bRet = so.containsNearbyDuplicate(v1, k1);
	cout << "是否存在重复元素：" << to_string(bRet) << endl;

	bRet = so.containsNearbyDuplicate(v2, k2);
	cout << "是否存在重复元素：" << to_string(bRet) << endl;

	bRet = so.containsNearbyDuplicate(v3, k3);
	cout << "是否存在重复元素：" << to_string(bRet) << endl;
}

void test_groupAnagrams()
{
	vector<string> vstr = { "eat", "tea", "tan", "ate", "nat", "bat" };

	Solution_hashTablePractice so;
	vector<vector<string>> vfind = so.groupAnagrams(vstr);
	for (int i = 0; i < vfind.size(); i++)
	{
		if (i == 0)
		{
			cout << "find[] = [" << endl;
		}
		for (int j = 0; j < vfind[i].size(); j++)
		{
			if (j == 0)
			{
				cout << "[";
			}
			cout << vfind[i][j];
			if (j == vfind[i].size() - 1)
			{
				cout << "]" << endl;
			}
			else
			{
				cout << ",";
			}
		}
		if (i == vfind.size() - 1)
		{
			cout << "]" << endl;
		}
	}
}