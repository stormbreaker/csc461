#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>


using namespace std;

int main ()
{
	int array1[500][500];
	int *ptr2;
	
	ptr2 = (int*) &array1;

	clock_t t;


	t = clock();
	//column-major
	for (int k = 0; k < 1000; k++)
	{
		for (int i = 0; i < 500; i++)
		{
			for (int j = 0; j < 500; j++)
			{
				array1[j][i]  = 1;
			}
		}
	}
	cout << "Column Major: " << (double) (clock() - t)/CLOCKS_PER_SEC << " seconds" << endl;
	t = clock();
	//row major
	for (int k = 0; k < 1000; k++)
	{
		for (int i = 0; i < 500; i++)
		{
			for (int j = 0; j < 500; j++)
			{
				array1[i][j] = 1;
			}
		}
	}
	cout << "Row Major: " << (double) (clock() - t)/CLOCKS_PER_SEC << " seconds" << endl;

	t = clock();
	//arithmetic
	for (int k = 0; k < 1000; k++)
	{
		for(int i = 0; i < 500; i++)
		{
			for (int j = 0; j < 500; j++)
			{
				ptr2 = ptr2 + (sizeof(int));
			}
		}
	}
	cout << "Arithmetic: " << (double) (clock() - t)/CLOCKS_PER_SEC << " seconds" << endl;

	return 0;
}
