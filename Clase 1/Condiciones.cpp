#include <iostream>
using namespace std;

int main(){
  //Operadores logicos

  //(==) Igual que
  //(<) Menor que
  //(>) Mayor que
  //(<=) Menor o igual que
  //(>=) Mayor o igual que
  //(!=) Distinto de
  //(!) Negacion
  //(%) Modulo

  //(&&) and / funciona como un Y
  //(||) or / funciona como un ó


  /* ------------- Condiciones ---------------*/

  /*
    Estructura:

    if(Condicion)
    {
      Cuerpo de codigo
      cout << "Hola" << endl; 
    }

    else if(Condicion){
|     Cuerpo codigo
    }

    else{
      Cuerpo codigo
    }

  */

 //Caso 1

  int a = 10, b = 10;

  if(a == b)
  {
    cout << "Hola" << endl;
  }

  else if(a == b){
    cout << "Chao" << endl;
  }
  else if(a + b == 20){
    cout << "Correcto" << endl;
  }

  else{
    cout << "Si" << endl;
  }

  //Caso 2

  int c = 10, d = 15;

  if(c > d){
    cout << "Hola" << endl;
  }
  else if (c < d){
    cout << "ugu" << endl;
  }
  else if(c <= d){
    cout << "correcto" << endl;
  }
  //condicion opcional
  else if(c < d || c > d){
    cout << "Listo" << endl;
  }
  //doble condicion
  else if(c < d && d == 15){
    cout << "Si" << endl;
  }
  else{
    cout << "No" << endl;
  }
}