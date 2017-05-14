#include <iostream>
#include <iomanip>

using namespace std;

void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int value = 2, list[5] = {1,3,5,7,9};
	swap(value, list[0]);
	swap(list[0], list[1]);
	swap(value, list[value]);
	return 0;
}
