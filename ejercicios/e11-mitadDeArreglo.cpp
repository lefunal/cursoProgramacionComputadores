// Esqueleto de C++

# include <iostream>    // Input/Output Stream:  cin, cout etc.
# include  <fstream>    // Para leer y escribir en archivos.

# include <cmath>         // math.h: pow(x,y), fabs(x), abs(x), cos(x), sin(x), acos(x), exp(x), log(x), log10(x) etc.

# include <iomanip>     // Input/output manipulators - formateo de salida: setw etc.
# include <cstdio>         // standard input-output : printf: %d ó %i: integer, %f: float, %lf: double, %e - %E: exponente, %c: char, %s:string
# include <cstdlib>      // stdlib.h: standard library; para:  system ("pause") etc.;

using namespace std;  // si no se usa --> usar extensión ".h" ej: # include <iostream.h>

// .........................
int* arregloMitadFinal(int arreglo[], int longitud);

int main(void)
{
 
    int logitud = 5;
    int vec[5] = {1,2,3,4,5};
    int *a = arregloMitadFinal(vec, logitud);
    
    for(int n = 0; n < logitud - logitud/2; n = n + 1){
        cout << a[n] << endl;
    }
    
    system("pause");
    return 0;
}


int* arregloMitadFinal(int arreglo[], int longitud){
    int longitudRes = longitud - longitud/2;
    int *res = new int[longitudRes];

    for(int n = longitud/2; n < longitud; n = n + 1){
        res[n - longitud/2] = arreglo[n];
        cout << "Se copio: " << arreglo[n] << endl;
    }
    
    return res;
}



//....... FIN ...............







