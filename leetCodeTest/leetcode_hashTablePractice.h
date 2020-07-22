#pragma once
#include "commont.h"

class Solution_hashTablePractice {
public:

	/*  
	*/



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

