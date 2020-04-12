#include <iostream>
#include <clocale>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <rlutil.h>
using namespace std;
using namespace rlutil;
#include "prototipos.h"
#include "funciones.h"
#include "ejercicios.h"

int main()
{
setlocale(LC_ALL,"Spanish");
int op;
    do{
        op = menu();
        switch(op)
        {
        case 8:
            {
                ejercicio8();
            }break;
        case 9:
            {
                ejercicio9();
            }break;
        case 10:
            {
                ejercicio10();
            }break;
        case 0:{
            }break;
        default:
            {
                cout<<"Opción mal ingresada, intente nuevamente."<<endl;
            }
        }
        anykey();
     }while(op!=0);
return 0;
}
