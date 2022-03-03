#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;

int main(void)
{
	string  a, b = { "CAMBRIDGE" };
	int c = 0;
	cin >> a;

	for (int i = 0; i < a.length(); i++)
	{
		for (int j = 0; j < b.length(); j++)
		{
			if (a[i] == b[j])
				c = 1;
		}
		if (c == 1)
			c = 0;
		else
			cout << a[i];
	}

	return 0;
}
