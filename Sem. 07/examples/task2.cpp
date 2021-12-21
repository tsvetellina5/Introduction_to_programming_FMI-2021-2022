#include <iostream>
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#ifdef _DEBUG
#define new new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#endif

using namespace std;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	int N; //rows
	int M; //columns
	cin >> N >> M;
	
	//Allocate memory
	int** matrix = new int*[N];
	for (int i = 0; i < N; i++)
	{
		matrix[i] = new int[M];
	}
	
	//Input
	for (int i = 0; i < N; i++)
	{
		for (int y = 0; y < M; y++)
			cin >> matrix[i][y];
	}

    //Output
	for (int i = 0; i < N; i++) 
	{
		for (int y = 0; y < M; y++)
			cout << matrix[i][y] << " ";

		cout << endl;
	}

    //Free memory
	for (int i = 0; i < N; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}