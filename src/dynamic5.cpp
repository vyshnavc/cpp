#include "../inc/cpplib" 
using namespace std;
#define X 2
#define Y 3
#define Z 4

int main()
{
	int*** A = new int**[X];

	for (int i = 0; i < X; i++)
	{
		A[i] = new int*[Y];

		for (int j = 0; j < Y; j++)
			A[i][j] = new int[Z];
	}

	for (int i = 0; i < X; i++)
		for (int j = 0; j < Y; j++)
			for (int k = 0; k < Z; k++)
				A[i][j][k] = i+j+k+1;

	for (int i = 0; i < X; i++)
	{
		for (int j = 0; j < Y; j++)
		{
			for (int k = 0; k < Z; k++)
				cout << A[i][j][k] << " ";

			cout << endl;
		}
		cout << endl;
	}

	for (int i = 0; i < X; i++)
	{
		for (int j = 0; j < Y; j++)
			delete[] A[i][j];

		delete[] A[i];
	}

	delete[] A;

	return 0;
}
