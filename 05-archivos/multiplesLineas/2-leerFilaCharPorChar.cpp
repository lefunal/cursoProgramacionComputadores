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
    // Lectura
    cin2.open("entrada1.txt");
    if(!cin2.is_open()){
        cout << "No se pudo abrir el archivo" << endl;
        system ("pause");
        return 0;
    }
    
    string linea;
    char c;
    int n;
    char* arreglo = new char[100]{'a'};
    
    getline(cin2, linea);
    istringstream iss(linea);
    n = 0;
    
    while(iss.get(c)){
        arreglo[n] = c;
        
        n = n + 1;
    }
    cout << "La primera linea del archivo tiene:" << n << " caracteres" << endl;
    for(int m = 0; m < n ; m = m + 1){
        cout << "["<< m << "]: "<<arreglo[m] << endl;
    }
    cout << endl;
    
    
    //Se cierra
    cin2.clear();   //Borra flags, importante si cin2 se va ha usar para leer varios archivos
    cin2.close();
    
    system ("pause");
    return 0;
}

//....... FIN ...............




