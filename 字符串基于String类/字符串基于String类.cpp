// 字符串基于String类.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1;
	string str2="www.baidu.com";
	cout << str1 << endl;
	//cout << str2 << endl;
	//str1 = str2;
	//cout << str1 << endl;


	cout << str2[5] << endl;
	str1 = "fdsnfkdsnf";
	str2 = ".com";
string s = str1+str2;
s += str1;
cout << s << endl;
cout << s.size() << endl;


	
	//输入字符串到str1
	//getline(cin, str1);
 //   cout << str1 << endl;

	




    return 0;
}

