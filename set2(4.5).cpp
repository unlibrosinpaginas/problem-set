#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//int sum(const int[], int); //prototipo, suma los elementos del arreglo


int sum( const int numbers [] , const int numbersLen){
	int sum = 0;
    for ( int i = 0; i < numbersLen ; ++i){
        sum += numbers [i];
    }
    return sum ;
}


int main()

{
  const int numbersLen = 3;
  int numbers[numbersLen] = {0};

  for (int i = 0; i < numbersLen; i++)
    {
      cout << "Ingrese el valor para arregloA["<< i+1 << "]: ";
      cin >> numbers[i];
    }

  cout << "La suma de sus elementos es igual a "<< sum(numbers,numbersLen)<< endl;
}


