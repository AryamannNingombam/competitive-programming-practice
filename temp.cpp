#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	char arr[] = {'x', 'y'};
	for (int i = 0; i < 100; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			int result = rand() % 10000;
			int index = result / 5000;
			cout << arr[index];
		}
		cout << '\n';
	}

	return 0;
}