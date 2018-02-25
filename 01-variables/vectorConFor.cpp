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

    bool A, ANegado;

    double altura_estudiante [4];
    int edad_estudiante [4] = {21, 22, 19, 23};
    int num_estudiantes = 4;
    cout << "edad_estudiante[0]= " << edad_estudiante[0] << endl;
    cout << "edad_estudiante[1]= " << edad_estudiante[1] << endl;
    cout << "edad_estudiante[3]= " << edad_estudiante[2] << endl;
    cout << "edad_estudiante[4]= " << edad_estudiante[3] << endl;

    cout << endl;

    altura_estudiante[0] = 170;
    altura_estudiante[1] = 165;
    altura_estudiante[2] = 160;
    altura_estudiante[3] = 172;

    cout << "elturas estudiantes" << endl;

    for(int n = 0; n < num_estudiantes; n = n+1){
        cout << altura_estudiante[n] << endl;

    }

    cout << "¿Como se imprimirian los numeros del 0 al 5?" << endl;
    cout << "¿Como se imprimirian los primeros 5 numeros pares?" << endl;
    cout << "¿Como se imprimirian los primeros 5 numeros impares?" << endl;


    system ("pause");
    return 0;
}

//....... FIN ...............
