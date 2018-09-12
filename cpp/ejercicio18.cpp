/*
 * nome: ejercicio18.cpp
 * descripción: POO Sobrecarga de constructores
 * fecha: 05/05/2018
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

class Fecha{
private:
  int dia,mes,anio;
public:
  Fecha(int,int,int); //Constructor
  Fecha(long);
  void mostrarFecha();
};

Fecha::Fecha(int _dia,int _mes,int _anio){
  dia = _dia;
  mes = _mes;
  anio = _anio;
}

Fecha::Fecha(long _fecha){
  anio = int(_fecha/10000); _fecha = _fecha%10000;
  mes = int(_fecha/100); _fecha = _fecha%100;
  dia = _fecha;
}

void Fecha::mostrarFecha(){
  cout<<"La fecha es "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main(){
  Fecha hoy(05,04,2018);
  hoy.mostrarFecha();
  Fecha ayer(20180406);
  ayer.mostrarFecha();

  return 0;
}
