/*
 * nome: ejercicio14.cpp
 * descripción: Pilas.
 * fecha: 03/05/2018
 */

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo
{
  int dato;
  Nodo *siguiente;
};

/*Prototipos: */
void push(Nodo *&); // aplilar
void pop(Nodo *&);  // desapilar
void mostrar(Nodo *&);
void ultimo(Nodo *&);
void vaciar(Nodo *&);

int main()
{
  int opc = 0;
  Nodo *pila = NULL; // pila o tope apunta al último elemento para quitar o adicionar

  cout<<"\nBienvenido a Programación de Pilas (LIFO)";
  cout<<"\n=========================================\n";
  cout<<"\nOpciones:";
  cout<<"\n1. Agregar un nuevo objeto a la pila.";
  cout<<"\n2. Quitar el primer objeto de la pila.";
  cout<<"\n3. Mostrar y contar todos los elementos de la pila.";
  cout<<"\n4. Leer último elemento.";
  cout<<"\n5. Vaciar pila.";
  cout<<"\n6. Salir.";

  do {
    cout<<"\n\nSeleccione una opciones: ";
    cin >>opc;

    switch (opc) {
      case 1: push(pila);    break; // apliar
      case 2: pop(pila);     break; // desapilar
      case 3: mostrar(pila); break; // tamaño
      case 4: ultimo(pila);  break; //Leer último
      case 5: vaciar(pila);  break; // empty
      case 6: break;
    }
  } while(opc != 6);
  delete pila;
  cout<<endl;
  return 0;
}

void push(Nodo *&pila)
{
  Nodo *nuevo_nodo = new Nodo();
  cout<<"\nElemento a ingresar en la pila: ";
  cin >>nuevo_nodo->dato;
  nuevo_nodo->siguiente = pila; // pila será el puntero tope
  pila = nuevo_nodo;
  cout<<"Elemento "<<nuevo_nodo->dato<<" agregado a pila";
}

void pop(Nodo *&pila)
{
  if (pila != NULL) {
    //int n = 0;
    Nodo *aux = pila;
    //n = aux->dato;
    pila = aux->siguiente;
    cout<<"\nElemento "<<aux->dato<<" fue eliminado de la pila";
    delete aux;
  } else
    cout<<"\nPila vacia";
}

void mostrar(Nodo *&pila)
{
  int c = 0;
  Nodo *aux = pila;
  if (aux == NULL)
    cout<<"\nPila vacia";
  else
  {
    cout<<"\nElementos de la pila:";
    while(aux != NULL)
    {
      cout<<" "<<aux->dato;
      aux = aux->siguiente;
      c++;
    }
    cout<<".";
    cout<<"\nExiste "<<c<<" dentro de la pila Nodo.";
  }
}

void ultimo(Nodo *&pila)
{
  if (pila != NULL)
    cout<<"\nÚltimo elemento es: "<<pila->dato;
  else
    cout<<"\nPila vacia";
}

void vaciar(Nodo *&pila)
{
  if (pila == NULL)
    cout<<"\nPila vacia";
  else
  {
    cout<<"\nElementos eliminados de la pila:";
    while(pila != NULL)
    {
      cout<<" "<<pila->dato;
      Nodo *aux = pila;
      pila = aux->siguiente;
      delete aux;
    }
    cout<<"."<<"\nPila vacia";
  }
}
