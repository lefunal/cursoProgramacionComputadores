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

struct imagen{
    int altura;
    int ancho;
    char **matriz;
};

char ** crear_matriz_char(int n, int m);

imagen* leerImagen(istream& is);
void imprimirImagen(imagen* img, ostream& os);

imagen* estirarVertical(imagen* img, int n);
imagen* estirarHorizontal(imagen* img, int n);
imagen* girarNoventaGrados(imagen* img);

int main()
{
    // Lectura
    cin2.open("entrada1.txt");
    if(!cin2.is_open()){
        cout << "No se pudo abrir el archivo" << endl;
        system ("pause");
        return 0;
    }
    
    imagen *m1 = leerImagen(cin2);
    cout << "matriz original: " << endl;
    cout << "altura: " << m1->altura << endl;
    cout << "ancho: "<< m1->ancho << endl;
    cout << endl;
    imprimirImagen(m1, cout);
    cout << endl;
    
    cout << "Matriz estirada verticalmente: " << endl;

    imagen* m2 = estirarVertical(m1, 3);
    imprimirImagen(m2, cout);
    cout << endl;

    cout << "Matriz estirada horizontalmente: " << endl;
    imagen* m3 = estirarHorizontal(m1, 3);
    imprimirImagen(m3, cout);
    cout << endl;
    
    cout << "Matriz girada 90 grados" << endl;
    imagen* m4 = girarNoventaGrados(m1);
    imprimirImagen(m4, cout);
    cout << endl;


    //Imprimir m4 a archivo
    cout2.open("salida2.txt");
    
    //Se cierra
    cin2.clear();   //Borra flags, importante si cin2 se va ha usar para leer varios archivos
    cin2.close();
    
    cout2.clear();  //Borra flags, importante si cout2 se va ha usar para escribir varios archivos
    cout2.close();
    
    system ("pause");
    return 0;
}

imagen* leerImagen(istream& is){
    string linea;
    char buffer [100][100];
    
    int n = 0;
    int m = 0;

    // Se lee el archivo en la variable buffer
    while(getline(is, linea)){
        istringstream iss(linea);
        char c;
        m = 0;
        
        while(iss.get(c)){
            buffer[n][m] = c;
            m = m + 1;
        }
        
        n = n + 1;
    }

    //Se copian los elementos del buffer a leida
    imagen* leida = new imagen;
    leida->matriz = crear_matriz_char(n, m);
    for(int h = 0; h < n; h = h + 1){
        for(int k = 0; k < m; k = k + 1){
            leida->matriz[h][k] = buffer[h][k];
        }
    }
    leida->altura = n;
    leida->ancho = m;
    
    return leida;
}

void imprimirImagen(imagen* img, ostream& os){
    
    for(int n = 0; n < img->altura; n = n + 1){
        for(int m = 0; m < img->ancho; m = m + 1){
            os << img->matriz[n][m];
        }
        os << endl;
    }
    
}

imagen* estirarVertical(imagen* img, int n){
    imagen* res = new imagen;
    res->altura = (img->altura)*n;
    res->ancho = img->ancho;
    res->matriz = crear_matriz_char(res->altura, res->ancho);

    for(int w = 0; w < img->altura; w = w + 1){
        for(int nn = 0; nn < n; nn = nn + 1){
            for(int x = 0; x < img->ancho; x = x + 1){
                res->matriz[w*n + nn][x] = img->matriz[w][x];
            }
        }
    }
    return res;
}

imagen* estirarHorizontal(imagen* img, int n){
    imagen* res = new imagen;
    res->altura = img->altura;
    res->ancho = (img->ancho)*n;
    res->matriz = crear_matriz_char(res->altura, res->ancho);
    
    for(int w = 0; w < img->altura; w = w + 1){
        for(int x = 0; x < img->ancho; x = x + 1){
            for(int nn = 0; nn < n; nn = nn + 1){
                res->matriz[w][x*n + nn] = img->matriz[w][x];
            }
        }
    }
    return res;
}

imagen* girarNoventaGrados(imagen* img){
    imagen* res = new imagen;
    res->altura = img->ancho;
    res->ancho = img->altura;
    res->matriz = crear_matriz_char(res->altura, res->ancho);
    
    for(int w = 0; w < res->altura; w = w + 1){
        for(int x = 0; x < res->ancho; x = x + 1){
            res->matriz[w][x] = img->matriz[x][img->ancho - 1 - w];
        }
    }
    
    return res;
}

char ** crear_matriz_char(int n, int m){
    char** matriz = new char* [n];
    for (int k = 0; k < n; k = k + 1){
        matriz[k] = new char [m];
    }
    return matriz;
}



//....... FIN ...............

