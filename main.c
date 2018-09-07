/* This program calculates the average of the numbers that the user enters.
 *The program stops receiving numbers when 0 is entered.
 *
 * Autor:Karla Alexandra Hdz Aviles
 * Fecha:06/09/2018
 * Correo: A01411843@itesm.mx
 *
 * */

#include <stdio.h>

int main() {
    //declaration of variables
    double average = 0;
    float num;
    float sum = - 1;

    do { printf("Enter a number:\n");
    scanf("%f", &num);
    average += num;
    sum += 1;
    }

    //If the user write 0 the program stop receiving numbers and calculates the average
    while (num != 0);

    //the average is the sum of the numbers divided by the amount of sum numbers
    average /= sum;

    printf("Average =%lf", average);

    return 0;

}