#include <iostream>
using namespace std;

int main()
{

  /*----------- Imprimir linea de codigo ------------*/
  cout << "Clase 1" << endl;
  cout << "Prueba \n";

  /*
  Ejemplo:
    cout << "Clase 1" << endl;

    Clase 1

    cout << "Prueba \n";

    Prueba
  */

  // cout << "Hola mucho gusto ";
  // cout << "Hola" << endl;

  // cout << endl;

  // cout << "Menu" << endl;
  // cout << "1.-Patatas" << endl;
  // cout << "2.-Lechuga" << endl;
  // cout << "3.-Hola ";
  // cout << "4.-chao";

  // printf("Hola mundo \n");

  /*-------------- Variables -----------------*/

  // - Valores numericos

  /*---------------- Ingresar Valores --------------*/
  cout << endl; // Salto de linea

  int edad;

  cout << "Ingresa tu edad:" << endl;
  cin >> edad; // Ingresa un valor a la variable

  // Imprimir el valor de la variable
  cout << "Tu edad es: " << edad << endl;

  /*-------------- Ingresar Valores -----------*/
  cout << endl; // Salto de linea

  string nombre;

  cout << "Ingresa tu nombre: ";
  cin >> nombre; // Ingresar valor a la variable

  // Imprimir el valor
  cout << "Tu nombre es: " << nombre << endl;
}