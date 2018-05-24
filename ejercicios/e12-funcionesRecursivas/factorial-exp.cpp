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

int facotorial_0();
int facotorial_1();
int facotorial_2();
int facotorial_3();

int factorial(int n);

int factorialCiclos(int n);


int func_sumatoria_n_mas_uno_1();
int func_sumatoria_n_mas_uno_2();
int func_sumatoria_n_mas_uno_3();

int func_sumatoria_n_mas_uno(int n);
int func_sumatoria_n_mas_uno_ciclos(int n);


double func_exp_0(double x);
double func_exp_1(double x);
double func_exp_2(double x);

double func_exp(double x, int n_terminos);
double func_exp_ciclos(double x, int n_terminos);


int main()
{
    
    cout << "Factorial: " << endl;
    cout << "Usando una funcion por cada n " << endl;
    cout << "3! = " << facotorial_3() << endl;
    cout << endl;
    
    cout << "Usando una funcion recursiva" << endl;
    cout << "3! = " << factorial(3) << endl;
    cout << endl;

    cout << "Usando ciclos" << endl;
    cout << "3! = " << factorialCiclos(3) << endl;
    cout << endl;

    cout << "---------------------------------- " << endl;
    
    cout << "Sumatoria (n+1) de n = 1 hasta m: " << endl;
    cout << "Usando una funcion por cada n " << endl;
    cout << "sumatoria(n+1) = " << func_sumatoria_n_mas_uno_3() << endl;
    cout << endl;
    
    cout << "Usando una funcion recursiva" << endl;
    cout << "sumatoria(n+1) = " << func_sumatoria_n_mas_uno(3) << endl;
    cout << endl;
    
    cout << "Usando ciclos" << endl;
    cout << "sumatoria(n+1) = " << func_sumatoria_n_mas_uno_ciclos(3) << endl;
    cout << endl;
    
    
    
    cout << "---------------------------------- " << endl;
    
    cout << "e^x usando series de Taylor: " << endl;
    cout << "Usando una funcion por cada n " << endl;
    cout << "e^2 = " << func_exp_2(2) << endl;
    cout << endl;
    
    cout << "Usando una funcion recursiva" << endl;
    cout << "e^2 = " << func_exp(2, 10) << endl;
    cout << endl;
    
    cout << "Usando ciclos" << endl;
    cout << "e^2 = " << func_exp_ciclos(2, 10) << endl;
    cout << endl;
    
    system ("pause");
    return 0;
}

int facotorial_0(){
    return 1;
}
int facotorial_1(){
    return 1 * facotorial_0();
}
int facotorial_2(){
    return 2 * facotorial_1();
}
int facotorial_3(){
    return 3 * facotorial_2();
}


int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}

int factorialCiclos(int n){
    int factorialMMenosUno = 1;
    int factorialM = factorialMMenosUno;
    
    for(int m = 1; m <= n; m = m + 1){
        factorialM = m * factorialMMenosUno;
        
        factorialMMenosUno = factorialM; // Se actualiza para la proxima iteracion
    }
    return factorialM;
}


int func_sumatoria_n_mas_uno_1(){
    return 1 + 1;
}
int func_sumatoria_n_mas_uno_2(){
    return (2 + 1) + func_sumatoria_n_mas_uno_1();
}
int func_sumatoria_n_mas_uno_3(){
    return (3 + 1) + func_sumatoria_n_mas_uno_2();
}

int func_sumatoria_n_mas_uno(int n){
    if(n == 1){
        return 1 + 1;
    }
    else{
        return (n + 1) + func_sumatoria_n_mas_uno(n - 1);
    }
}

int func_sumatoria_n_mas_uno_ciclos(int n){
    
    int sumatoriaMMenosUno = 1 + 1; //inicializa a func_sumatoria_n_mas_uno_ciclos(1)
    int sumatoriaM = sumatoriaMMenosUno;
    
    for(int m = 2; m <= n; m = m + 1){
        sumatoriaM = (m + 1) + sumatoriaMMenosUno;
        
        sumatoriaMMenosUno = sumatoriaM; // Se actualiza para la proxima iteracion
    }
    return sumatoriaM;
}


double func_exp_0(double x){
    return pow(x, 0)/((double)factorial(0));
}
double func_exp_1(double x){
    return pow(x, 1)/((double)factorial(1)) + func_exp_0(x);
}
double func_exp_2(double x){
    return pow(x, 2)/((double)factorial(2)) + func_exp_1(x);
}

double func_exp(double x, int n_terminos){
    
    if(n_terminos == 0){
        return pow(x, 0)/((double)factorial(0));
    }
    else{
        return pow(x, n_terminos)/((double)factorial(n_terminos)) + func_exp(x, n_terminos - 1);
    }
}

double func_exp_ciclos(double x, int n_terminos){
    double sumaTerminosAnteriores = pow(x, 0)/((double)factorial(0));
    double sumaTerminos = sumaTerminosAnteriores;
    
    for(int n = 1; n <= n_terminos; n = n + 1){
        sumaTerminos = pow(x, n)/((double)factorial(n))  + sumaTerminosAnteriores;
        
        sumaTerminosAnteriores = sumaTerminos; // Se actualiza para la proxima iteracion
    }
    return sumaTerminos;
}

//....... FIN ...............


