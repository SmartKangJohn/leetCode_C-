#pragma once
#include "commont.h"

class Solution_hashTablePractice {
public:

	/*  
	*/



};

	/*  ��ƹ�ϣ����

	��ʹ���κ��ڽ��Ĺ�ϣ������һ����ϣ����
	�����˵��������Ӧ�ð������µĹ���
	*	add(value)�����ϣ�����в���һ��ֵ��
	*	contains(value) �����ع�ϣ�������Ƿ�������ֵ��
	*	remove(value)��������ֵ�ӹ�ϣ������ɾ���������ϣ������û�����ֵ��ʲôҲ������
	ע�⣺
	���е�ֵ���� [0, 1000000]�ķ�Χ�ڡ�
	����������Ŀ��[1, 10000]��Χ�ڡ�
	��Ҫʹ���ڽ��Ĺ�ϣ���Ͽ⡣*/
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

	/*  ��ƹ�ϣӳ��
	��ʹ���κ��ڽ��Ĺ�ϣ������һ����ϣӳ��
	�����˵��������Ӧ�ð������µĹ���
	*	put(key, value)�����ϣӳ���в���(��,ֵ)����ֵ�ԡ��������Ӧ��ֵ�Ѿ����ڣ��������ֵ��
	*	get(key)�����ظ����ļ�����Ӧ��ֵ�����ӳ���в����������������-1��
	*	remove(key)�����ӳ���д����������ɾ�������ֵ�ԡ�
	ע�⣺
	���е�ֵ���� [0, 1000000]�ķ�Χ�ڡ�
	����������Ŀ��[1, 10000]��Χ�ڡ�
	��Ҫʹ���ڽ��Ĺ�ϣ�⡣*/
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

