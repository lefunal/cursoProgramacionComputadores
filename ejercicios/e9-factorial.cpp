// Esqueleto de C++

# include <iostream>    // Input/Output Stream:  cin, cout etc.
# include  <fstream>    // Para leer y escribir en archivos.

# include <cmath>         // math.h: pow(x,y), fabs(x), abs(x), cos(x), sin(x), acos(x), exp(x), log(x), log10(x) etc.

# include <iomanip>     // Input/output manipulators - formateo de salida: setw etc.
# include <cstdio>         // standard input-output : printf: %d ó %i: integer, %f: float, %lf: double, %e - %E: exponente, %c: char, %s:string
# include <cstdlib>      // stdlib.h: standard library; para:  system ("pause") etc.;
# include <sstream>
using namespace std;  // si no se usa --> usar extensión ".h" ej: # include <iostream.h>

// .........................

int facotorial_0();
int facotorial_1();
int facotorial_2();
int facotorial_3();

int factorial(int n);

int factorialCiclos(int n);

int main()
{
    
    cout << "Factorial: " << endl;
    cout << "Usando una funcion por cada n " << endl;
    cout << "3! = " << facotorial_3() << endl;
    cout << endl;
    
    cout << "Usando una funcion recursiva" << endl;
    cout << "3! = " << factorial(3) << endl;
    cout << endl;

    cout << "Usando ciclos" << endl;
    cout << "3! = " << factorialCiclos(3) << endl;
    cout << endl;

    
    system ("pause");
    return 0;
}

int facotorial_0(){
    return 1;
}
int facotorial_1(){
    return 1 * facotorial_0();
}
int facotorial_2(){
    return 2 * facotorial_1();
}
int facotorial_3(){
    return 3 * facotorial_2();
}


int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}

int factorialCiclos(int n){
    int factorialMMenosUno = 1;
    int factorialM = factorialMMenosUno;
    
    for(int m = 1; m <= n; m = m + 1){
        factorialM = m * factorialMMenosUno;
        
        factorialMMenosUno = factorialM; // Se actualiza para la proxima iteracion
    }
    return factorialM;
}




//....... FIN ...............


