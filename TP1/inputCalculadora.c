
#include "inputCalculadora.h"

//desarrollo de las funciones
float CalcularSuma(float UnNumero, float OtroNumero)
{
    float suma;

    suma = UnNumero + OtroNumero;

    return suma;
}
float CalcularResta(float unNumero, float otroNumero)
{
    float resta;

    resta = unNumero - otroNumero;

    return resta;
}
float CalcularDivision(float unNumero, float otroNumero)
{
    float division;

    division = unNumero / otroNumero;

    return division;
}
float CalcularMultiplicacion(float unNumero, float otroNumero)
{
    float multiplicacion;

    multiplicacion = unNumero * otroNumero;

    return multiplicacion;
}
double CalcularFactorialUno(float numeroUno)
{
    double factorialUno;
    int i;

    factorialUno = 1;

    if(numeroUno==0)
    {
        factorialUno = 1;
    }
    else
    {
        for(i=1; i<=numeroUno; i++)
        {
            factorialUno *= i;
        }
    }
    return factorialUno;
}
double CalcularFactorialDos(float numeroDos)
{
    double factorialDos;
    int i;

    factorialDos = 1;

    if(numeroDos==0)
    {
        factorialDos = 1;
    }
    else
    {
        for(i=1; i<=numeroDos; i++)
        {
            factorialDos *= i;
        }
    }
    return factorialDos;
}
float VerificarTipoUno(float numeroUno)
{
    int valido;
    int auxiliarEntero;

    valido = 0;

    auxiliarEntero = numeroUno;

    if(numeroUno - auxiliarEntero == 0)
    {
        valido = 1;
    }
    return valido;
}
//funcion para determinar si un numero es entero
float VerificarTipoDos(float numeroDos)
{
    int valido;
    int auxiliarEntero;

    valido = 0;

    auxiliarEntero = numeroDos;

    if(numeroDos - auxiliarEntero == 0)
    {
        valido = 1;
    }
    return valido;
}



