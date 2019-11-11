#include <cstdlib> 
#include <ctime> 
#include <iostream>

using namespace std;

bool compruebaPrimo(int n)
{
	if (n == 1)
	{
		return false;
	}

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) {
			return false;
		}
	}

	return true;


}


int main()
{
	int array[20];
	int primos[20];
	int noPrimos[20];
	int contadorNoPrimos = 0;
	int contadorPrimos = 0;
	srand(time(0));

	cout << "Array original: ";
	
		
	
	

	for (int i = 0; i < 20; i++)
	{
		array[i] = rand() % 100 + 1;
		cout << array[i] << " ";
	}

	for (int i = 0; i < 20; i++)
	{
		if (compruebaPrimo(array[i])) {
			primos[contadorPrimos] = array[i];
			contadorPrimos++;	
		}
		else
		{
			noPrimos[contadorNoPrimos] = array[i];
			contadorNoPrimos++;						
		}	
	}

	for (int i = 0; i < contadorPrimos; i++)
	{
		array[i] = primos[i];
	}

	for (int i = contadorPrimos; i < 20; i++)
	{
		array[i] = noPrimos[i - contadorPrimos];

	}

	
	cout << "\n\nArray ordenado con numeros primos en primeras posiciones: ";
	for (int i = 0; i < 20; i++)
	{
		cout << array[i] << " ";
	}


	
	return 0;
}





