#pragma once
#include "commont.h"

class Solution_doublePtrPractice {
public:

	/*  反转字符串
	编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 char[] 的形式给出。
	不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。
	你可以假设数组中的所有字符都是 ASCII 码表中的可打印字符。*/
	void reverseString(vector<char>& s);

	/*  数组拆分 I
	给定长度为 2n 的数组, 你的任务是将这些数分成 n 对, 例如 (a1, b1), (a2, b2), ..., (an, bn) ，使得从1 到 n 的 min(ai, bi) 总和最大。
	提示:
	1.n 是正整数,范围在 [1, 10000].
	2.数组中的元素范围在 [-10000, 10000].*/
	int arrayPairSum(vector<int>& nums);

	/*  两数之和 II - 输入有序数组
	给定一个已按照升序排列 的有序数组，找到两个数使得它们相加之和等于目标数。
	函数应该返回这两个下标值 index1 和 index2，其中 index1 必须小于 index2。
	说明:
	返回的下标值（index1 和 index2）不是从零开始的。
	你可以假设每个输入只对应唯一的答案，而且你不可以重复使用相同的元素。*/
	vector<int> twoSum(vector<int>& numbers, int target);

	/*  移除元素
	给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
	不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
	元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
	说明:
	为什么返回数值是整数，但输出的答案是数组呢?
	请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。*/
	int removeElement(vector<int>& nums, int val);

	/*  最大连续1的个数
	给定一个二进制数组， 计算其中最大连续1的个数。
	注意：
	输入的数组只包含 0 和1。
	输入数组的长度是正整数，且不超过 10,000。*/
	int findMaxConsecutiveOnes(vector<int>& nums);

	/*  长度最小的子数组
	给定一个含有 n 个正整数的数组和一个正整数 s ，找出该数组中满足其和 ≥ s 的长度最小的 连续 子数组，并返回其长度。如果不存在符合条件的子数组，返回 0。
	进阶：
	如果你已经完成了 O(n) 时间复杂度的解法, 请尝试 O(n log n) 时间复杂度的解法。*/
	int minSubArrayLen(int s, vector<int>& nums);

};