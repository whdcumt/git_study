// git_study.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{   int a,b;
 	cout << "请输入2个数字，按回车结束" << endl;
 	cin>>a>>b;
    int sub,sum;
 	sub =a-b;
	sum=a+b;
    cout << "两个数的和为："<< sum<< endl;
	cout << "两个数的差为："<< sub<< endl;
  	return 0;		  	
}

