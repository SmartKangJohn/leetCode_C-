#pragma once
#include "commont.h"

class Solution_numPractice {
public:

	/*724	寻找数组的中心索引
	给定一个整数类型的数组 nums，请编写一个能够返回数组 “中心索引” 的方法。
	我们是这样定义数组 中心索引 的：数组中心索引的左侧所有元素相加的和等于右侧所有元素相加的和。
	如果数组不存在中心索引，那么我们应该返回 - 1。如果数组有多个中心索引，那么我们应该返回最靠近左边的那一个
	*/
	int pivotIndex(vector<int>& nums);

	/*35  搜索插入位置
	给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
	你可以假设数组中无重复元素。*/
	int searchInsert(vector<int>& nums, int target);

	/*	合并区间
	给出一个区间的集合，请合并所有重叠的区间。*/
	vector<vector<int>> merge(vector<vector<int>>& intervals);
};