#include <stdio.h>


struct Aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};


float calcularMedia(struct Aluno aluno) {
    return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;
}

int main() {
    struct Aluno alunos[5];
    int i, alunoComMaiorMedia = 0;
    float maiorMedia = 0.0;

    
    for (i = 0; i < 5; i++) {
        printf("Digite o número de matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]%*c", alunos[i].nome);  

        printf("Digite a nota 1 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Digite a nota 2 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        printf("Digite a nota 3 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota3);

        
        float media = calcularMedia(alunos[i]);

        
        if (media > maiorMedia) {
            maiorMedia = media;
            alunoComMaiorMedia = i;
        }
    }

    
    printf("\nAluno com a maior média:\n");
    printf("Nome: %s\n", alunos[alunoComMaiorMedia].nome);
    printf("Nota 1: %.2f\n", alunos[alunoComMaiorMedia].nota1);
    printf("Nota 2: %.2f\n", alunos[alunoComMaiorMedia].nota2);
    printf("Nota 3: %.2f\n", alunos[alunoComMaiorMedia].nota3);

    return 0;
}
