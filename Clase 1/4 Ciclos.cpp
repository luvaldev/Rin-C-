#include <iostream>
using namespace std;

int main()
{
  /* ---------------- CICLOS ---------------- */

  /*
  Los ciclos estan formados por una inicializacion, condiciones y a veces
  se utilizan incremento o decremento.
  */

  // Estructura de ciclos :

  while (/*Aqui va la condicion*/)
  {
    // Accion del ciclo
  }

  // Una pequeña diferencia de los ciclos do-while es que te imprime una vez lo del ciclo
  do
  {
    // Accion del ciclo
  } while (/*Aqui va la condicion*/);

  for (/*Inicializacion*/; /*Condicion*/; /*Incremento o derecmento*/)
  {
    // Accion del ciclo
  }

  /* ---------------- EJEMPLOS --------------- */

  /* Pongamos un caso, por ejemplo quisieramos hacer la suma de notas de un estudiante
  el cual tiene una cantidad de 4 calificaciones y debemos sacar el promedio de este */

  // Para ello necesitamos crear una variable la cual almacene notas del propio estudiante como tal
  int n1, n2, n3, n4;

  // Por el momento no sabemos cuales son las calificaciones por lo cual deducimos que las calificaciones
  // Deben ser asignadas por nosotros

  // Ahora existen formas en la cual los ciclos nos ayudaran, una de ellas seria

  for (int i = 0; i < 4; i++)
  {
    // Lo que dice en simples palabras es:

    /* Creamos una variable que se inicializa en un valor 0,
    la cual mientras se cumpla la condicion que se encuentra al medio
    "i < 4", mientras se cumpla el codigo que este dentro de los {}
    sera ejecutado, luego dice que el i++ es un incremento, esto dice
    que mientras se termine de ejecutar todo lo que este dentro de los {}
    la variable i que creamos en un comienzo va a incrementar, en resumen
    cuando termine de ejecutarse el codigo dentro el valor de i va a ser 1,
    luego 2, 3 y cuando llegue al valor 4 el ciclo termina por la condicion "i < 4"
    y sale del ciclo. */

    // Siguiendo el ejemplo de arriba

    cout << "Ingrese la nota " << i + 1 << " del estudiante: " << endl;
    /* Si te causa pregunta el i + 1, es para que salga un 1 en vez de un 0
    por el inicio de la variable que es 0 */

    // Aqui puedes jugar implementando otros conocimientos
    if (i == 0)
    {
      cin >> n1;
    }
    else if (i == 1)
    {
      cin >> n2;
    }
    else if (i == 2)
    {
      cin >> n3;
    }
    else
    {
      cin >> n4;
    }
  }

  // Saliendo del ciclo puedes implementar otro para imprimir las notas.

  //Claramente esto no se ve muy util aun, pero cuando se estudie arrays sera más util.



  /* --- Codigo limpio --- */

  int no1, no2, no3, no4;

  for (int i = 0; i < 4; i++){
    cout << "Ingrese la nota " << i + 1 << " del alumno: " << endl;

    if(i == 0){
      cin >> no1;
    }
    else if(i == 1){
      cin >> no2;
    }
    else if(i == 2){
      cin >> no3;
    }
    else{
      cin >> no4;
    }
  }
}