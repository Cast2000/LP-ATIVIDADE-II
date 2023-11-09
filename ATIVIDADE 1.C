#include <stdio.h>
#include <stdlib.h>

Int main()
{

    Int temperatura;

    Printf(“Jarvis qual temperatura externa?:”);
    Scanf(“%d”, &temperatura);

System(“cls || clear”);

    If (temperatura > 25)
    {
        Printf(“Javis: o ceu esta ensolarado senhor”);
    }
    Else if (temperatura < 15)
    {
        Printf(“Javis: o ceu esta chuvoso”);
    }
   Else if (temperatura > 15 || temperatura < 25 )
   {
      Printf(“Javis: o ceu esta nublado”);
   }
   
    Return 0;
}