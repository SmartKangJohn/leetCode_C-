#pragma once
#include "commont.h"

class Solution_stringPractice {
public:

	/*  �����ǰ׺
	��дһ�������������ַ��������е������ǰ׺��
	��������ڹ���ǰ׺�����ؿ��ַ��� ""��
	˵��:
	��������ֻ����Сд��ĸ a-z ��*/
	string longestCommonPrefix(vector<string>& strs);

	/*  ������Ӵ�
	����һ���ַ��� s���ҵ� s ����Ļ����Ӵ�������Լ��� s ����󳤶�Ϊ 1000��*/
	string longestPalindrome(string s);

	/*  ��ת�ַ�����ĵ���
	����һ���ַ����������ת�ַ����е�ÿ�����ʡ�
	˵����
	�޿ո��ַ�����һ�����ʡ�
	�����ַ���������ǰ����ߺ����������Ŀո񣬵��Ƿ�ת����ַ����ܰ�����
	����������ʼ��ж���Ŀո񣬽���ת�󵥴ʼ�Ŀո���ٵ�ֻ��һ����*/
	string reverseWords(string s);

	/*  ʵ�� strStr()
	����һ�� haystack �ַ�����һ�� needle �ַ������� haystack �ַ������ҳ� needle �ַ������ֵĵ�һ��λ�� (��0��ʼ)����������ڣ��򷵻�  -1��
	˵��:
	�� needle �ǿ��ַ���ʱ������Ӧ������ʲôֵ�أ�����һ���������кܺõ����⡣
	���ڱ�����ԣ��� needle �ǿ��ַ���ʱ����Ӧ������ 0 ������C���Ե� strstr() �Լ� Java�� indexOf() ���������*/
	int strStr(string haystack, string needle);

private:
	
	/**/
	int match_KMP(const char* P, const char* S);
	int match_KMP(string P, string S);

	/**/
	int* buildNext(const char* M);
	vector<int> buildNext(string M);
};