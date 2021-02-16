#include <stdio.h>

int main(){
    //Suponha que as seguintes declarações tenham sido realizadas:
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;
    //Identifique quais dos seguintes comandos é válido ou inválido:
    aloha[2] = value;//valido
    scanf("%f", &aloha);//inválido
    aloha = "value";//invalido
    printf("%f", aloha);//invalido
    coisas[4][4] = aloha[3];//valido
    coisas[5] = aloha;//valido
    pf = value;//invalido
    pf = aloha;//valido
    return 0;
}
