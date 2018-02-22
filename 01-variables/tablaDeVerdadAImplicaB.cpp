// Esqueleto de C++

# include <iostream>    // Input/Output Stream:  cin, cout etc.
# include  <fstream>    // Para leer y escribir en archivos.

# include <cmath>         // math.h: pow(x,y), fabs(x), abs(x), cos(x), sin(x), acos(x), exp(x), log(x), log10(x) etc.

# include <iomanip>     // Input/output manipulators - formateo de salida: setw etc.
# include <cstdio>         // standard input-output : printf: %d ó %i: integer, %f: float, %lf: double, %e - %E: exponente, %c: char, %s:string
# include <cstdlib>      // stdlib.h: standard library; para:  system ("pause") etc.;

using namespace std;  // si no se usa --> usar extensión ".h" ej: # include <iostream.h>

// .........................

int main(void)
{
    
    bool A, B, AimplicaB;
    
    cout << "Tabla de A -> B, (A implica B)" << endl;
    cout << endl;
    
    cout << "A | B | A -> B" << endl;
    cout << "--------------" << endl;

    // A -> B es igual a B || !A
    A = true;
    B = true;
    AimplicaB = B || !A;
    cout << A << " | " << B << " | " << AimplicaB << endl;

    A = true;
    B = false;
    AimplicaB = B || !A;
    cout << A << " | " << B << " | " << AimplicaB << endl;
    
    A = false;
    B = true;
    AimplicaB = B || !A;
    cout << A << " | " << B << " | " << AimplicaB << endl;
    
    A = false;
    B = false;
    AimplicaB = B || !A;
    cout << A << " | " << B << " | " << AimplicaB << endl;
    
    
    system ("pause");
    return 0;
}

//....... FIN ...............


