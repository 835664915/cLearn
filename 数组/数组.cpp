// 数组.cpp: 定义控制台应用程序的入口点。
//
//数组是一个符合类型
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()

{

	

	int score = 100;
	//定义数组申明，初始话
	int scoreArray1[4] = {12,5646,45,4545};
	int scoreArray2[4] = { 34,3 };//0
	int scoreArray3[] ={ 34,3,123 };
	/*int scoreArray4[4]; 
	scoreArray4[4] = { 8,5,5,66 };*/
	//scoreArray2 = scoreArray1;

	//int	scoreArray3[4]{3, 34, 3, 3};





	cout << scoreArray1[0] << endl;
	cout << scoreArray2[-1] << endl;
	cout << scoreArray3[2] << endl;
	scoreArray3[0] = 100;
    
	cout << scoreArray3[1] << endl;
	//char cArray[10];
	//bool bArray[90];
	//double dArray[31];
	//float fArray[15];
	
	int age;
	int Age;



	
	return 0;
}

