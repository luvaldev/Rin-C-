#include <iostream>
using namespace std;

int main(){
  /* ---------------- Arreglos ---------------- */

  //Veremos algo muy importante y que sera muy util para el manejo de datos
  //Los arrelos es como una caja la cual utilizaremos para el almacenar datos

  // Estructura:
  //  TipodeDato [Tamaño];

  /* ---------- Ejemplo ----------- */

  int calificaciones[4];

  /*
    Aqui una pequeña explicacion:
    
    Lo que haria este calificaciones[4] en palabras simples es crear
    4 variables con el nombre calificaciones las cuales tienen un comienzo
    desde 0 hasta un numero menor que el que sale entre los corchetes
    por lo cual seria desde 0 hasta 3, una forma visual seria:

    calificaciones[0]
    calificaciones[1]
    calificaciones[2]
    calificaciones[3]

    Aqui podemos asignar valores de tipo int a cada [], por ello implementaremos ciclos
    por los cuales serian utiles para estos casos.
  */

  
  //Una forma de asignar valores a los arreglos seria:
  calificaciones[0] = 10;
  calificaciones[1] = 2;
  calificaciones[2] = 5;
  calificaciones[3] = 15;

  //Pero esto no es muy eficiente, ¿Que pasa si te pido 100?, por ello utilizaremos el ciclo for

  for (int i = 0; i < 4; i++){
    /* Primero que todo el i = 0 va a servir para seguir la misma inicializacion que el arreglo
    esto se debe a que calificaciones[4], inicializa en 0 al igual que la variable i del for,
    por ello en el condicional ponemos el tamaño del arreglo que seria 4 ¿Por que?, esto se debe
    a que como inicializa en 0 siempre llega a un numero menor que el insertado, por ejemplo:
    Si tenemos una variable "int numeros[10];" el recorrido de la variable es desde 0 hasta 9,
    por ello si en el condicional del for escribimos "i < 10", esto hara un recorrido desde 0
    hasta 9 porque cuando llegue a 10 no se cumple el "i < 10", porque seria "i == 10". */

    //Siguiendo con la ideologia para insertar datos al arreglo:
    cout << "Ingrese la calificacion numero " << i + 1 << ": "<< endl;
    cin >> calificaciones[i];
    /* Para que se entienda un poco mejor en palabras insertamos una linea de codigo la cual
    te imprimira el "ingrese la calificacion numero", el i + 1 es solamente estetico para que no
    salga 0 porque hay que considerar que inicializa en 0 en el for; adicional a esto en la linea 54
    del codigo apreciamos que hay un "cin >> calificaciones[i]", al momento de poner el i dentro de
    los [], funcionara para hacer un recorrido desde el punto inicial en este caso es 0, al momento
    de que terminemos de insertar la calificacion ingresada como no hay nada más dentro de los {}
    en el for, la variable i va a incrementar a 1, y esto se debe a la parte 3 del for que podemos
    apreciar (inicializacion, condicion, incremento/decremento), por lo cual hay un i++ */
  }

  //Tambien podemos utilizar el ciclo for para imprimir las calificaciones
  for (int i = 0; i < 4; i++){
    cout << "La calificacion " << i + 1 << " es: ";
    cout << calificaciones[i] << endl;
  }

  //Te recomiendo ejecutar el codigo para que puedas apreciar todo lo mencionado arriba
}