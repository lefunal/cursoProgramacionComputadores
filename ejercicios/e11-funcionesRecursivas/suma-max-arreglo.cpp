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

int suma_arreglo_1(int arreglo[]);
int suma_arreglo_2(int arreglo[]);
int suma_arreglo_3(int arreglo[]);

int suma_arreglo(int arreglo[], int num_elementos);
int suma_arreglo_ciclo(int arreglo[], int num_elementos);


int max_1(int arreglo[]);
int max_2(int arreglo[]);
int max_3(int arreglo[]);

int max(int arreglo[], int num_elementos);
int max_ciclo(int arreglo[], int num_elementos);


int main()
{
    
    int arreglo [100] = {1, 1, 3, 7, 5};
    
    cout << "Suma elementos arreglo: " << endl;
    cout << "Usando una funcion por cada n " << endl;
    cout << "Suma arreglo = " << suma_arreglo_2(arreglo) << endl;
    cout << endl;
    
    cout << "Usando una funcion recursiva" << endl;
    cout << "Suma arreglo = " << suma_arreglo(arreglo, 5) << endl;
    cout << endl;

    cout << "Usando ciclos" << endl;
    cout << "Suma arreglo = " << suma_arreglo_ciclo(arreglo, 5) << endl;
    cout << endl;
    
    cout << "---------------------------------- " << endl;
 
    cout << "Maximo elemento de un arreglo: " << endl;
    cout << "Usando una funcion por cada n " << endl;
    cout << "max = " << max_3(arreglo) << endl;
    cout << endl;
    
    cout << "Usando una funcion recursiva" << endl;
    cout << "max = " << max(arreglo, 5) << endl;
    cout << endl;
    
    cout << "Usando ciclos" << endl;
    cout << "max = " << max_ciclo(arreglo, 5) << endl;
    cout << endl;
    
    system ("pause");
    return 0;
}

int suma_arreglo_1(int arreglo[]){
    return arreglo[0];
}
int suma_arreglo_2(int arreglo[]){
    return arreglo[1] + suma_arreglo_1(arreglo);
}
int suma_arreglo_3(int arreglo[]){
    return arreglo[2] + suma_arreglo_2(arreglo);
}

int suma_arreglo(int arreglo[], int num_elementos){
    if(num_elementos == 1){
        return arreglo[0];
    }
    else{
        return arreglo[num_elementos - 1] + suma_arreglo(arreglo, num_elementos - 1);
    }
}

int suma_arreglo_ciclo(int arreglo[], int num_elementos){
    int sumatoriaNMenosUno = arreglo[0]; //inicializa a suma_arreglo_ciclo(arreglo, 1)
    int sumatoriaN = sumatoriaNMenosUno;
    
    for(int n = 2; n <= num_elementos; n = n + 1){
        sumatoriaN = arreglo[n -1] + sumatoriaNMenosUno;
        
        sumatoriaNMenosUno = sumatoriaN; //Actualizamos para el siguiente ciclo
    }
    return sumatoriaN;
}


int max_1(int arreglo[]){
    return arreglo[0];
}
int max_2(int arreglo[]){
    if(arreglo[1] > max_1(arreglo)){
        return arreglo[1];
    }
    else{
        return max_1(arreglo);
    }
}
int max_3(int arreglo[]){
    if(arreglo[2] > max_2(arreglo)){
        return arreglo[2];
    }
    else{
        return max_2(arreglo);
    }
}

int max(int arreglo[], int num_elementos){
    if(num_elementos == 1){
        return arreglo[0];
    }
    else{
        if(arreglo[num_elementos-1] > max(arreglo, num_elementos - 1)){
            return arreglo[num_elementos-1];
        }
        else{
            return max(arreglo, num_elementos - 1);
        }
    }
}

int max_ciclo(int arreglo[], int num_elementos){
    
    int maxNMenosUno = arreglo[0]; //inicializa a max_ciclo(arreglo, 1)
    int maxN = maxNMenosUno;
    
    for(int n = 2; n <= num_elementos; n = n + 1){
        if(arreglo[n - 1] > maxNMenosUno){
            maxN  = arreglo[n - 1];
        }
        else{
            maxN = maxNMenosUno;
        }
        
        maxNMenosUno = maxN; //Actualizamos para el siguiente ciclo
    }
    return maxN;
}

//....... FIN ...............



