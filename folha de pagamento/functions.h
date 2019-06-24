#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

void telaLogin( char usuario, char senha, char verificarUser, char verificarSenha, char ch, int i){
    /*do {
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

    }while((strcmp(usuario, verificarUser) != 0) || (strcmp(senha, verificarSenha) != 0));*/

}

int menu (){

    int alternativa;

    printf("1 - Calcular novo Salario\n");
    printf("2 - Tela de bloqueio\n");
    printf("3 - Sair do programa\n");
    scanf("%i", &alternativa);

    return alternativa;
}

float calcularComissao(float totalVendas){

    float totalComissao;

    if (totalVendas >= 50000 ){

        totalComissao = totalVendas*0.02;

    }else if (totalVendas >= 100000){

        totalComissao = totalVendas*0.05;

    }else if (totalVendas >= 150000){

        totalComissao = totalVendas*0.07;

    }

    return totalComissao;
}

float calcularSalarioBruto(float salarioBase, float resultadoComissao){

    float salarioBruto;
    float comissao = resultadoComissao;

    salarioBruto = salarioBase + comissao;

    return salarioBruto;
}

float calcularBonus(float totalVendas){

    float bonus;

    if (totalVendas >= 100000){
        bonus = 1000;
    }else if (totalVendas < 100000){
        bonus -= 0;
    }

    return bonus;
}

float calcularINSS(float resultadoSalarioBruto){

    if (resultadoSalarioBruto <=  965.67){

        return resultadoSalarioBruto * 0.08;

    }

    if (resultadoSalarioBruto <= 1609.45){

        return resultadoSalarioBruto * 0.09;
    }

    if (resultadoSalarioBruto <= 3218.90){

        return resultadoSalarioBruto * 0.11;
    }

    if ( resultadoSalarioBruto > 3218.90){

        return 3218.9 * 0.11;
    }

}


float calcularIRPF(float resultadoSalarioBruto){

    float irpf;

    if (resultadoSalarioBruto <= 1434.59){

        irpf = 0;

    }else if (resultadoSalarioBruto >  1434.59 && resultadoSalarioBruto < 2150.00){

        irpf = (0.075*resultadoSalarioBruto) - 107.59;

    }else if (resultadoSalarioBruto > 2150.0 && resultadoSalarioBruto < 2866.70){

        irpf = (0.15*resultadoSalarioBruto) - 268.84;

    }else if (resultadoSalarioBruto > 2866.70 && resultadoSalarioBruto < 3582.00){

        irpf = (0.225*resultadoSalarioBruto) - 483.84;

    }else if (resultadoSalarioBruto > 3582.00){

        irpf = (0.275*resultadoSalarioBruto) - 662.94;

    }

    return irpf;
}

float calcularSalarioFamilia(int totalDependentes, float resultadoSalarioBruto){

    float salarioFamilia;

    if (resultadoSalarioBruto < 10000){

        salarioFamilia = 405.00 * totalDependentes;

    }else if(resultadoSalarioBruto > 10000 && resultadoSalarioBruto < 20000){

        salarioFamilia = 210.00 * totalDependentes;

    }

    return salarioFamilia;
}

float calcularSalarioLiquido(float resultadoSalarioBruto, float resultadoBonus, float resultadoINSS, float resultadoIRPF, float resultadoSalarioFamilia){

    float salarioLiquido = resultadoSalarioBruto - resultadoIRPF - resultadoINSS + resultadoBonus + resultadoSalarioFamilia;

    return salarioLiquido;
}


#endif // FUNCTIONS_H_INCLUDED
