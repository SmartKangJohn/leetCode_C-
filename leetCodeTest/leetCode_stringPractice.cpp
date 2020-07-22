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

int Solution_stringPractice::strStr(string haystack, string needle)
{
	//int hSize = haystack.length();
	//int nSize = needle.length();
	//char* h = new char(hSize);
	//char* n = new char(nSize);
	//while (hSize > 0)
	//{
	//	h[hSize - 1] = haystack[hSize - 1];
	//	hSize--;
	//}
 //	while (nSize > 0)
	//{
	//	n[nSize - 1] = needle[nSize - 1];
	//	nSize--;
	//}
	//int pos1 = match_KMP(h, n);
	//delete[] h;
	//delete[] n;

	int pos1 = match_KMP(haystack, needle);
	return pos1;
}

int Solution_stringPractice::match_KMP(const char * P, const char * S)
{
	int* next = buildNext(S);  //构造next表
	int sizeP = strlen(P), n_P = 0;	 //源str指针
	int sizeS = strlen(S), n_S = 0;  //模板str指针
	while (n_P < sizeP && n_S < sizeS)
	{
		if (n_P < 0 || S[n_S] == P[n_P])
		{
			n_P++;
			n_S++;
		}
		else
		{
			n_P = next[n_P];
		}
 	}
	delete[] next;
	return n_P - n_S;
}

int Solution_stringPractice::match_KMP(string P, string S)
{
	vector<int> vNext = buildNext(S);
	int sizeP = P.length(), n_P = 0;	 //源str指针
	int sizeS = S.length(), n_S = 0;  //模板str指针
	while (n_P < sizeP && n_S < sizeS)
	{
		if (n_P < 0 || S[n_S] == P[n_P])
		{
			n_P++;
			n_S++;
		}
		else
		{
			n_P = vNext[n_P];
		}
	}
	return n_S - n_P;
}

int * Solution_stringPractice::buildNext(const char * M)
{
	size_t m = (int)strlen(M), j = 0;
	int* N = new int(m);
	int t = N[0] = -1;
	while (j < m-1)
	{
		if (0 > t || M[j] == M[t])
		{
			j++;
			t++;
			N[j] = t;
		}
		else
		{
			t = N[t];
		}
	}
	return N;
}

vector<int> Solution_stringPractice::buildNext(string M)
{
	int nSize = M.length();
	int j = 0;
	vector<int> N(nSize);
	int t = N[0] = -1;
	while (j < nSize - 1)
	{
		if (0 > t || M[j] == M[t])
		{
			j++;
			t++;
			N[j] = t;
		}
		else
		{
			t = N[t];
		}
	}
	return N;
}
