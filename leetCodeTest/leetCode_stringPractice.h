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

	/*  实现 strStr()
	给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回  -1。
	说明:
	当 needle 是空字符串时，我们应当返回什么值呢？这是一个在面试中很好的问题。
	对于本题而言，当 needle 是空字符串时我们应当返回 0 。这与C语言的 strstr() 以及 Java的 indexOf() 定义相符。*/
	int strStr(string haystack, string needle);

private:
	
	/**/
	int match_KMP(const char* P, const char* S);
	int match_KMP(string P, string S);

	/**/
	int* buildNext(const char* M);
	vector<int> buildNext(string M);
};