#include <stdio.h>


struct Pessoa {
    char nome[100];
    int idade;
    char endereco[200];
};

int main() {
    
    struct Pessoa pessoa;

    
    printf("Digite o nome: ");
    scanf("%99s", pessoa.nome);  
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);  
    
    printf("Digite o endereço: ");
    scanf(" %[^\n]s", pessoa.endereco);  
    printf("\nDados da Pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereço: %s\n", pessoa.endereco);

    return 0;
}