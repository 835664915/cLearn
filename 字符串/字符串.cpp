// 字符串.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{


	//char website[] = { 's','t','k' ,'\0'};
	////空字符 空格字符
	//char website2[] = { 'g','k','l','e','t','\0' };
	//cout << website << endl;
	//cout << website2 << endl;

	//char website[] = "skifjdksjf";
	//cout << website << endl;
	//cout << website[3] << endl;
 //   cout << strlen(website) << endl;

	//char website[20];
	//cin >> website;
	//cout << website << endl;


	//char str[] = "MY Name Is Michear . I Come From china";

	char name[30];
	char food[40];
	cout << "你的名字是；";
	cin >> name;//tab
	cout << "你喜欢的食物是：";
	cin >> food;
	cout << name << "喜欢的食物是：" << food << endl;

	




    return 0;
}

