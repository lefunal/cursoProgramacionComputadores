// Esqueleto de C++

# include <iostream>	// Input/Output Stream:  cin, cout etc.
# include  <fstream>    // Para leer y escribir en archivos.

# include <cmath> 		// math.h: pow(x,y), fabs(x), abs(x), cos(x), sin(x), acos(x), exp(x), log(x), log10(x) etc.

# include <iomanip> 	// Input/output manipulators - formateo de salida: setw etc.
# include <cstdio> 		// standard input-output : printf: %d ó %i: integer, %f: float, %lf: double, %e - %E: exponente, %c: char, %s:string
# include <cstdlib>  	// stdlib.h: standard library; para:  system ("pause") etc.; 

using namespace std;  // si no se usa --> usar extensión ".h" ej: # include <iostream.h>

// .........................

int main(void)
{

  //Declaracion de variables
  bool b;         
  int i = 1;      
  int j;
  double d;
  char c;
  
  cout << "Los int son numeros enteros" << endl;
  i = -100;
  cout << "i= " << i << endl;
  i = -10;
  cout << "i= " << i << endl;
  i = 0;
  cout << "i= " << i << endl;
  i = 10;
  cout << "i= " << i << endl;
  cout << endl;


  cout << "Los double son numeros que pueden tener decimales" << endl;
  d = 100;
  cout << "d= " << d << endl;
  d = 10.234;
  cout << "d= " << d << endl;
  d = 10e+1; //Notacion cientifica
  cout << "d= " << d << endl;
  d = 10e-2;
  cout << "d= " << d << endl;
  cout << endl;

  cout << "Los char son caracteres" << endl;  
  c = 'a';
  cout << "c= " << c << endl;
  c = 'A';
  cout << "c= " << c << endl;
  c = 'Z';
  cout << "c= " << c << endl;
  cout << endl;

  cout << "Los bools pueden ser true o false" << endl;
  b = true;
  cout << "b= " << b << endl;
  b = false;
  cout << "b= " << b << endl;
  cout << endl;



  //Lectura de cin
  cout << "Teclee un valor para i" << endl;  
  cin >> i;
  cout << "i= " << i << endl;

  cout << "Teclee un valor para d" << endl;  
  cin >> d;
  cout << "d= " << d << endl;

  cout << "Teclee un valor para c" << endl;  
  cin >> c;
  cout << "c= " << c << endl;

  cout << "Teclee un valor para b(true, false)" << endl;  
  cin >> b;
  cout << "b= " << b << endl;


system ("pause");
return 0;
}

//....... FIN ...............

