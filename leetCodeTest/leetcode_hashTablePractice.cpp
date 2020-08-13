#include "leetcode_hashTablePractice.h"

bool Solution_hashTablePractice::containsDuplicate(vector<int>& nums)
{
	unordered_set<int> hashSet;
	for (int key1 : nums)
	{	
		if (hashSet.count(key1)>0)
		{
			return true;
		}
		hashSet.insert(key1);
	}
	return false;
}

int Solution_hashTablePractice::singleNumber(vector<int>& nums)
{
	unordered_set<int> hashSet;
	int key2 = nums[0];
	for (int key1 : nums)
	{
		if (hashSet.count(key1) > 0)
		{
			hashSet.erase(key1);
			continue;
		}
		hashSet.insert(key1);
	}
	key2 = *hashSet.begin();
	return key2;
}

vector<int> Solution_hashTablePractice::intersection(vector<int>& nums1, vector<int>& nums2)
{
	if (nums1.empty() || nums2.empty())
	{
		return vector<int>();
	}
	vector<int> vfind;
	unordered_set<int> hashSet;
	if (nums1.size() < nums2.size())
	{
		for (int key1 : nums2)
		{
			if (hashSet.count(key1) > 0)
			{
				continue;
			}
			hashSet.insert(key1);
		}
		vector<int> nums1_single;
		unordered_set<int> hashSet1;
		for (int key1 : nums1)
		{
			if (hashSet1.count(key1) > 0)
			{
				continue;
			}
			hashSet1.insert(key1);
			nums1_single.push_back(key1);
		}
		for (int key1 : nums1_single)
		{
			if (hashSet.count(key1) > 0)
			{
				vfind.push_back(key1);
				continue;
			}
		}
	}
	else
	{
		for (int key1 : nums1)
		{
			if (hashSet.count(key1) > 0)
			{
				continue;
			}
			hashSet.insert(key1);
		}
		vector<int> nums2_single;
		unordered_set<int> hashSet1;
		for (int key1 : nums2)
		{
			if (hashSet1.count(key1) > 0)
			{
				continue;
			}
			hashSet1.insert(key1);
			nums2_single.push_back(key1);
		}
		for (int key1 : nums2_single)
		{
			if (hashSet.count(key1) > 0)
			{
				vfind.push_back(key1);
				continue;
			}
		}
	}
	return vfind;
}

bool Solution_hashTablePractice::isHappy(int n)
{
	string n1 = to_string(n);
	int nSize = n1.size();
	int sum = 0;
	while (nSize > 0)
	{
		nSize--;
		int s1 = n / (pow(10, nSize));
		n -= s1 * pow(10, nSize);
		sum += pow(s1, 2);
		if (n == 0)
		{
			break;
		}
	}
	if (sum == 1)
	{
		hashSet_happy.clear();
		return true;
	}
	else if (sum == 0)
	{
		hashSet_happy.clear();
		return false;
	}
	else
	{
		if (hashSet_happy.count(sum) > 0)
		{
			return false;
		}
		hashSet_happy.insert(sum);
		return isHappy(sum);
	}
	return false;
}

vector<int> Solution_hashTablePractice::twoSum(vector<int>& nums, int target)
{
	unordered_map<int, int> hashTable;
	vector<int> vfind(2);
#if 0
	int sum = 0;
	if (nums.size() < 2)
	{
		return {};
	}
	for (int i = 0; i < nums.size()-1; i++)
	{
		for (int j = i+1; j < nums.size(); j++)
		{
			sum = nums[i] + nums[j];
			if (sum == target)
			{
				vfind[0] = i;
				vfind[1] = j;
				return vfind;
			}
		}
	}
#endif
	for (int i = 0; i < nums.size(); i++)
	{
		if (hashTable.count(nums[i]) > 0)
		{
			vfind[0] = hashTable[nums[i]];
			vfind[1] = i;
			return vfind;
		}
		hashTable.insert(make_pair(target - nums[i], i));
	}
	return {};
}

bool Solution_hashTablePractice::isIsomorphic(string s, string t)
{
	unordered_map<char, int> hashTable0, hashTable1;
	if (s.length() != t.length())
	{
		return false;
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (hashTable0.count(s[i]) <= 0)
		{
			hashTable0.insert(make_pair(s[i], i));
		}
		if (hashTable1.count(t[i]) <= 0)
		{
			hashTable1.insert(make_pair(t[i], i));
		}
		if (hashTable0[s[i]] == hashTable1[t[i]])
		{
			continue;
		}
		else
		{
			return false;
		}
	}
	return true;
}

vector<string> Solution_hashTablePractice::findRestaurant(vector<string>& list1, vector<string>& list2)
{
	unordered_map<string, int> hashTable;
	vector<string> vfind;
	int i = 0;
	int sumIndex = list1.size() + list2.size() + 1;
	if (list1.size() > list2.size())
	{
		i = 0;
		for (string s1 : list1)
		{
			hashTable.insert(make_pair(s1, i));
			i++;
		}
		i = 0;
		for (string s1 : list2)
		{
			if (hashTable.count(s1) > 0)
			{
				if (hashTable[s1] + i <= sumIndex)
				{
					if (hashTable[s1] + i != sumIndex)
					{
						if (!vfind.empty())
						{
							vfind.pop_back();
						}
						sumIndex = hashTable[s1] + i;
						vfind.push_back(s1);
					}
					else
					{
						vfind.push_back(s1);
					}
				}
			}
			i++;
		}
	}
	else
	{
		i = 0;
		for (string s1 : list2)
		{
			hashTable.insert(make_pair(s1, i));
			i++;
		}
		i = 0;
		for (string s1 : list1)
		{
			if (hashTable.count(s1) > 0)
			{
				if (hashTable[s1] + i <= sumIndex)
				{
					if (hashTable[s1] + i != sumIndex)
					{
						if (!vfind.empty())
						{
							vfind.pop_back();
						}
						sumIndex = hashTable[s1] + i;
						vfind.push_back(s1);
					}
					else
					{
						vfind.push_back(s1);
					}
				}
			}
			i++;
		}
	}
	return vfind;
}

