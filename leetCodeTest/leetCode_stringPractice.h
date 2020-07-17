#pragma once
#include "commont.h"

class Solution_stringPractice {
public:

	/*  最长公共前缀
	编写一个函数来查找字符串数组中的最长公共前缀。
	如果不存在公共前缀，返回空字符串 ""。
	说明:
	所有输入只包含小写字母 a-z 。*/
	string longestCommonPrefix(vector<string>& strs);

	/*  最长回文子串
	给定一个字符串 s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为 1000。*/
	string longestPalindrome(string s);

	/*  翻转字符串里的单词
	给定一个字符串，逐个翻转字符串中的每个单词。
	说明：
	无空格字符构成一个单词。
	输入字符串可以在前面或者后面包含多余的空格，但是反转后的字符不能包括。
	如果两个单词间有多余的空格，将反转后单词间的空格减少到只含一个。*/
	string reverseWords(string s);
};