#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <list>

class Archivo{
  public:
    string linea
    string texto

    void leerArchivo();

};

void Archivo::leerArchivo(){
  ifstream archivo("medicinas.csv");

  while (getline(archivo)){
    texto = texto + linea + "\n";
  }

  cout << texto << endl;
}
