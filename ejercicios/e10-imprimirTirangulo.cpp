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

void imprimirTriangulo(ostream& out, int num);

int main()
{
    
    int num;
    // Lectura de altura triangulo, asegurar que el archivo exista
    cin2.open("entrada1.txt");
    
    cin2 >> num;
    
    cout << "Numero de lineas: " << num << endl;

    cout2.open("salida1.txt");
    
    imprimirTriangulo(cout, num);
    imprimirTriangulo(cout2, num);

    //Se cierra
    cin2.clear();   //Borra flags, importante si cin2 se va ha usar para leer varios archivos
    cin2.close();

    cout2.clear();  //Borra flags, importante si cout2 se va ha usar para escribir varios archivos
    cout2.close();
    
    system ("pause");
    return 0;
}

void imprimirTriangulo(ostream& out, int num){
    int num_espacios;
    int ancho_fila = (num - 1)*2 + 1;
    
    for(int fila = 1; fila <= num; fila = fila+1){
        num_espacios = num - fila;
        for(int n = num_espacios; n > 0; n = n - 1){
            out << ' ';
        }
        for(int n = ancho_fila - 2*num_espacios; n > 0 ; n  = n - 1){
            out << "*";
        }
        for(int n = num_espacios; n > 0; n = n - 1){
            out << ' ';
        }
        out  << endl;
        
    }
}


//....... FIN ...............

