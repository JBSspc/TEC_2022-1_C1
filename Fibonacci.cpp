/*====================================================================================
Author: Sofía Palacios
Email: sofiapalacioscuevas@comunidad.unam.mx
01 SEP 2021
---
Calcular la serie de Fibonacci hasta n = 1
Colocaré como comentario el pseudocódigo

procedure calculateFibonacci(n):
      // Input: n número de iteraciones
      //Output: Array
      
      fib[n] // Definición de un arreglo 
      fib[0] = 1
      fib[1] = 2
      i = 2
   
      i = 1
      while(i<=n):
          fib[i] = fib[i - 2] + fib[i - 1]
          i = i + 1
      return fib
      Complejidad: O(n)
====================================================================================*/

#include <iostream>
#include <string>
using namespace std;

#include <stdio.h>

// '::main' must return 'int' 
// Error con void; cambiamos void main() con getw a int main() con return 0

int main()
{
    int n, f, f1 = -1, f2 = 1;
     system("CLS");

    cout << " Write the number of elements:";
    cin >> n;

    cout<< "The Fibonacci's Series is:";

    while(n > 0)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        cout<< " /n" << f;
    }
    return 0 ;

}