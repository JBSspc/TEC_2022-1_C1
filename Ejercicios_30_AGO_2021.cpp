// Ejercicio 1: Determinar si un número es par
procedure numeroPar(n): n = 3
    //Inputs: n:número que se verificará para definir si es par o impar
    //Output: resultado: número par o impar
    resultado = ""
    if(n % 2 == 0)
        imprimir("n es un número par")
        resultado = "par"
    else
        imprimir("n es un número impar")
        resultado = "impar"
    return resultado

t7 + 2 * t8 + t9 + t10 + t14 
O(2)

t = 1 ms
t = 10 ms
t = 5 ms


// Ejercicio 2: Mayor de tres números

procedure mayor3Num(a, b, c):
    // Input: tres números a,b,c
    // Output: mayor que a,b,c
    mayor = 0

    Si a es el mayor de los tres números
        imprimir("a es el mayor")
        mayor = a 


    if(a > b and a > c):
        imprimir("a es el mayor elemento")
        mayor = a
    if(b > a and b > c):
        imprimir("b es el mayor elemento")
        mayor = b
    if(c > a and c > b):
        imprimir("c es el mayor elemento")
        mayor = c
    return mayor

// Ejercicio 3: determinar si un número "n" está dentro de un intervalo [0,10]

procedure pertenencia(n):
    // Input: n número aleatorio entero 0, 1000
    // Output: pertenece, no pertenece

    pertenece = false
    a = 0
    b = 10

    if (n >= a and <= b):
        imprimir("n está dentro del interval")
        pertenece = true
    else:
        imprimir("n no está detro del intervalo")
        pertenece = false
    return pertenece

// Ejercicio 4: Determinar si todos los números de un arreglo pertenecen a un intervalo [0,10]

procedure pertenenciaArray(A, n): [9, 10, 15, 25, 56] n = 5
    // Input: A: Array enteros 0, 10000 n: tamaño del arreglo
    // Output: B: Array de booleanos

    a = 0
    b = 10

    B[n] = false // Todas las posiciones del arreglo son falsas inicialmente
    for(i = 0; i<n; i++):
        if(A[i] >= a and A[i] <= b):
            B[i] = true
        else
            B[i] = false
    return B

B = [true, true, false, false, false, false]

