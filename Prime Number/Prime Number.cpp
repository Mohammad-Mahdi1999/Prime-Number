// In the name of God !
//Prime Number
//v1.0
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int num, i,c=0;
	cout << "Enter a number:";
	cin >> num;
	for (i = 1; i <= num; i++)
		if (num%i == 0)
			c++;
	if (c == 2)
		cout << "This is a Prime Number!" << endl;
	else 
		cout << "This is a Compound Number!" << endl;

	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\