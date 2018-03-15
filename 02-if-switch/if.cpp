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
    int miDinero = 10000;
    int costoAlmuerzoDeMiRestaurantePreferido = 15000;
    bool miAmigoMeInvitaAComerASuCasa = false;
    
    if(miAmigoMeInvitaAComerASuCasa){
        cout << "Le agradezco a mi amigo por invitarme" << endl;
    }
    
    if(miDinero >= costoAlmuerzoDeMiRestaurantePreferido){
        cout << "Considero si almuerzo en mi Restaurante preferido" << endl;
    }
    else{
        cout << "Me doy cuenta de que no puedo ir al restaurante" << endl;
    }
    
    if(miAmigoMeInvitaAComerASuCasa && (miDinero < costoAlmuerzoDeMiRestaurantePreferido)){
        cout << "Almuerzo en la casa de mi amigo" << endl;
    }
    else if(miDinero >= costoAlmuerzoDeMiRestaurantePreferido){
        cout << "Almuerzo en mi Restuarante preferido" << endl;
    }
    else{
        cout << "Me toco almorzar en mi casa" << endl;
    }
   
}

//....... FIN ...............





