#include <iostream>
using namespace std ;

int main() {
  /*
   Las expresiones de += o -= , son una forma de abreviar escribir de nuevo la variable
   en la que estamos almacenando por ejemplo :
    
    jefe += (tamales / 2) --> jefe = jefe+(tamales/2)
    tamales -= jefe   --> tamales = tamales - jefe

    Podemos hacer esto con todas las operaciones , la unica condicion es que primero 
    vaya la operacion y luego el signo de igual , por ejemplo :
                  /=     %=  -=   +=   

  
  */



   int tamales , banda , jefe;
   cin >> tamales >> banda ;

   banda -= 1 ; // Le restamos al jefe 

   if(tamales % 2 == 0){ // Los tamales se pueden repatir entre dos sin que sobre uno 
       jefe += (tamales / 2 );
   }else{
      jefe += (tamales / 2 );
      jefe += 1 ;

   }
   

   tamales -= jefe ; // restamos los que ya le dimos al jefe 

   jefe += (tamales%banda); // Le damos al jefe los que no se puedan dividir entre la banda 
   // El residuo entre dividir los tamales entre la banda o lo que sobre 

   cout << jefe ;
  return 0;
}
