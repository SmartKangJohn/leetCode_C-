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
};