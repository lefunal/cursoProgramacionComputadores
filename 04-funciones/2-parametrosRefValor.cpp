// Esqueleto de C++

# include <iostream>    // Input/Output Stream:  cin, cout etc.
# include  <fstream>    // Para leer y escribir en archivos.

# include <cmath>         // math.h: pow(x,y), fabs(x), abs(x), cos(x), sin(x), acos(x), exp(x), log(x), log10(x) etc.

# include <iomanip>     // Input/output manipulators - formateo de salida: setw etc.
# include <cstdio>         // standard input-output : printf: %d ó %i: integer, %f: float, %lf: double, %e - %E: exponente, %c: char, %s:string
# include <cstdlib>      // stdlib.h: standard library; para:  system ("pause") etc.;

using namespace std;  // si no se usa --> usar extensión ".h" ej: # include <iostream.h>

// .........................
void f1(int x); // Pasa x por valor
void f2(int& x); //Pasa x por referencia

int main(void)
{
 
    int x = 3;
    
    f1(x);
    cout << "x main: "<< x << endl;
    f2(x);
    cout << "x main: "<< x << endl;

    
    system("pause");
    return 0;
}

void f1(int x){
    x = x + 1;
    cout << "x f1: "<< x << endl;
    return;
}

void f2(int& x){
    x = x + 1;
    cout << "x f2: "<< x << endl;
    return;
}


//....... FIN ...............







