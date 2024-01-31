#include <iostream>
using namespace std;

int main()
{

  /*----------- Imprimir linea de codigo ------------*/
  cout << "Clase 1" << endl;
  
  //Para imprimir cadenas de texto tenemos varias metodologias
  cout << "Hola mundo" << endl;
  /*Lo que hacemos con esto es que el endl hace un salto de linea*/

  //Otra forma de imprimir texto

  cout << "Hola ";
  cout << "Mundo" << endl;
  /*Con esto haremos que se una el texto de arriba con el de abajo*/

  //Otra forma de imprimir texto

  cout << "Hola Mundo \n";
  cout << "\n Hola Mundo \n";
  /*Lo que hace el "\n" es para hacer un salto de linea, dependiendo de la posicion es el salto que hace*/

  //Una ultima forma no muy utilizada, debido a que es de C

  printf("Hola mundo \n");
}