#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"
#include "tela.h"
#include "cursor.h"

/*float calcularSalarioBruto(float salarioBase, float resultadoComissao);
float calcularComissao(float totalVendas);
float calcularBonus(float totalVendas);
float calcularINSS(float resultadoSalarioBruto);
float calcularIRPF(float resultadoSalarioBruto);
float calcularSalarioFamilia(int totalDependentes, float resultadoSalarioBruto);
float calcularSalarioLiquido(float resultadoSalarioBruto, float resultadoBonus, float resultadoINSS, float resultadoIRPF, float resultadoSalarioFamilia);
void telaLogin(char usuario, char senha, char verificarUser, char verificarSenha,  char ch, int i);*/

int main()
{

    char verificarUser[] = "admin";
    char usuario[5+1];
    char verificarSenha[] = "12345";
    char senha[5+1];
    char ch;
    int i = 0;
    int tentativas;

    //telaLogin(usuario, senha, verificarUser, verificarSenha, ch, i);

    do {
        system("cls");
        memset(senha, 0, sizeof(senha));
        memset(usuario, 0, sizeof(usuario));
        ch = ' ';
        i = 0;
        //usuario[0] = '\0';
        //senha[0] = '\0';
        printf("Usuario: ");
        scanf("%s", usuario);
        printf("Senha: ");
        printf("");
        while((ch = getch()) != 13 ){
            if(ch != 8){
                putchar('*');
                senha[i] = ch;
                i++;

            }else if(i >= 1){

                putchar('\b');
                putchar('\0');
                putchar('\b');
                i--;
                senha[i] = ' ';

            }

        }

    }while((strcmp(usuario, verificarUser) != 0) || (strcmp(senha, verificarSenha) != 0));

    system("cls");
    int alternativa = menu();


    while (alternativa != 3) {
        if(alternativa == 1){

            system("cls");

            char primeiroNomeFuncionario[20];
            char sobrenomeFuncionario[20];
            char mes[20];
            int ano;
            float salarioBase;
            float totalVendas;
            int totalDependentes;
            float comissao;



            printf("Primeiro nome do funcionario: ");
            scanf("%s", &primeiroNomeFuncionario);
            printf("Sobrenome do funcionario: ");
            scanf("%s", &sobrenomeFuncionario);
            printf("Mes referencia: ");
            scanf("%s", &mes);
            printf("Ano referencia: ");
            scanf("%d", &ano);
            printf("Valor do salario base: ");
            scanf("%f", &salarioBase);
            printf("Total de vendas: ");
            scanf("%f", &totalVendas);
            printf("Numero de dependentes: ");
            scanf("%d", &totalDependentes);

            float resultadoComissao = calcularComissao(totalVendas);
            float resultadoSalarioBruto = calcularSalarioBruto(salarioBase, resultadoComissao);
            float resultadoBonus = calcularBonus(totalVendas);
            float resultadoSalarioFamilia = calcularSalarioFamilia(totalDependentes, resultadoSalarioBruto);
            float resultadoINSS = calcularINSS(resultadoSalarioBruto);
            float resultadoIRPF = calcularIRPF(resultadoSalarioBruto);
            float resultadoSalarioLiquido = calcularSalarioLiquido(resultadoSalarioBruto, resultadoBonus, resultadoINSS, resultadoIRPF, resultadoSalarioFamilia);

            system("cls");

            telaBaseLinhaDupla(12, 4, 47, 19);
            linhaDivisoria(12, 10, 47);
            linhaDivisoria(12, 13, 47);
            linhaDivisoria(12, 16, 47);
            linhaDivisoria(12, 19, 47);
            linhaDivisoria(12, 21, 47);
            linhaHorizontal(13, 4, 61);
            linhaHorizontal(13, 10, 61);
            linhaHorizontal(13, 13, 61);
            linhaHorizontal(13, 16, 61);
            linhaHorizontal(13, 19, 61);
            linhaHorizontal(13, 21, 61);
            linhaHorizontal(13, 23, 61);

            gotoxy(0,4);

            printf("\n\t\tF O L H A  D E  P A G A M E N T O\n");
            printf("\t\t\t%s / %d", mes, ano);

            printf("\n\t\tNome...............: %s %s\n", primeiroNomeFuncionario, sobrenomeFuncionario);
            printf("\t\tSalario base.......: R$%.2f\n", salarioBase);
            printf("\t\tTotal de vendas....: R$%.2f\n", totalVendas);

            printf("\n");

            printf("\t\tComissao...........: R$%.2f\n", resultadoComissao);
            printf("\t\tSalario bruto......: R$%.2f\n", resultadoSalarioBruto);

            printf("\n");

            printf("\t\tBonus..............: R$%.2f\n", resultadoBonus);
            printf("\t\tSalario familia....: R$%.2f\n", resultadoSalarioFamilia);

            printf("\n");

            printf("\t\tIRPF...............: R$%.2f\n", resultadoIRPF);
            printf("\t\tINSS...............: R$%.2f\n", resultadoINSS);

            printf("\n");

            printf("\t\tSalario liquido....: R$%.2f\n", resultadoSalarioLiquido);

            printf("\n");

            printf("\t\tObservaçoes: Numero de dependentes: %d\n", totalDependentes);

            printf("\n");
            printf("\n");

            alternativa = menu();

        }else if(alternativa == 2) {
        do {
            system("cls");
            memset(senha, 0, sizeof(senha));
            memset(usuario, 0, sizeof(usuario));
            ch = ' ';
            i = 0;
            //usuario[0] = '\0';
            //senha[0] = '\0';
            printf("Usuario: ");
            scanf("%s", usuario);
            printf("Senha: ");
            printf("");
            while((ch = getch()) != 13 ){
                if(ch != 8){
                    putchar('*');
                    senha[i] = ch;
                    i++;

                }else if(i >= 1){

                    putchar('\b');
                    putchar('\0');
                    putchar('\b');
                    i--;
                    senha[i] = ' ';

                }

            }

        }while((strcmp(usuario, verificarUser) != 0) || (strcmp(senha, verificarSenha) != 0));
            system("cls");
            alternativa = menu();
        }
    }
    return 0;

}
