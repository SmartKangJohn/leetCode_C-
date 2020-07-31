#pragma once
#include "commont.h"

class Solution_hashTablePractice {
public:

	/*  ��ϣ����Ӧ�á��������ظ�Ԫ��
	����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�
	�������һֵ�������г����������Σ��������� true �����������ÿ��Ԫ�ض�����ͬ���򷵻� false ��
	*/
	bool containsDuplicate(vector<int>& nums);

	/*  ��ϣ����Ӧ�á���ֻ����һ�ε�����
	����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
	˵����
	����㷨Ӧ�þ�������ʱ�临�Ӷȡ� ����Բ�ʹ�ö���ռ���ʵ����*/
	int singleNumber(vector<int>& nums);

	/*  ��ϣ����Ӧ�á�����������Ľ���
	�����������飬��дһ���������������ǵĽ�����
	˵����
	�������е�ÿ��Ԫ��һ����Ψһ�ġ�
	���ǿ��Բ�������������˳��*/
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2);

	/*  ��ϣ����Ӧ�á���������
	��дһ���㷨���ж�һ���� n �ǲ��ǿ�������
	��������������Ϊ������һ����������ÿһ�ν������滻Ϊ��ÿ��λ���ϵ����ֵ�ƽ���ͣ�Ȼ���ظ��������ֱ���������Ϊ 1��
	Ҳ������ ����ѭ�� ��ʼ�ձ䲻�� 1����� ���Ա�Ϊ  1����ô��������ǿ�������
	��� n �ǿ������ͷ��� True �����ǣ��򷵻� False ��*/
	bool isHappy(int n);

	/*  ��ϣӳ��Ӧ�á�������֮��
	����һ���������� nums ��һ��Ŀ��ֵ target�������ڸ��������ҳ���ΪĿ��ֵ���� ���� ���������������ǵ������±ꡣ
	����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ�ز���ʹ�����顣*/
	vector<int> twoSum(vector<int>& nums, int target);

	/*  ��ϣӳ��Ӧ�á���ͬ���ַ���
	���������ַ��� s �� t���ж������Ƿ���ͬ���ġ�
	��� s �е��ַ����Ա��滻�õ� t ����ô�������ַ�����ͬ���ġ�
	���г��ֵ��ַ�����������һ���ַ��滻��ͬʱ�����ַ���˳�������ַ�����ӳ�䵽ͬһ���ַ��ϣ����ַ�����ӳ���Լ�����
	˵��:
	����Լ��� s �� t ������ͬ�ĳ��ȡ�*/
	bool isIsomorphic(string s, string t);

	/*  ��ϣӳ��Ӧ�á��������б����С�����ܺ�
	����Andy��Doris�������ʱѡ��һ�Ҳ������������Ƕ���һ����ʾ��ϲ���������б�ÿ���������������ַ�����ʾ��
	����Ҫ�������������ٵ��������ҳ����ǹ�ͬϲ���Ĳ����� ����𰸲�ֹһ������������д𰸲��Ҳ�����˳�� ����Լ������Ǵ���һ���𰸡�
	��ʾ:
	1.�����б�ĳ��ȷ�Χ���� [1, 1000]�ڡ�
	2.�����б��е��ַ����ĳ��Ƚ���[1��30]�ķ�Χ�ڡ�
	3.�±��0��ʼ�����б�ĳ��ȼ�1��
	4.�����б�û���ظ���Ԫ�ء�*/
	vector<string> findRestaurant(vector<string>& list1, vector<string>& list2);

	/*  ��ϣӳ��Ӧ�á����ַ����еĵ�һ��Ψһ�ַ�
	����һ���ַ������ҵ����ĵ�һ�����ظ����ַ���������������������������ڣ��򷵻� -1��
	��ʾ������Լٶ����ַ���ֻ����Сд��ĸ��*/
	int firstUniqChar(string s);

	/*  ��ϣӳ��Ӧ�á�����������Ľ��� II
	�����������飬��дһ���������������ǵĽ�����
	˵����
	��������ÿ��Ԫ�س��ֵĴ�����Ӧ��Ԫ�������������г��ִ�������Сֵһ�¡�
	���ǿ��Բ�������������˳��
	���ף�
	��������������Ѿ��ź����أ��㽫����Ż�����㷨��
	��� nums1 �Ĵ�С�� nums2 С�ܶ࣬���ַ������ţ�
	��� nums2 ��Ԫ�ش洢�ڴ����ϣ������ڴ������޵ģ������㲻��һ�μ������е�Ԫ�ص��ڴ��У������ô�죿*/
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2);

private:
	unordered_set<int> hashSet_happy;
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

