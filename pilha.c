#include <cs50.h>
#include <stdio.h>

string sauda(string nome);

string sauda2(string nome);

string tchau(string nome);

int main(void)
{
    string nome1 = get_string("Qual seu nome? ");
    sauda(nome1);
}

string sauda(string nome)
{
    printf("Olá, %s!!\n", nome);
    sauda2(nome);
    printf("Preparando para dizer tchau...\n");
    tchau(nome);
    return 0;
}

string sauda2(string nome)
{
    printf("Como vai %s??\n", nome);
    return 0;
}

string tchau(string nome)
{
    printf("Ok, TCHAU %s!!\n", nome);
    return 0;
}