#include "stdafx.h"
#include "iostream"
#include "string"
#include "math.h"
const short N = 25;
using namespace std;

int main()
{
	int tab[N][N];
	int tab2[N][N];
	bool change = false;

	for (int i = 0; i<N; i++) {
		for (int j = 0; j<N; j++) {
			tab[i][j] = 0;
			tab2[i][j] = 0;
		}
	}

	tab[N / 2][N / 2] = 1;
	tab[N / 2][N / 2 - 1] = 1;
	tab[N / 2][N / 2 + 1] = 1;
	tab[N / 2 + 1][N / 2] = 1;
	tab[N / 2 + 1][N / 2 - 1] = 1;
	tab[N / 2 + 1][N / 2 + 1] = 1;
	tab[N / 2 - 1][N / 2] = 1;
	tab[N / 2 - 1][N / 2 + 1] = 1;
	tab[N / 2 - 1][N / 2 - 1] = 1;

	for (int k = 0; k<N; k++) {
		for (int i = 1; i<N - 1; i++) {
			for (int j = 1; j<N - 1; j++) {
				int counter = 0;
				if (!change) {
					counter = tab[i - 1][j - 1] + tab[i - 1][j] + tab[i - 1][j + 1] + tab[i][j - 1] + tab[i][j + 1] + tab[i + 1][j - 1] + tab[i + 1][j] + tab[i + 1][j + 1] + tab[i][j];
					if (counter<3) tab2[i][j] = 0;
					if (counter >= 3 && counter<5) tab2[i][j] = 1;
					if (counter >= 5) tab2[i][j] = 0;
					cout << tab2[i][j] << " ";
				}
				else {
					counter = tab2[i - 1][j - 1] + tab2[i - 1][j] + tab2[i - 1][j + 1] + tab2[i][j - 1] + tab2[i][j + 1] + tab2[i + 1][j - 1] + tab2[i + 1][j] + tab2[i + 1][j + 1] + tab2[i][j];
					if (counter<3) tab[i][j] = 0;
					if (counter >= 3 && counter<5) tab[i][j] = 1;
					if (counter >= 5) tab[i][j] = 0;
					cout << tab[i][j] << " ";
				}
			}
			cout << endl;
		}
		cout << endl;
		change = !change;
	}
	cin >> ;


}