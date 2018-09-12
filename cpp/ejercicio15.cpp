/*
 * nome: ejercicio15.cpp
 * descripción: Colas FIFO.
 * fecha: 04/05/2018
 */

 #include <iostream>
 #include <stdlib.h>
 using namespace std;

 struct Nodo
 {
   int dato;
   Nodo *siguiente;
 };

 /* Prototipos */
void push(Nodo *&,Nodo *&);
void pop(Nodo *&,Nodo *&);
bool cola_vacia(Nodo *);
void mostrar(Nodo *&,Nodo *&);
void primer(Nodo *&);
void ultimo(Nodo *&);
void vaciar(Nodo *&,Nodo *&);
void destructor(Nodo *&,Nodo *&);

 int main()
 {
   Nodo *frente = NULL;
   Nodo *fin = NULL;
   int opc = 0;
   //Nodo *cola = NULL; // pila o tope apunta al último elemento para quitar o adicionar

   cout<<"\nBienvenido a Programación de Colas o Filas (FIFO)";
   cout<<"\n=========================================\n";
   cout<<"\nOpciones:";
   cout<<"\n1. Agregar un elemento a la cola.";
   cout<<"\n2. Quitar el primer elemento a la cola.";
   cout<<"\n3. Consultar si la cola está vacia.";
   cout<<"\n4. Mostrar todos los elementos de la cola.";
   cout<<"\n5. Leer el primer elemento de la cola.";
   cout<<"\n6. Leer el último elemento de la cola.";
   cout<<"\n7. Vaciar la cola.";
   cout<<"\n8. Destructor de la cola Nodo.";
   cout<<"\n9. Salir.";

   do {
     cout<<"\n\nSeleccione una opciones: ";
     cin >>opc;

     switch (opc){
       case 1: push(frente,fin);    break; // apliar
       case 2: pop(frente,fin);     break; // desapilar
       case 3: if(cola_vacia(frente))
                cout<<"Cola vacia\n";
              else
                cout<<"Cola contiene elementos\n";
              break;
       case 4: mostrar(frente,fin);  break;
       case 5: primer(frente);  break;
       case 6: ultimo(fin); break;
       case 7: vaciar(frente,fin); break;
       case 8: destructor(frente,fin); opc = 9;
       case 9: break;
     }
   } while(opc != 9);
   //delete pila;
   cout<<endl;

   return 0;
 }

void push(Nodo *&frente,Nodo *&fin)
{
  Nodo *nuevo_nodo = new Nodo();

  cout<<"Elemento a ingresar en la cola: ";
  cin >>nuevo_nodo->dato;
  nuevo_nodo->siguiente = NULL;

  if(cola_vacia(frente))
    frente = nuevo_nodo;
  else
    fin->siguiente = nuevo_nodo;

  fin = nuevo_nodo;
}

void pop(Nodo *&frente,Nodo *&fin)
{
  Nodo *aux = frente;
  if (frente==NULL)
    cout<<"Cola vacia\n";
  else if(frente==fin)
  {
    cout<<"Elemento frente "<<aux->dato<<" eliminado de la fila.\n";
    frente = NULL;
    fin = NULL;
  }
  else{
    cout<<"Elemento frente "<<aux->dato<<" eliminado de la fila.\n";
    frente = frente->siguiente;
  }
  delete aux;
}

bool cola_vacia(Nodo *frente)
{
  return (frente==NULL)? true : false;
}

void mostrar(Nodo *&frente,Nodo *&fin)
{
  if(frente == NULL)
    cout<<"Cola vacia\n";
  else
  {
    Nodo *aux = frente;
    cout<<"Los elementos de la cola son: ";
  while(aux != NULL)
    {
      if(aux->siguiente != NULL)
        cout<<aux->dato<<" , ";
      else
        cout<<aux->dato<<".";

      aux = aux->siguiente;
    }
  }
}

void primer(Nodo *&frente)
{
  if(frente != NULL)
    cout<<"El primer elemento de la cola es frente: "<<frente->dato;
  else
    cout<<"\nCola vacia";
}

void ultimo(Nodo *&fin)
{
  if(fin != NULL)
    cout<<"\nEl último elemento de la cola es fin: "<<fin->dato;
  else
    cout<<"\nCola vacia";
}

void vaciar(Nodo *&frente,Nodo *&fin)
{
  if (frente==NULL)
    cout<<"Cola vacia\n";
  else
  {
    while(frente != NULL)
    {
      Nodo *aux = frente;

      if(frente==fin)
       {
         cout<<aux->dato<<".";
         frente = NULL;
         fin = NULL;
       }
       else{
         cout<<frente->dato<<" , ";
         frente = frente->siguiente;
       }

       delete aux;
     }
  }
}

void destructor(Nodo *&frente,Nodo *&fin)
{
  while(frente != NULL)
  {
    Nodo *aux = frente;

    if(frente==fin)
     {
       frente = NULL;
       fin = NULL;
     }
     else{
       frente = frente->siguiente;
     }

     delete aux;
   }
   delete frente, fin;
   cout<<"Cola destruida. Hasta luego!";
}
