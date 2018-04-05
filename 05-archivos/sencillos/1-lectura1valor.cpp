// Esqueleto de C++

# include <iostream>    // Input/Output Stream:  cin, cout etc.
# include  <fstream>    // Para leer y escribir en archivos.

# include <cmath>         // math.h: pow(x,y), fabs(x), abs(x), cos(x), sin(x), acos(x), exp(x), log(x), log10(x) etc.

# include <iomanip>     // Input/output manipulators - formateo de salida: setw etc.
# include <cstdio>         // standard input-output : printf: %d ó %i: integer, %f: float, %lf: double, %e - %E: exponente, %c: char, %s:string
# include <cstdlib>      // stdlib.h: standard library; para:  system ("pause") etc.;

using namespace std;  // si no se usa --> usar extensión ".h" ej: # include <iostream.h>

// .........................

int main()
{
    
    char a;
    
    // Lectura
    ifstream cin2("entrada1.txt");
    cin2 >> a;
    cout << a << endl;
    
    //Ecritura
    ofstream cout2("salida1.txt");
    cout2 << a;
    
    //Se cierran los archivos
    cin2.clear();   //Borra flags, importante si cin2 se va ha usar para leer varios archivos
    cin2.close();
    
    cout2.clear();  //Borra flags, importante si cout2 se va ha usar para escribir varios archivos
    cout2.close();
    
    system ("pause");
    return 0;
}

//....... FIN ...............

