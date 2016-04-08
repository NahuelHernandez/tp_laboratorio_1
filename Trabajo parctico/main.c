#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0,factoriza=0;
    float num1=0,num2=0;
    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%f)\n",num1);
        printf("2- Ingresar 2do operando (B=%f)\n",num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                printf("\n ingrese su numero por favor\n");
                scanf("%f",&num1);
                system("cls");
                break;
            case 2:
                system("cls");
                printf("\n ingrese su numero por favor\n");
                scanf("%f",&num2);
                system("cls");
                break;
            case 3:
                system("cls");
                sumar(num1,num2);
                break;
            case 4:
                system("cls");
                restar(num1,num2);
                break;
            case 5:
               system("cls");
               while (num2==0)
                {
                printf("ERROR, no se puede dividir por 0... por favor reingrese el 2do operando\n");
               scanf("%f",&num2);
               }
                dividir(num1,num2);
                break;
            case 6:
                system("cls");
                multiplicar(num1,num2);
                break;
            case 7:
                system("cls");
                factoriza=factorial(num1);
                printf("\nEl resultado de factoriar es %d\n\n",factoriza);
                break;
            case 8:
                 system("cls");
                sumar(num1,num2);
                restar(num1,num2);
                multiplicar(num1,num2);
                factoriza=factorial(num1);
                printf("\nEl resultado de factoriar es %d\n\n",factoriza);
                  while (num2==0)
                {
                printf("ERROR, no se puede dividir por 0... por favor reingrese el 2do operando\n");
               scanf("%f",&num2);
               }
                dividir(num1,num2);

                break;
            case 9:
                system("cls");
                printf("\t\t\t Gracias por usar mi programa\n\n\n \t\t\t ...:::Nahuel Hernandez:::...\n\n\n\n");
                seguir = 'n';
                break;
        }

}
system("pause");
return 0;
}
