#include <stdio.h>
#include <stdlib.h>
#include "FilaDin.h"

int main()
{
    Fila *fi;
    fi = cria_Fila();

    libera_Fila(fi);
    return 0;
}
