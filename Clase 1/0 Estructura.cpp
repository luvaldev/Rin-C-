#include <iostream>  //Libreria para salida y entrada de datos
using namespace std; // Prefijo de std:: y evitar mencionarlo

// int main punto de entrada de cualquier programa
int main()
{ // Dentro de las llaves {} se escribe codigo de C++

  // Comentario forma 1
  /*Comentario forma 2*/

  /* ----------- EXPLICACION ------------ */

  /*
    Comentario abierto para escribir libremente
    dentro de todo lo que haya entre los / *  * /
  */

  /*
    Para entender un poco lo del "using namespace std"
    para escribir una cadena de texto utilizaremos:

    cout << "Hola Mundo" << endl;

    Sin utilizar el "using namespace std" tendriamos
    que escribir el codigo de una forma tediosa:

    cout::std << "Hola Mundo" << endl::std;

    Por lo cual para ahorrar linea de codigo implementamos el prefijo.
  */

  return 0; // Retornar en 0 al terminar el programa
}