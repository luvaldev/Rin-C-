#include <iostream>
using namespace std;

int main(){
  /*
    int /Numeros enteros
    float /Numeros decimales
    double /Numero decimal gigante
    string /Linea de Caracteres
    char /Caracter

    Estructura:
      int nombre;
      float nombre;
      double nombre;
      string nombre;
      char nombre;

    Asignar valores:
      int numero = 10;
      float numero = 10.5;
      double numero = 10.000001;
      string nombre = "hola ugu";
      char letra = 'h';
  */

  /*-------------- Ingresar Valores -----------*/
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

  /*--------------- Menu -------------*/
  int opcion;

  cout << " --- Menu --- " << endl;
  cout << "1.- Comida \n";
  cout << "2.- Trago \n";
  cout << "3.- Dormir \n";
  cout << "4.- Cagar \n";
  cout << "Ingrese la opcion: ";
  cin >> opcion;
  

}