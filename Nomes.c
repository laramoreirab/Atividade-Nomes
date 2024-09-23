#include <stdio.h>
#include <string.h>
#define Max_Nomes 10
#define Tam_Nome 50 // tamanho máximo dos nomes

int comecaComVogal(char *nome) {
    char vogais[] = "aeiouAEIOU";
    return strchr(vogais, nome[0]) != NULL;
}

int main() 
{
    char nomes[Max_Nomes][Tam_Nome]; // Array de 30 strings, cada uma com no máximo 50 caracteres
    int contador, act;
    int maiorTamnho=0, maiorNome=0;

    for (contador = 0; contador < Max_Nomes; contador++) {
        printf("Insira um nome: ");
        fgets(nomes[contador], sizeof(nomes), stdin);

    if (strlen(nomes[contador])>maiorTamnho){
        maiorTamnho = strlen(nomes[contador]);
        maiorNome = contador;}
    
    }

      printf("\nDigite o numero correspondente a acao desejada: \n");
      printf ("1 - para exibir todos os nomes \n");
      printf("2 - exibir o maior nome\n");
      printf("3 - exibe o primeiro nome de todos os nomes informados\n");
      printf("4 - exibir apenas os nomes que iniciam com vogal\n");
      printf("5 - sair\n");

        scanf("%d", &act);
        switch (act)
        {
        case 1:
            for (contador = 0; contador < Max_Nomes; contador++) {
                if (strcmp(nomes[contador], "0") != 0) {
                    printf("%s", nomes[contador]);
                }
            }
          break;
        case 2:
            printf("%s", nomes[maiorNome]);
            break;
        case 3:
            if (Max_Nomes>0)
            {
              printf(nomes[0]);
            }
            
            break;
         case 4: 
            for (contador=0; contador< Max_Nomes; contador++) {
                if (comecaComVogal(nomes[contador])) {
                    printf("%s\n", nomes[contador]);
                }
            } 
        default: printf("Nenhum nome inicia com vogal");
            break;
        case 5:
            printf("Saindo...");
            break;
        }
    return 0;    
}  