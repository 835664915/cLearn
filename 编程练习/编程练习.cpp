// 编程练习.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	/*cout << "请输入你的生高";
	float height;
	cin >> height;

	int heightCM = height * 100;

	cout << "你的身高是" << heightCM << "厘米" << endl;*/
	
	cout << "请输入秒:";
	int timeS;
	cin >> timeS;
	int ge = timeS % 10;
	int shi = (timeS % 100) / 10;
	int bai = (timeS % 1000) / 100;
	int qian = timeS / 1000;

	cout <<"     " << ge << "      "<<shi << "   "<<bai << "  "<<qian<<endl;



	    int scenc;
		cout << "请输入秒:";
		cin >> timeS;
		int day = scenc / (24 * 60 * 60);
		int hour = scenc - day;
		


    return 0;
}

