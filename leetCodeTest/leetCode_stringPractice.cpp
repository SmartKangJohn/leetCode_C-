#include "leetCode_stringPractice.h"

string Solution_stringPractice::longestCommonPrefix(vector<string>& strs)
{
	if (strs.empty())
	{
		return {};
	}
	int nSize = strs.size();
	string sfind;
	int slen = strs[0].length();
	bool isSame = true;
	for (int k = 0; k < slen; k++)
	{
		char s1 = strs[0][k];
		for (int i = 0; i < nSize; i++)
		{
			if (s1 == strs[i][k])
			{
				isSame = true;
			}
			else
			{
				isSame = false;
				break;
			}
		}
		if (isSame)
		{
			sfind += s1;
		}
		else
		{
			break;
		}
	}
	return sfind;
}

string Solution_stringPractice::longestPalindrome(string s)
{
	int slen = s.length();
	if (slen < 1)
	{
		return {};
	}
	string vfind;
	if (slen == 1)
	{
		return s;
	}
	if (slen == 2)
	{
		if (s[0] == s[1])
		{
			return s;
		}
		else
		{
			vfind = s[0];
			return vfind;
		}
	}
	int lo = 0;
	int hi = 0;
	int nSize = 0;
	int start = 0;
	for (int i = 1; i < slen - 1; i++)
	{
		lo = i - 1;
		hi = i + 1;
		int sta1 = 0;
		int nSz1 = 0;
		while (lo >= 0 && hi <= slen - 1)
		{
			if (s[lo] == s[hi] && lo != hi)
			{
				nSz1 = hi - lo;
				sta1 = lo;
			}
			else
			{
				break;
			}
			lo--;
			hi++;
		}
		if (nSz1 > nSize)
		{
			start = sta1;
			nSize = nSz1;
		}
	}
	for (int i = 0; i < slen - 1; i++)
	{
		lo = i;
		hi = i + 1;
		int sta1 = 0;
		int nSz1 = 0;
		while (lo >= 0 && hi <= slen - 1)
		{
			if (s[lo] == s[hi] && lo != hi)
			{
				nSz1 = hi - lo;
				sta1 = lo;
			}
			else
			{
				break;
			}
			lo--;
			hi++;
		}
		if (nSz1 > nSize)
		{
			start = sta1;
			nSize = nSz1;
		}
	}
	for (int k = start; k <= start + nSize; k++)
	{
		vfind += s[k];
	}
	return vfind;
}

string Solution_stringPractice::reverseWords(string s)
{
	int nSize = s.length();
	if (nSize < 1)
	{
		return {};
	}
	vector<string> vstr;
	string s1;
	for (int i = 0; i < nSize; i++)
	{
		if (i == 0)
		{
			while(s[i] == ' ' && i < nSize)
			{
				i++;
			}
		}
		while (s[i] != ' '&& i < nSize)
		{
			s1 += s[i];
			i++;
		}
		if (!s1.empty())
		{
			vstr.push_back(s1);
			s1.clear();
		}
	}
	s1.clear();
	for (int i = vstr.size()-1; i > -1; i--)
	{
		s1 += vstr[i];
		if (i != 0)
		{
			s1 += " ";
		}
	}
	return s1;
}
