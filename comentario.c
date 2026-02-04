#include <stdio.h>

// O comando #include <stdio.h> serve para incluir a biblioteca padrão
// de entrada e saída do C, permitindo usar funções como printf.

int main(void)
{
    // O programa começa a ser executado na função main.

    printf("Hello, World!\n");
    
    // Se remover o return 0, o programa ainda funciona,
    // mas o sistema operacional não recebe o aviso
    // de que o programa terminou corretamente.

    // O \n serve para pular uma linha no final do texto.
    // Se remover o \n, o texto será exibido sem quebrar a linha.

    return 0;
}
