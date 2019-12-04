#include <iostream>
#include <cstdlib>

using namespace std;

long long silnia(int n)
{
	if (n<2)
		return 1; //silnia z 0 i 1 wynosi 1

	return n*silnia(n - 1); //wywo³anie funkcji przez sam¹ siebie ze zmniejszonym argumentem
}

void sj(int k) {
	cout << k / 10 << " " << k % 10 << endl;
}

int n[100];
int D; // ilosc przypadkow
int main() {
	cin >> D;
	for (int i = 1; i <= D; i++) {
		cin >> n[i];
		sj(silnia(n[i]));
	}
	system("PAUSE");
	return 0;
}