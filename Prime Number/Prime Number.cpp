// In the name of God !
//Prime Number
//v2.0
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int i,c,j;
	for (i = 100; i < 1000; i++)
	{
		c = 0;
		for (j = 1; j <= i; j++)
			if (i%j == 0)
				c++;
		if (c == 2)
			cout << i << endl;
	}

	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\