int Solution_hashTablePractice::firstUniqChar(string s)
{
	unordered_map<char, int> hashTable;
	for (int i = 0; i < s.length(); i++)
	{
		if (hashTable.count(s[i]) > 0)
		{
			int count1 = hashTable[s[i]];
			count1++;
			hashTable[s[i]] = count1;
		}
		else
		{
			hashTable.insert(make_pair(s[i], 0));
		}
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (hashTable[s[i]] == 0)
		{
			return i;
		}
	}
	return -1;
}

vector<int> Solution_hashTablePractice::intersect(vector<int>& nums1, vector<int>& nums2)
{
	unordered_map<int, int> hashTable, fHashTable;
	vector<int> vfind;
	if (nums1.size() < 1 || nums2.size() < 1)
	{
		return {};
	}
	if (nums1.size() < nums2.size())
	{
		for (int i : nums1)
		{
			if (hashTable.count(i) > 0)
			{
				int hVal = hashTable[i];
				hashTable[i] = hVal + 1;
			}
			else
			{
				hashTable.insert(make_pair(i, 0));
			}
		}
		for (int i : nums2)
		{
			if (hashTable.count(i) > 0)
			{
				if (fHashTable.count(i) > 0)
				{
					if (fHashTable[i] >= hashTable[i])
					{
						continue;
					}
					else
					{
						int hVal = fHashTable[i];
						fHashTable[i] = hVal + 1;
						vfind.push_back(i);
					}
				}
				else
				{
					fHashTable.insert(make_pair(i, 0));
					vfind.push_back(i);
				}
			}
		}
	}
	else
	{
		for (int i : nums2)
		{
			if (hashTable.count(i) > 0)
			{
				int hVal = hashTable[i];
				hashTable[i] = hVal + 1;
			}
			else
			{
				hashTable.insert(make_pair(i, 0));
			}
		}
		for (int i : nums1)
		{
			if (hashTable.count(i) > 0)
			{
				if (fHashTable.count(i) > 0)
				{
					if (fHashTable[i] >= hashTable[i])
					{
						continue;
					}
					else
					{
						int hVal = fHashTable[i];
						fHashTable[i] = hVal + 1;
						vfind.push_back(i);
					}
				}
				else
				{
					fHashTable.insert(make_pair(i, 0));
					vfind.push_back(i);
				}
			}
		}
	}
	return vfind;
}

bool Solution_hashTablePractice::containsNearbyDuplicate(vector<int>& nums, int k)
{
	if (nums.size() < 1)
	{
		return false;
	}
	unordered_map<int, int> hashTable;
	bool bRet = false;
	for (int i = 0; i < nums.size(); i++)
	{
		if (hashTable.count(nums[i]) > 0)
		{
			if (i - hashTable[nums[i]] > k)
			{
				hashTable[nums[i]] = i;
			}
			else
			{
				return true;
			}
		}
		else
		{
			hashTable.insert(make_pair(nums[i], i));
		}
	}
	return bRet;
}

vector<vector<string>> Solution_hashTablePractice::groupAnagrams(vector<string>& strs)
{
	if (strs.empty())
	{
		return {};
	}
	vector<vector<string>> vfind;
	unordered_map<string, int> hashTable_i;
	unordered_map<string, string> hashTable_s;
	int i = 0;
	for (string key : strs)
	{
		vector<string> vstr1;
		string key1 = key;
		sort(key1.begin(), key1.end());
		if (hashTable_i.count(key1)>0)
		{
			int val = hashTable_i[key1];
			vfind[val].push_back(key);
		}
		else
		{
			hashTable_i.insert(make_pair(key1, i));
			vstr1.push_back(key);
			vfind.push_back(vstr1);
			i++;
		}
	}
	return vfind;
}

bool Solution_hashTablePractice::isValidSudoku(vector<vector<char>>& board)
{
	vector<unordered_map<char, bool>> hashTable(27);
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[i].size(); j++)
		{
			if (board[i][j] == '.')
			{
				continue;
			}
			int index0 = (i / 3) * 3 + j / 3;
			if (hashTable[i].count(board[i][j])>0
				|| hashTable[9 + j].count(board[i][j]) > 0
				|| hashTable[18 + index0].count(board[i][j]) > 0)
			{
				return false;
			}
			else
			{
				hashTable[i].insert(make_pair(board[i][j], true));
				hashTable[9 + j].insert(make_pair(board[i][j], true));
				hashTable[18 + index0].insert(make_pair(board[i][j], true));
			}
		}
	}
	return true;
}

vector<TreeNode*> Solution_hashTablePractice::findDuplicateSubtrees(TreeNode * root)
{
	if (root->left == nullptr && root->right == nullptr)
	{
		return {};
	}
	vector<unordered_map<int, int>> vhash;
	unordered_map<int, int> hash1;
	TreeNode* rootL = root->left;
	int i = 0;
	hash1.insert(make_pair(root->val,i));
	while (rootL)
	{
		i++;
		hash1.insert(make_pair(rootL->val, i));
		if (rootL->left == nullptr)
		{
		}
		else if(rootL->right == nullptr)
		rootL = rootL->left;
	}
	return vector<TreeNode*>();
}
