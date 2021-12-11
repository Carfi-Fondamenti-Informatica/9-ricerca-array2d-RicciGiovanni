#include<cstring>
#include "lib.h"

bool ricerca(char a[10][20], char b[1][20], int& posizione)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(strcmp(a[i], (b[0])) == 0)
        {
            posizione=i;
            return true;
        }
        else
        {
            return false;
        }
        return 0;
    }

}
