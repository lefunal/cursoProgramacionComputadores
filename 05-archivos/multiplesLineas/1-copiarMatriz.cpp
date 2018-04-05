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

ifstream cin2;
ofstream cout2;


int main()
{
    string linea;
    // Lectura
    cin2.open("entrada1.txt");
    
    cout2.open("salida2.txt");

    //Se van a leer los primeros dos valores de cada linea y se van a escribir al otro archivo
    while(!getline(cin2, linea).eof()){
        cout << linea << endl;
        
        istringstream iss(linea);
        double b1,b2;
        iss >> b1;
        iss >> b2;

        cout2 << b1 << '\t';
        cout2 << b2 << endl;
    }

    //Se cierra
    cin2.clear();   //Borra flags, importante si cin2 se va ha usar para leer varios archivos
    cin2.close();

    cout2.clear();  //Borra flags, importante si cout2 se va ha usar para escribir varios archivos
    cout2.close();
    
    system ("pause");
    return 0;
}

//....... FIN ...............

