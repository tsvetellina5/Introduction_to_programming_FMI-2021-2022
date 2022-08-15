#include <iostream>
using namespace std;

int main() {
	int N, M, Q;
	cin >> N >> M >> Q;

	int*** matrix = new int** [N];

	for (int i = 0; i < N; i++) {
		matrix[i] = new int* [M];

		for (int j = 0; j < Q; j++) {
			matrix[i][j] = new int[Q];
		}

	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			for (int k = 0; k < Q; k++) {
				cin >> matrix[i][j][k];
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			delete[] matrix[i][j];
		}
		delete[] matrix[i];
	}
	delete[] matrix;
}
