
#include <stdlib.h>
#include <conio.h>
#include "inputCalculadora.h"

int main()
{
    int opcion;
    float operandoUno;
    float operandoDos;
    int flagOperandoUno;
    int flagOperandoDos;
    float suma;
    float resta;
    float division;
    float multiplicacion;
    double factorialUno;
    double factorialDos;

    //variables banderas para saber si ya se ingresaron los operandos
    flagOperandoUno = 0;
    flagOperandoDos = 0;

    do
    {
        printf("**CALCULADORA**\n\n");
        printf("1.Ingresar 1er operando (A=x)\n");
        printf("2.Ingresar 2do operando (B=y)\n");
        printf("3.calcular todas las operaciones\n");
        printf("  a.Calcular la suma de (A+B)\n");
        printf("  b.Calcular la resta (A-B)\n");
        printf("  c.Calcular la division (A/B)\n");
        printf("  d.Calcular la multiplicacion (A*B)\n");
        printf("  e.Calcular el factorial (A!)\n");
        printf("4.Informar resultados\n");
        printf("5.Salir\n\n");
        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);
        system("cls");
        switch(opcion)
        {
            case 1:
                printf("Ingrese primer operando: ");
                scanf("%f",&operandoUno);
                flagOperandoUno = 1;
                system("cls");
            break;
            case 2:
                //en caso de haberse ingresadi el primer operando permitira el ingreso del segundo
                if(flagOperandoUno==1)
                {
                    printf("Ingrese segundo operando: ");
                    scanf("%f",&operandoDos);
                    flagOperandoDos = 1;
                    system("cls");
                }
                else
                {
                    printf("Falta ingresar el primer operando...\n\nEnter para seguir");
                    getch();
                    system("cls");
                }
            break;
            case 3:
                if(flagOperandoUno ==1 && flagOperandoDos == 1)
                {
                    //llamadas de las funciones de las operaciones
                    suma =  CalcularSuma(operandoUno, operandoDos);
                    resta = CalcularResta(operandoUno, operandoDos);
                    division = CalcularDivision(operandoUno, operandoDos);
                    multiplicacion = CalcularMultiplicacion(operandoUno, operandoDos);
                    factorialUno = CalcularFactorialUno(operandoUno);
                    factorialDos = CalcularFactorialDos(operandoDos);
                    printf("...Las operaciones se realizaron exitosamente\n\nEnter para seguir");
                    getch();
                    system("cls");
                }
                else
                {   //en caso de no haber ingresado ambos operandos
                    printf("Aun no ingreso los operandos, debe ingresarlos\n\nEnter para seguir");
                    getch();
                    system("cls");
                }
            break;
            case 4:
                if(flagOperandoUno == 1 && flagOperandoDos == 1)
                {
                    printf("**Resultados**\n\n");
                    printf("El resultado de %.2f + %.2f es: %.2f\n", operandoUno, operandoDos, suma);
                    printf("El resultado de %.2f - %.2f es: %.2f\n", operandoUno, operandoDos, resta);
                    if(operandoDos == 0)
                    {
                        printf("No es posible dividir por 0\n");
                    }
                    else
                    {
                        printf("El resultado de %.2f / %.2f es: %.2f\n", operandoUno, operandoDos, division);
                    }
                    printf("El resultado de %.2f * %.2f es: %.2f\n", operandoUno, operandoDos, multiplicacion);

                    //verifica si es un entero y si es positivo
                    if(VerificarTipoUno(operandoUno)==1 && operandoUno >= 0)
                    {
                        printf("El factorial de A es: %.2f\n", factorialUno);
                    }
                    else
                    {
                        printf("No se puede sacar factorial de numeros negativos y decimales\n");
                    }
                    //verifica si es un entero y si es positivo
                    if(VerificarTipoDos(operandoDos)==1 && operandoDos >= 0)
                    {
                        printf("El factorial de B es: %.2f", factorialDos);
                    }
                    else
                    {
                        printf("No se puede sacar factorial de numeros negativos y decimales\n");
                    }
                    // vuelven a 0 por  si quiere volver a cargar otros operandos
                    flagOperandoUno = 0;
                    flagOperandoDos = 0;
                    getch();
                    system("cls");
                }
                else
                {
                    printf("Faltan ingresar operandos..\n\nEnter para seguir");
                    getch();
                    system("cls");
                }
            break;
            case 5:
                printf("Adios..\n");
            break;
        }
    }
    while(opcion!=5);


    return 0;
}
