#include<cstring>
#include "lib.h"

bool ricerca(char alfabeto[10][20], char parola[1][20], int& posizione)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(strcmp(alfabeto[i], parola[0]) == 0)
        {
            posizione=i;
            return true;
        }
        }
    return false;

}
