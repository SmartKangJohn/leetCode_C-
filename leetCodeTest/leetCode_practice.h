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

	/*56  合并区间
	给出一个区间的集合，请合并所有重叠的区间。*/
	vector<vector<int>> merge(vector<vector<int>>& intervals);

	/*  旋转矩阵
	给你一幅由 N × N 矩阵表示的图像，其中每个像素的大小为 4 字节。请你设计一种算法，将图像旋转 90 度。
	不占用额外内存空间能否做到？*/
	void rotate(vector<vector<int>>& matrix);

	/*  零矩阵
	编写一种算法，若M × N矩阵中某个元素为0，则将其所在的行与列清零。*/
	void setZeroes(vector<vector<int>>& matrix);

	/*  对角线遍历
	给定一个含有 M x N 个元素的矩阵（M 行，N 列），请以对角线遍历的顺序返回这个矩阵中的所有元素，对角线遍历如下图所示。*/
	vector<int> findDiagonalOrder(vector<vector<int>>& matrix);
};