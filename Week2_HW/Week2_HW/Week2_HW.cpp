// Week2_HW.cpp : 定义控制台应用程序的入口点。
//

// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int max, min, a;
	//double mean;

	unsigned int N;
	cout << "please input the size of the array" << endl;
	cin >> N;
	if (N <= 100) {

		cin >> a;
		min = a;
		max = a;
		int Sum = a;
		for (int i = 2; i <= N; i++)
		{
			int temp;
			cin >> temp;
			Sum += temp;
			if (temp > max)
			{
				max = temp;
			}
			else max = max;
			if (temp < min)
			{
				min = temp;
			}
			else min = min;

		}
		//mean = (double)Sum / N;
		cout << sum << "\t" << min << "\t" << max << endl;
	}
	else cout << "please input N <= 100" << endl;



	return 0;
}

