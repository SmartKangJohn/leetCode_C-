#pragma once
#include "commont.h"

class Solution_hashTablePractice {
public:

	/*  哈希集合应用——存在重复元素
	给定一个整数数组，判断是否存在重复元素。
	如果任意一值在数组中出现至少两次，函数返回 true 。如果数组中每个元素都不相同，则返回 false 。
	*/
	bool containsDuplicate(vector<int>& nums);

	/*  哈希集合应用——只出现一次的数字
	给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
	说明：
	你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？*/
	int singleNumber(vector<int>& nums);

	/*  哈希集合应用——两个数组的交集
	给定两个数组，编写一个函数来计算它们的交集。
	说明：
	输出结果中的每个元素一定是唯一的。
	我们可以不考虑输出结果的顺序。*/
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2);

	/*  哈希集合应用——快乐数
	编写一个算法来判断一个数 n 是不是快乐数。
	「快乐数」定义为：对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和，然后重复这个过程直到这个数变为 1，
	也可能是 无限循环 但始终变不到 1。如果 可以变为  1，那么这个数就是快乐数。
	如果 n 是快乐数就返回 True ；不是，则返回 False 。*/
	bool isHappy(int n);

	/*  哈希映射应用——两数之和
	给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
	你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。*/
	vector<int> twoSum(vector<int>& nums, int target);

	/*  哈希映射应用——同构字符串
	给定两个字符串 s 和 t，判断它们是否是同构的。
	如果 s 中的字符可以被替换得到 t ，那么这两个字符串是同构的。
	所有出现的字符都必须用另一个字符替换，同时保留字符的顺序。两个字符不能映射到同一个字符上，但字符可以映射自己本身。
	说明:
	你可以假设 s 和 t 具有相同的长度。*/
	bool isIsomorphic(string s, string t);

	/*  哈希映射应用——两个列表的最小索引总和
	假设Andy和Doris想在晚餐时选择一家餐厅，并且他们都有一个表示最喜爱餐厅的列表，每个餐厅的名字用字符串表示。
	你需要帮助他们用最少的索引和找出他们共同喜爱的餐厅。 如果答案不止一个，则输出所有答案并且不考虑顺序。 你可以假设总是存在一个答案。
	提示:
	1.两个列表的长度范围都在 [1, 1000]内。
	2.两个列表中的字符串的长度将在[1，30]的范围内。
	3.下标从0开始，到列表的长度减1。
	4.两个列表都没有重复的元素。*/
	vector<string> findRestaurant(vector<string>& list1, vector<string>& list2);

	/*  哈希映射应用——字符串中的第一个唯一字符
	给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 -1。
	提示：你可以假定该字符串只包含小写字母。*/
	int firstUniqChar(string s);

	/*  哈希映射应用——两个数组的交集 II
	给定两个数组，编写一个函数来计算它们的交集。
	说明：
	输出结果中每个元素出现的次数，应与元素在两个数组中出现次数的最小值一致。
	我们可以不考虑输出结果的顺序。
	进阶：
	如果给定的数组已经排好序呢？你将如何优化你的算法？
	如果 nums1 的大小比 nums2 小很多，哪种方法更优？
	如果 nums2 的元素存储在磁盘上，磁盘内存是有限的，并且你不能一次加载所有的元素到内存中，你该怎么办？*/
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2);

	/*  哈希映射应用——存在重复元素 II
	给定一个整数数组和一个整数 k，判断数组中是否存在两个不同的索引 i 和 j，使得 nums [i] = nums [j]，并且 i 和 j 的差的 绝对值 至多为 k。*/
	bool containsNearbyDuplicate(vector<int>& nums, int k);

	/*  设计键应用——字母异位词分组
	给定一个字符串数组，将字母异位词组合在一起。字母异位词指字母相同，但排列不同的字符串。
	说明：
	所有输入均为小写字母。
	不考虑答案输出的顺序。*/
	vector<vector<string>> groupAnagrams(vector<string>& strs);

private:
	unordered_set<int> hashSet_happy;
};

	/*  设计哈希集合

	不使用任何内建的哈希表库设计一个哈希集合
	具体地说，你的设计应该包含以下的功能
	*	add(value)：向哈希集合中插入一个值。
	*	contains(value) ：返回哈希集合中是否存在这个值。
	*	remove(value)：将给定值从哈希集合中删除。如果哈希集合中没有这个值，什么也不做。
	注意：
	所有的值都在 [0, 1000000]的范围内。
	操作的总数目在[1, 10000]范围内。
	不要使用内建的哈希集合库。*/
class MyHashSet {
public:
	/** Initialize your data structure here. */
	MyHashSet() {
		vector<vector<int>> v1s(10000, vector<int>(100, -1));
		v1s.swap(vals);
		pKey = 0;
		pVal = 0;
	}

	void add(int key) {
		pKey = key / 100;
		pVal = key - pKey * 100;
		vals[pKey][pVal] = key;
	}

	void remove(int key) {
		pKey = key / 100;
		pVal = key - pKey * 100;
		vals[pKey][pVal] = -1;
	}

	/** Returns true if this set contains the specified element */
	bool contains(int key) {
		pKey = key / 100;
		pVal = key - pKey * 100;
		if (vals[pKey][pVal] == -1)
		{
			isContains = false;
		}
		else
		{
			isContains = true;
		}
		return isContains;
	}

private:
	int pKey;
	int pVal;
	vector<vector<int>> vals;
	bool isContains;
};

	/*  设计哈希映射
	不使用任何内建的哈希表库设计一个哈希映射
	具体地说，你的设计应该包含以下的功能
	*	put(key, value)：向哈希映射中插入(键,值)的数值对。如果键对应的值已经存在，更新这个值。
	*	get(key)：返回给定的键所对应的值，如果映射中不包含这个键，返回-1。
	*	remove(key)：如果映射中存在这个键，删除这个数值对。
	注意：
	所有的值都在 [0, 1000000]的范围内。
	操作的总数目在[1, 10000]范围内。
	不要使用内建的哈希库。*/
class MyHashMap {
public:
	/** Initialize your data structure here. */
	MyHashMap() {
		vector<vector<int>> v1s(10000, vector<int>(100, -1));
		v1s.swap(vals);
		pKey = 0;
		pVal = 0;
	}

	/** value will always be non-negative. */
	void put(int key, int value) {
		pKey = key / 100;
		pVal = key - pKey * 100;
		vals[pKey][pVal] = value;
	}

	/** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
	int get(int key) {
		pKey = key / 100;
		pVal = key - pKey * 100;
		return vals[pKey][pVal];
	}

	/** Removes the mapping of the specified value key if this map contains a mapping for the key */
	void remove(int key) {
		pKey = key / 100;
		pVal = key - pKey * 100;
		vals[pKey][pVal] = -1;
	}

private:
	int pKey;
	int pVal;
	vector<vector<int>> vals;
};

