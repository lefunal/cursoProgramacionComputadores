// Esqueleto de C++

# include <iostream>    // Input/Output Stream:  cin, cout etc.
# include  <fstream>    // Para leer y escribir en archivos.

# include <cmath>         // math.h: pow(x,y), fabs(x), abs(x), cos(x), sin(x), acos(x), exp(x), log(x), log10(x) etc.

# include <iomanip>     // Input/output manipulators - formateo de salida: setw etc.
# include <cstdio>         // standard input-output : printf: %d ó %i: integer, %f: float, %lf: double, %e - %E: exponente, %c: char, %s:string
# include <cstdlib>      // stdlib.h: standard library; para:  system ("pause") etc.;

using namespace std;  // si no se usa --> usar extensión ".h" ej: # include <iostream.h>

// .........................

void imprimirNumero(int n);

int main(void)
{
    int n;
    
    cout << "Ingrese un numero del 1 al 9" << endl;
    cin >> n;
    
    if(n < 1 || n > 9){
        cout << "error, numero fuera de rango" << endl;
        system("pause");
        return 0;
    }
    
    imprimirNumero(n);
    
    system("pause");
    return 0;
}

//void es "nada" es decir la funcion no retorna nada
void imprimirNumero(int n){
    switch(n){
        case 1:
            cout << "ingreso un uno" << endl;
            break;
        case 2:
            cout << "ingreso un dos" << endl;
            break;
        case 3:
            cout << "ingreso un tres" << endl;
            break;
        case 4:
            cout << "ingreso un cuatro" << endl;
            break;
        case 5:
            cout << "ingreso un cinco" << endl;
            break;
        case 6:
            cout << "ingreso un seis" << endl;
            break;
        case 7:
            cout << "ingreso un siete" << endl;
            break;
        case 8:
            cout << "ingreso un ocho" << endl;
            break;
        case 9:
            cout << "ingreso un nueve" << endl;
            break;
        default:
            cout << "Error, Nunca deberia llegar aqui" << endl;
    }
    
    //No retorna nada
}




//....... FIN ...............






