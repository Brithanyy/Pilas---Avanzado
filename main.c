#include <stdio.h>
#include <stdlib.h>
#include "pila.h";

int main() {
/**1)Sumar los elementos de una pila (usar variables enteras) */
/*int i, acumulador;
acumulador = 0;
srand(time(NULL));
Pila elementos;
inicpila(&elementos);

for (i = 1; i <=10; i++) {
    apilar(&elementos, rand()%10+1);
    acumulador = acumulador + tope(&elementos);
}
printf("Los elementos de la pila son los siguientes: \n");
mostrar(&elementos);
printf("La suma de todos los elementos de la pila es: ");
printf("%i", acumulador);
printf("\n"); */


/**2)Contar los elementos de una pila (usar variables enteras) */

/*int contador;
contador = 0;
char eleccion;
srand(time(NULL));
Pila pila;
inicpila(&pila);

do { //Ingresarle elementos a una pila.
    leer(&pila);
    printf("Ingrese s para continuar \n");
    fflush(stdin);
    scanf("%c", &eleccion);
    printf("\n");
    contador = contador + 1;
} while(eleccion == 's');

printf("Los elementos de la Pila son:");
mostrar(&pila);
printf("\n");
printf("Total de elementos: %i", contador);
printf("\n"); */

/**3)Calcular el promedio de los valores de una pila (usar variables) */
/*
Pila elementos;
inicpila(&elementos);

int contador, acumulador;
float promedio;
char eleccion;
acumulador = 0;
contador = 0;

do { //Ingresarle elementos a una pila.
    leer(&elementos);
    printf("Ingrese s para continuar \n");
    fflush(stdin);
    scanf("%c", &eleccion);
    printf("\n");
    contador = contador + 1;
    acumulador = acumulador + tope(&elementos);
} while(eleccion == 's');

promedio = acumulador / contador;

printf("Los elementos de la Pila:");
mostrar(&elementos);
printf("\n");
printf("La sumatoria total de los elementos: %i", acumulador);
printf("\n");
printf("Total de elementos: %i", contador);
printf("\n");
printf("Promedio: %.2f", promedio);
printf("\n"); */

/**4)Encontrar el menor elemento de una pila y guardarlo en otra. (sin variables enteras, solo
pilas)*/
/*
Pila elementos, aux, menor;
inicpila(&elementos);
inicpila(&aux);
inicpila(&menor);

char eleccion;
do { //Ingresarle elementos a una pila.
    leer(&elementos);
    printf("Ingrese s para continuar \n");
    fflush(stdin);
    scanf("%c", &eleccion);
    printf("\n");
} while(eleccion == 's');

if(!pilavacia(&elementos)) {
    apilar(&menor, desapilar(&elementos));
}
while(!pilavacia(&elementos)) {
    if(tope(&elementos) < tope(&menor)) {
        apilar(&aux, desapilar(&menor));
        apilar(&menor, desapilar(&elementos));
    }
    else {
        apilar(&aux, desapilar(&elementos));
    }
}

while(!pilavacia(&aux)) {
    apilar(&elementos, desapilar(&aux));
    }

    printf("Elementos de la Pila: ");
    mostrar(&elementos);
    printf("Elemento menor de la Pila:");
    mostrar(&menor);

*/

/**
5)Insertar un elemento en una pila ordenada de menor (tope) a mayor
(base) de forma tal que se conserve el orden. (sin variables enteras, solo pilas)*/

/*
Pila dada, aux, menor, dato;
inicpila(&dada);
inicpila(&aux);
inicpila(&menor);
inicpila(&dato);


char eleccion;
do { //Ingresarle elementos a una pila.
    leer(&dada);
    printf("Ingrese s para continuar \n");
    fflush(stdin);
    scanf("%c", &eleccion);
    printf("\n");
} while(eleccion == 's');

printf("Mostrando pila cargada: ");
mostrar(&dada);
printf("\n");

//ORDENAMIENTO POR SELECCION ALGORITMO
if(!pilavacia(&dada)) {
    apilar(&menor, desapilar(&dada));
}
while(!pilavacia(&dada)) {
    if(tope(&dada) < tope(&menor)) {
        apilar(&aux, desapilar(&menor));
        apilar(&menor, desapilar(&dada));
    }
    else {
        apilar(&aux, desapilar(&dada));
    }
}
apilar(&dada, desapilar(&menor));
while(!pilavacia(&aux)) {
    apilar(&dada, desapilar(&aux));
    }


printf("Mostrando la pila ordenada: ");
mostrar(&dada);
//ORDENAMIENTO POR INSERCCION ALGORITMO:
printf("Ingrese el dato a insertar en la pila: ");
leer(&dato);

printf("Mostrando el dato a insertar: ");
mostrar(&dato);

while(!pilavacia(&dada) && tope(&dada)>tope(&dato)){
        apilar(&aux, desapilar(&dada));
    }

    apilar(&dada, desapilar(&dato));

    while(!pilavacia(&aux)){
        apilar(&dada, desapilar(&aux));
    }

printf("Mostrando el dato ya insertado en la pila: ");
mostrar(&dada);
printf("\n");

*/

/**
6.Usando lo resuelto en el ejercicio 4,
pasar los elementos de una pila a otra de forma tal que la segunda pila quede ordenada
de mayor (tope) a menor (base). Esto se llama método de ordenación por selección. */

/*
Pila elementos, aux, menor, ordenadaxSeleccion;
inicpila(&elementos);
inicpila(&aux);
inicpila(&menor);
inicpila(&ordenadaxSeleccion);

char eleccion;
do { //Ingresarle elementos a una pila.
    leer(&elementos);
    printf("Ingrese s para continuar \n");
    fflush(stdin);
    scanf("%c", &eleccion);
    printf("\n");
} while(eleccion == 's');

if(!pilavacia(&elementos)) {
    apilar(&menor, desapilar(&elementos));
}
while(!pilavacia(&elementos)) {
    if(tope(&elementos) < tope(&menor)) {
        apilar(&aux, desapilar(&menor));
        apilar(&menor, desapilar(&elementos));
    }
    else {
        apilar(&aux, desapilar(&elementos));
    }
}

while(!pilavacia(&aux)) {
    apilar(&elementos, desapilar(&aux));
    }

//APILANDO EL ELEMENTO DE MENOR A ELEMENTOS
apilar(&elementos, desapilar(&menor));

//ORDENADA POR SELECCION:
while (!pilavacia(&elementos))
    {

        apilar(&menor, desapilar(&elementos));


        while(!pilavacia(&elementos))
        {
            if(tope(&menor)>tope(&elementos))
            {
                apilar(&aux, desapilar(&menor));
                apilar(&menor, desapilar(&elementos));
            }
            else
                apilar(&aux, desapilar(&elementos));
        }


        while(!pilavacia(&aux))
        {
            apilar(&elementos, desapilar(&aux));
        }


        apilar(&ordenadaxSeleccion, desapilar(&menor));
    }

    printf("Pila Elementos\n");
    mostrar(&elementos);

    printf("Pila ordenada x seleccion\n");
    mostrar(&ordenadaxSeleccion);

*/

/** Determinar si un elemento buscado está dentro de una pila. Al encontrarlo, finalizar la búsqueda. */
/*
Pila elementos, encontrar, aux;
inicpila(&elementos);
inicpila(&encontrar);
inicpila(&aux);

int elemento, i;

srand(time(NULL));

//Ingresarle elementos a la pila ELEMENTOS.
    for (i = 1; i <=10; i++) {
    apilar(&elementos, rand()%50+1);
}
printf("Mostrando la pila elementos cargada: ");
mostrar(&elementos);
printf("\n");

// Codigo para ingresar el numero que queremos buscar de la pila elementos.
printf("Ingrese un elemento para encontrarlo en la pila elementos: ");
scanf("%i", &elemento);


while (!pilavacia(&elementos)&&tope(&elementos)!=elemento){
        apilar(&aux, desapilar(&elementos));
    }


    if(!pilavacia(&elementos)){
        apilar(&encontrar, tope(&elementos));
    }

    while(!pilavacia(&aux)){
        apilar(&elementos, desapilar(&aux));
    }

    printf("Pila ELEMENTOS: ");
    mostrar(&elementos);
    printf("\n");

    printf("Mostrando el elemento encontrado: ");
    mostrar(&encontrar);
    printf("\n");
*/

/** 8.Eliminar un elemento de una pila. Al eliminarlo, finalizar el recorrido y dejar el resto en el mismo orden. */
/*
Pila elementos, eliminado, aux;
inicpila(&elementos);
inicpila(&eliminado);
inicpila(&aux);

int elemento, i;

srand(time(NULL));

//Ingresarle elementos a la pila ELEMENTOS.
    for (i = 1; i <=10; i++) {
    apilar(&elementos, rand()%50+1);
}
printf("Mostrando la pila elementos cargada: ");
mostrar(&elementos);
printf("\n");

// Codigo para ingresar el numero que queremos buscar de la pila elementos.
printf("Ingrese un elemento para eliminarlo: ");
scanf("%i", &elemento);

while(!pilavacia(&elementos) && tope(&elementos) != elemento){

    apilar(&aux, desapilar(&elementos));
}
if(!pilavacia(&elementos)){
    apilar(&eliminado, desapilar(&elementos));
}
while(!pilavacia(&aux)){
    apilar(&elementos, desapilar(&aux));
}

printf("Mostrando la pila Elemento: ");
mostrar(&elementos);

printf("\n");

printf("Mostrando el elemento eliminado: ");
mostrar(&eliminado);
*/

/** 9. Verificar si una pila DADA es capicúa. */
/*
Pila dada, aux, aux1, basura;
inicpila(&dada);
inicpila(&aux);
inicpila(&aux1);
inicpila(&basura);
int i, flag;
flag = 1;
srand(time(NULL));

printf("Cargandole elementos a la pila dada: \n");
printf("\n");
for(i = 0; i<3; i++){
    apilar(&dada, rand()%3+1);
}
printf("Mostrando la pila cargada:  ");
mostrar(&dada);

while(!pilavacia(&dada)){
    apilar(&aux, tope(&dada));
    apilar(&aux1, desapilar(&dada));
}

while(!pilavacia(&aux1)){
    apilar(&dada, desapilar(&aux1));
}

while((!pilavacia(&dada) && !pilavacia(&aux))){

    if((tope(&aux)) != tope(&dada)){
        flag = 0;
}
apilar(&basura, desapilar(&dada));
        apilar(&basura, desapilar(&aux));
}
if(flag == 1){
    printf("ES CAPICUA !");
    printf("\n");
}else{
    printf("NO ES CAPICUA");
    printf("\n");
}
*/

/** 10.Dadas dos pilas A y B que simulan conjuntos (cada conjunto no tiene elementos repetidos sobre sí mismo),
realizar un programa que calcule en la pila C la operación de unión.
A : base 1 2 3  tope
B: base 2 3 5 7 tope
Pila AUB = base 3 2 1 7 5 tope
*/
/*
Pila a,b, aux,aux2, basura, aUb;
inicpila(&a);
inicpila(&b);
inicpila(&aux);
inicpila(&basura);
inicpila(&aux2);
inicpila(&aUb);
//CARGANDOLE ELEMENTOS A AMBAS PILAS:
apilar(&a, 1);
apilar(&a, 2);
apilar(&a, 3);

apilar(&b, 2);
apilar(&b, 3);
apilar(&b, 5);
apilar(&b, 7);
//MOSTRANDO LAS PILAS CARGADAS:
printf("MOSTRANDO PILA A:");
mostrar(&a);
printf("\n");

printf("MOSTRANDO PILA B:");
mostrar(&b);
printf("\n");

//En el while mayor lo que estamos diciendo es hasta que b se quede sin datos vamos a hacer lo siguiente:
//hasta que pila de a no tenga datos vamos a comparar el tope de B con el tope de A y si son distintos
//lo vamos a apilar en aux y desapilar de a, si son iguales vamos a apilarlo en basura y desapilarlo de a.
//Para comparar el segundo elemento de B debemos desapilar el primer elemento y apilarlo en aux2
//para luego empezar nuevamente con la comparacion.
//El segundo while dentro del mayor lo que significa es que si aux tiene datos va a apilar en A y desapilar de aux.
// Porque lo que estaban en aux son los que son distintos de b. Por ende ahora lo que falta es unirlos.
//Que los unimos con los dos while fuera del mayor.

while(!pilavacia(&b)){
        while(!pilavacia(&a)){
            if((tope(&b)) != tope(&a)){
             apilar(&aux, desapilar(&a));
    }else{
        apilar(&basura, desapilar(&a));
    }
            }
       apilar(&aux2, desapilar(&b));
       while(!pilavacia(&aux)){
        apilar(&a, desapilar(&aux));
       }

    }
    while(!pilavacia(&a)){
        apilar(&aUb, desapilar(&a));
    }
    while(!pilavacia(&aux2)){
        apilar(&aUb, desapilar(&aux2));
    }

printf("MOSTRANDO AUB:");
mostrar(&aUb);

*/

/** 11.Intercalar dos pilas ordenadas en forma creciente (ORDENADA1 y ORDENADA2)
dejando el resultado en una pila también ordenada en forma creciente (ORDENADAFINAL). */
/*
Pila ordenada1, ordenada2, ordenadaXseleccion, ordenadaXseleccion2,aux, aux2, menor, menor2, ordenadaFinal1, aux3, ordenadaFinal, menor3;
inicpila(&ordenada1);
inicpila(&ordenada2);
inicpila(&ordenadaFinal1);
inicpila(&ordenadaFinal);
inicpila(&aux);
inicpila(&aux2);
inicpila(&aux3);
inicpila(&menor);
inicpila(&menor2);
inicpila(&menor3);
inicpila(&ordenadaXseleccion);
inicpila(&ordenadaXseleccion2);

int i;
srand(time(NULL));
//CARGANDO pila 1:
for(i=1; i<7;i++){
    apilar(&ordenada1, rand()%10+1);
}
//CARGANDO PILA 2:
for(i=1; i<7;i++){
    apilar(&ordenada2, rand()%15+1);
}
//MOSTRANDO PILA 1:
printf("MOSTRANDO PILA 1:");
mostrar(&ordenada1);
printf("\n");
//MOSTRANDO PILA2:
printf("MOSTRANDO PILA 2:");
mostrar(&ordenada2);
printf("\n");

//ORDENANDO PILA ORDENADA1:

while(!pilavacia(&ordenada1)){

    apilar((&menor), desapilar(&ordenada1));

    while(!pilavacia(&ordenada1)){

        if(tope(&menor) > tope(&ordenada1)){
            apilar(&aux, desapilar(&menor));
            apilar(&menor, desapilar(&ordenada1));

        }else{

            apilar(&aux, desapilar(&ordenada1));
        }
    }
    while(!pilavacia(&aux)){

    apilar(&ordenada1, desapilar(&aux));
}
apilar(&ordenadaXseleccion, desapilar(&menor));
}

printf("\n");
printf("MOSTRANDO LA PILA 1 ORDENADA X SELECCION: ");
mostrar(&ordenadaXseleccion);

//ORDENANDO PILA ORDENADA2:

while(!pilavacia(&ordenada2)){

    apilar((&menor2), desapilar(&ordenada2));

    while(!pilavacia(&ordenada2)){

        if(tope(&menor2) > tope(&ordenada2)){
            apilar(&aux2, desapilar(&menor2));
            apilar(&menor2, desapilar(&ordenada2));

        }else{

            apilar(&aux2, desapilar(&ordenada2));
        }
    }
    while(!pilavacia(&aux2)){

    apilar(&ordenada2, desapilar(&aux2));
}
apilar(&ordenadaXseleccion2, desapilar(&menor2));
}

printf("\n");
printf("MOSTRANDO LA PILA 2 ORDENADA X SELECCION: ");
mostrar(&ordenadaXseleccion2);



// YA ESTAN LAS PILAS ORDENADAS POR SELECCION
//UNIENDO LAS DOS PILAS A UNA Y ORDENARLA:
while((!pilavacia(&ordenadaXseleccion)) && !pilavacia(&ordenadaXseleccion2)){
    apilar(&ordenadaFinal1, desapilar(&ordenadaXseleccion));
    apilar(&ordenadaFinal1, desapilar(&ordenadaXseleccion2));
}
printf("Mostrando la pila ORDENADA FINAL con las dos juntas: \n");
mostrar(&ordenadaFinal1);

//ORDENANDO LAS DOS PILAS:
printf("ORDENANDO LAS DOS PILAS JUNTAS.... \n");
printf("\n");

while(!pilavacia(&ordenadaFinal1)){

    apilar((&menor3), desapilar(&ordenadaFinal1));

    while(!pilavacia(&ordenadaFinal1)){

        if(tope(&menor3) > tope(&ordenadaFinal1)){
            apilar(&aux3, desapilar(&menor3));
            apilar(&menor3, desapilar(&ordenadaFinal1));

        }else{

            apilar(&aux3, desapilar(&ordenadaFinal1));
        }
    }
    while(!pilavacia(&aux3)){

    apilar(&ordenadaFinal1, desapilar(&aux3));
}
apilar(&ordenadaFinal, desapilar(&menor3));
}
printf("MOSTRANDO LAS DOS PILAS JUNTAS EN CRECIENTE: ");
mostrar(&ordenadaFinal);

*/

/** 12.Dada la pila ORIGEN ordenarla en forma ascendente por método de inserción dejando
el resultado en la pila ORIGEN. Para este ejercicio usar lo aprendido para el ejercicio 5. */

/*
Pila origen, aux, menor, dato, ordenada;
inicpila(&origen);
inicpila(&aux);
inicpila(&menor);
inicpila(&dato);
inicpila(&ordenada);


char eleccion;
do { //Ingresarle elementos a una pila.
    leer(&origen);
    printf("Ingrese s para continuar \n");
    fflush(stdin);
    scanf("%c", &eleccion);
    printf("\n");
} while(eleccion == 's');

printf("Mostrando pila ORIGEN cargada: ");
mostrar(&origen);
printf("\n");

//ORDENAMIENTO POR SELECCION ALGORITMO
while(!pilavacia(&origen)) {
    apilar(&menor, desapilar(&origen));

while(!pilavacia(&origen)) {
    if(tope(&menor) > tope(&origen)) {
        apilar(&aux, desapilar(&menor));
        apilar(&menor, desapilar(&origen));
    }
    else {
        apilar(&aux, desapilar(&origen));
    }
    }
    while(!pilavacia(&aux)) {
    apilar(&origen, desapilar(&aux));
    }
    apilar(&ordenada, desapilar(&menor));
}
printf("Mostrando la pila ORIGEN ORDENADA: ");
mostrar(&ordenada);

//ORDENAMIENTO POR INSERCCION ALGORITMO:
printf("Ingrese el dato a insertar en la pila: ");
leer(&dato);
printf("\n");

printf("Mostrando el dato a insertar: ");
mostrar(&dato);
printf("\n");

while(!pilavacia(&ordenada) && tope(&ordenada)>tope(&dato)){
        apilar(&aux, desapilar(&ordenada));
    }

    apilar(&ordenada, desapilar(&dato));

    while(!pilavacia(&aux)){
        apilar(&ordenada, desapilar(&aux));
    }

    while(!pilavacia(&ordenada)){
        apilar(&aux, desapilar(&ordenada));
    }
     while(!pilavacia(&aux)){
        apilar(&origen, desapilar(&aux));
    }
printf("Mostrando el dato ya insertado en la pila ORIGEN: ");
mostrar(&origen);
printf("\n");

*/

/**
Suponer un juego de cartas en el que en cada mano se reparten dos cartas por jugador.
Un jugador gana la mano cuando la suma de sus cartas es mayor que las del contrario y
al hacerlo coloca todas las cartas (las de él y las de su rival) en su pila de puntos.
En caso de empate (y para simplificar) siempre gana el jugador1. Simular la ejecución del juego de tal
manera que dada una pila MAZO (con un número de elementos múltiplo de cuatro) distribuya
las cartas en las pilas PUNTOSJUG1 y PUNTOSJUG2 como si estos hubieran jugado.
Utilizar las pilas auxiliares que crea conveniente.
*/

Pila jugador1, jugador2, puntos_Jugador1, puntos_Jugador2, mazo, aux, aux2;
inicpila(&jugador1);
inicpila(&jugador2);
inicpila(&aux);
inicpila(&aux2);
inicpila(&puntos_Jugador1);
inicpila(&puntos_Jugador2);
inicpila(&mazo); //multiplo de 4
int i, suma, suma2, sumaDeLosDos;
srand(time(NULL));
//CARGANDO MASO
for(i=0;i<4;i++){
    apilar(&mazo, rand()%20+1);
}
printf("\n");
printf("REPARTIENDO CARTAS A AMBOS JUGADORES.... \n");
printf("\n");
while(!pilavacia(&mazo)){
    apilar(&jugador1, desapilar(&mazo));
    apilar(&aux, desapilar(&mazo));
//-----------------------
    apilar(&jugador2, desapilar(&mazo));
    apilar(&aux2, desapilar(&mazo));
}

//SUMANDO LOS VALORES DE LAS CARTAS DE JUGADOR 1:
suma = (tope(&jugador1) + tope(&aux));
//SUMANDO LOS VALORES DE LAS CARTAS DE JUGADOR 2:
suma2 = (tope(&jugador2) + tope(&aux2));

printf("SUMANDO LOS VALORES DE LAS CARTAS DE JUGADOR 1: \n");
printf("La suma de las cartas del jugador 1 es: %i \n", suma);
printf("\n");
printf("SUMANDO LOS VALORES DE LAS CARTAS DE JUGADOR 2: \n");
printf("La suma de las cartas de jugador 2 es: %i \n", suma2);
printf("\n");

if(suma > suma2){
    printf("GANADOR EL JUGADOR 1 \n");
    sumaDeLosDos = suma + suma2;
    apilar(&puntos_Jugador1, sumaDeLosDos);

}else{
    printf("GANADOR EL JUGADOR 2 \n");
    sumaDeLosDos = suma + suma2;
    apilar(&puntos_Jugador2, sumaDeLosDos);

}
printf("\n");

if(tope(&puntos_Jugador1) > tope(&puntos_Jugador2)){
    printf("Puntos del Jugador 2: \n");
    mostrar(&puntos_Jugador2);
}else{
   printf("Puntos del Jugador 1: \n");
   mostrar(&puntos_Jugador1);
}





}














