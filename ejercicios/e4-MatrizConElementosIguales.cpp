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
    int matriz[3][3] = {
        {1, 1,  1},
        {1, 1,  1},
        {1, 1,  1}
    };
    bool todosSonIgualesaANum = true;
    int num;
    
    cout << "Ingrese un numero:"<<endl;
    cin >> num;
    
    for(int n = 0; n < 3; n = n + 1){
        for(int m = 0; m < 3; m = m + 1){
            if(num != matriz[n][m]){
                todosSonIgualesaANum = false;
            }
        }
    }
    
    if(todosSonIgualesaANum == true){
        cout << "Todos los elementos de la matriz son iguales a: " << num << endl;
    }
    else {
        cout << "No todos los elementos de la matriz son iguales a: " << num << endl;
    }

    system ("pause");    
        
    return 0;
}

//....... FIN ...............


