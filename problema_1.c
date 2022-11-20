# include <stdio.h> //Standard input-output header biblioteca est[andar de entrada y salida
# define NUMEROTE 4 //Define la constante 
main () 
//Marca el inicio del programa
{   
int x, y=1; //Declaracion de las variables enteras x y y
float z; //Declaracion de la variable z
z=.08;
x=(3+2)*(7-4);  //Se asigna valor a la variable x
printf ("%d -- %f/n", x, z); //Imprime el valor de las variables x y z
printf ("%d\n", NUMEROTE*2); //Imprime el valor de la expresion fuera de las comillas
printf ("%d\n", 5+2-1>5); //Se evalua la expresion a la izquierda del signo > y se compara con el de la derecha, si es verdadera se simboliza con el numero 1
printf ("%d\n", 3>1 || NUMEROTE*2<1); //Si el valor 3>1 es verdadero (que si lo es) o el valor 2<1 es verdadero (no lo es) se mostrara el 1 que significa "verdadero" 
printf ("%d\n", 5!=1 && NUMEROTE>2); //Se evalua el operador de igualdad != (no es igual a) y luego si la constante es mayor a 2
y=x; //Lo que valga y se asiganra como valor a x
printf ("%d\n", x+y<=z); //Se evalua la expresion a la izquierda de <= si es verdadera imprime 1 si es falsa se imprime en 0	 
} 
//Fin del programa
