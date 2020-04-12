#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int menu()
{
    cls();
    cout<<"--------------------------------------------"<<endl;
    cout<<"*----------- 8  - Ejercicio 8°  ------------"<<endl;
    cout<<"*----------- 9  - Ejercicio 9°  ------------"<<endl;
    cout<<"*----------- 10 - Ejercicio 10° ------------"<<endl;
    cout<<"*----------- 0  -     Salir     ------------"<<endl;
    cout<<"*-------------------------------------------"<<endl<<endl;

    cout<<"Selecciones una opción del menú: ";
    int op;
    cin>>op;
    anykey();
return op;
}

void inicia_Impuesto(Impuesto *Imp, int tam)
{
    int anio=2005;
    float importe=10;
    for(int i=0;i<tam/6;i++)
    {
        for(int j=0;j<6;j++)
        {
            Imp[(i*tam/6)+i+j].anio=anio+i;
            Imp[(i*tam/6)+i+j].Bimestre=j+1;
            Imp[(i*tam/6)+i+j].importe=importe+i;
        }
    }
}







#endif // FUNCIONES_H_INCLUDED
