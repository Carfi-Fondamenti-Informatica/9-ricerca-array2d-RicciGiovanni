#include <iostream>
#include "lib.h"
using namespace std;

int main()
{
   char a[10][20], b[1][20];
   int i,posizione;
   for(i=0;i<10;i++)
   {
       cin>>a[i];
   }
   cin>>b[0];
   if(ricerca(a,b,posizione))
   {
       cout<<posizione<<endl;
   }
   else
   {
       cout<<"non presente"<<endl;
   }
   return 0;
}

