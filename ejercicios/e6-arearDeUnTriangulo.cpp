// Esqueleto de C++

# include <iostream>    // Input/Output Stream:  cin, cout etc.
# include  <fstream>    // Para leer y escribir en archivos.

# include <cmath>         // math.h: pow(x,y), fabs(x), abs(x), cos(x), sin(x), acos(x), exp(x), log(x), log10(x) etc.

# include <iomanip>     // Input/output manipulators - formateo de salida: setw etc.
# include <cstdio>         // standard input-output : printf: %d ó %i: integer, %f: float, %lf: double, %e - %E: exponente, %c: char, %s:string
# include <cstdlib>      // stdlib.h: standard library; para:  system ("pause") etc.;

using namespace std;  // si no se usa --> usar extensión ".h" ej: # include <iostream.h>

// .........................

double areaDeUnTriangulo(double base, double altura);

int main(void)
{
    double base, altura;
    cout << "Ingrese la base:" << endl;
    cin >> base;
    
    if(base < 0){
        cout << "La base no es valida" << endl;
        system ("pause");
        return 0;
    }
    
    cout << "Ingrese la altura:" << endl;
    cin >> altura;
    
    if(altura < 0){
        cout << "La altura no es valida" << endl;
        system ("pause");
        return 0;
    }
    
    cout << "El area del triangulo es: " << areaDeUnTriangulo(base, altura) << endl;
    
    system ("pause");
    return 0;
}


double areaDeUnTriangulo(double base, double altura){
    return base*altura/2.0;
}



//....... FIN ...............







