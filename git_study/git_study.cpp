// git_study.cpp : 定义控制台应用程序的入口点。
#include "stdafx.h"
#include<iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
<<<<<<< HEAD
{
	int a,b,c;
    cout << "请输入3个数字，按回车结束" << endl;
    cin >>a>>b>>c;
    cout << a <<b<<c<< endl;
	 cout << "修复bug结束" << endl;
    return 0;
=======
{   int a,b;
 	cout << "请输入2个数字，按回车结束" << endl;
 	cin>>a>>b;
    int sub,sum;
 	sub =a-b;
	sum=a+b;
    cout << "两个数的和为："<< sum<< endl;
	cout << "两个数的差为："<< sub<< endl;
  	return 0;		  	
>>>>>>> 994c8cb206cbeded8b24a0bd456d63b3c3806c9d
}

