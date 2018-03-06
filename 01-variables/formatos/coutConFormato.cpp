// formatos de salida:  
// setw:          anchura del campo.
// setprecision:  número de digitos a escribir.         
# include <iostream>
# include <iomanip>   // para setw etc.  formato de salida
# include <stdlib.h>  // o  # include <cstdlib>    para:  system ("pause");

using namespace std;  // si no se usa --> usar extensión ".h" ej: # include <iostream.h>
// .........................

int main(void)
{
  double a, b;

  a = 2.22222;
  b = 4567.93;
           
  cout << setw(10) << a << setw(10) << b << endl;
       
  cout << setprecision(3) << a << " " << setprecision(3) << b << endl;
    
  cout.precision(3);  
  cout << a << " " << b << endl;
      
  cout << setw(10) << setprecision(3) << a << " " << setw(10) << setprecision(3) << b << endl;
      
  system ("pause");

return 0;
}

//....... FIN ...............

