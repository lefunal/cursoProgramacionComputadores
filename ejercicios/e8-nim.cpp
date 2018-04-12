// Esqueleto de C++

# include <iostream>    // Input/Output Stream:  cin, cout etc.
# include  <fstream>    // Para leer y escribir en archivos.

# include <cmath>         // math.h: pow(x,y), fabs(x), abs(x), cos(x), sin(x), acos(x), exp(x), log(x), log10(x) etc.

# include <iomanip>     // Input/output manipulators - formateo de salida: setw etc.
# include <cstdio>         // standard input-output : printf: %d ó %i: integer, %f: float, %lf: double, %e - %E: exponente, %c: char, %s:string
# include <cstdlib>      // stdlib.h: standard library; para:  system ("pause") etc.;

using namespace std;  // si no se usa --> usar extensión ".h" ej: # include <iostream.h>

// .........................

int PILA_INICIAL = 21;
int OBJETOS_MAXIMO_POR_JUGADA = 4;
bool jugadeEsInvalida(int pila, int jugadaNumObjetos);

int main(void)
{
    bool termino = false;
    int jugadaNumObjetos;
    int pila;
    int turnoDeJugador = 1;
    
    pila = PILA_INICIAL;
    
    cout << "Bienvenido a Nim" << endl;
    
    
    while(termino == false){
        cout << "Pila: " << pila << endl;

        if(turnoDeJugador == 1){
            cout << "jugada J1: " << endl;
        }
        else{
            cout << "jugada J2: " << endl;
        }
        
        cin >> jugadaNumObjetos;
        
        if(jugadeEsInvalida(pila, jugadaNumObjetos)){
            cout << "Jugada invalida" << endl;
        }
        else{
            pila = pila - jugadaNumObjetos;
            if(pila == 0){
                termino = true;
            }
            else{
                //Cambiar el jugador para el siguiente turno
                if(turnoDeJugador == 1){
                    turnoDeJugador = 2;
                }
                else{
                    turnoDeJugador = 1;
                }
            }
        }
        
        
    }
    
    if(turnoDeJugador == 1){
        cout << "J1 gano!!!!" << endl;
    }
    else {
        cout << "J2 gano!!!!" << endl;
    }
    
    
    system("pause");
    return 0;
}


bool jugadeEsInvalida(int pila, int jugadaNumObjetos){
    if(
       (jugadaNumObjetos < 1) ||
       (OBJETOS_MAXIMO_POR_JUGADA < jugadaNumObjetos) ||
       (pila - jugadaNumObjetos < 0)
       ){
        return true;
    }
    else{
        return false;
    }
}


//....... FIN ...............







