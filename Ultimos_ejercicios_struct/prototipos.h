#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

int menu();
void ejercicio8();
void ejercicio9();
void ejercicio10();
struct Impuesto;
struct Pago;
void inicia_Impuesto(Impuesto *, int);

struct Impuesto
{
    int anio;
    int Bimestre;
    float importe;
};

struct Pago
{
    int Nro_contrib;
    int anio;
    int Bimestre;
};


#endif // PROTOTIPOS_H_INCLUDED
