# Aprende un lenguaje de programación en un día (ejercicio voluntario para subir nota).

## Miembros del grupo

* [Francisco Carmona Suárez](https://github.com/Frankcs96)
* [Miguel González Mora](https://github.com/Miguelgm1693)
* [Pedro Cisneros Santana](https://github.com/PedroCisnerosSantana)

## Lenguaje de programación

* [C++](https://es.wikipedia.org/wiki/C%2B%2B)

## Información sobre el lenguaje

Busca páginas y/o manuales sobre el lenguaje de programación elegido. Escribe aquí las principales características: cuándo y para qué se creó, en qué ámbito se utiliza, cuáles son sus principales ventajas, etc. Pon aquí enlaces y capturas de pantalla.

## Herramientas de desarrollo

Utilizamos Visual Studio Enterprise

## Poniendo en práctica el lenguaje

Pon en práctica el lenguaje de programación realizando los siguientes ejercicios. Para cada uno de los ejercicios, pega el código fuente de la solución y una captura de pantalla.

### 1. ¡Hola mundo!

Realiza un programa que muestre por pantalla la frase **¡Hola mundo!**.

Código en C++ del ¡Hola Mundo!: 

```C++
#include <iostream>
int main()
{
  std::cout << "Hello  World!";
  return 0;
}
```

![Imágen de Hola Mundo](https://github.com/Frankcs96/aprende-un-lenguaje-en-un-dia/blob/master/img/helloworld.png)


### 2. Pirámide

Dada una altura introducida por el usuario, realiza un programa que pinte una pirámide a base de asteriscos con la altura indicada.

Código en C++ de la pirámide: 

```C++
#include<iostream>
using namespace std;

int main()
{
  int altura;

  cout << "\n Introduzca la altura de la pirámide: ";
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
```

![Piramide dibujada](https://github.com/Frankcs96/aprende-un-lenguaje-en-un-dia/blob/master/img/piramide.png) 

### 3. Arrays y números aleatorios

Realiza un programa que rellene un array (o una estructura similar) con 20 números enteros aleatorios entre 1 y 100 y que seguidamente los muestre por pantalla. A continuación, se deben pasar los números primos a las primeras posiciones del array y los no primos a las posiciones restantes. Muestra finalmente el array resultado.

```C++
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

```

![Imagen de Arrays](https://github.com/Frankcs96/aprende-un-lenguaje-en-un-dia/blob/master/img/arrays.png)

## Presentación de resultados

Cada equipo explicará al resto de la clase lo aprendido durante la realización del ejercicio. Todos los miembros de cada equipo deben participar en la explicación. Se puede utilizar como material de base para la presentación el repositorio de GitHub.

## Recompensa

* Todos los alumnos que realicen correctamente la actividad tendrán 0'25 puntos extra en la nota del trimestre.

* Los miembros del equipo más votado ganarán un premio.

:star: Si te ha gustado este ejercicio, dale una estrellita al [repositorio original](https://github.com/LuisJoseSanchez/aprende-un-lenguaje-en-un-dia).

