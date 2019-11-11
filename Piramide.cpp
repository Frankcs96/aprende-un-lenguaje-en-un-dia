#include<iostream>
using namespace std;

int main()
{
	int altura;

	cout << "\n Introduzca la altura de la piramide: ";
	cin >> altura;
	cout << endl;
	for (int i = 0; i < altura; i++) {

		for (int j = altura - i; j > 1; j--)
		{
			cout << " ";
		}

		for (int k = 0; k < i * 2 + 1; k++)
		{
			cout << "*";
		}

		cout << "\n";
	}
	return 0;
}