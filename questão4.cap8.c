#include <stdio.h>


struct Ponto {
    float x;
    float y;
};


struct Retangulo {
    struct Ponto superiorEsquerdo;
    struct Ponto inferiorDireito;
};


float valorAbsoluto(float num) {
    return (num < 0) ? -num : num;
}


float raizQuadrada(float num) {
    if (num < 0) return -1;  

    float precisao = 0.00001;  
    float estimativa = num;    

    while (1) {
        float novaEstimativa = 0.5 * (estimativa + (num / estimativa));
        if (valorAbsoluto(novaEstimativa - estimativa) < precisao) break;
        estimativa = novaEstimativa;
    }
    
    return estimativa;
}


float calcularArea(struct Retangulo ret) {
    float largura = ret.inferiorDireito.x - ret.superiorEsquerdo.x;
    float altura = ret.superiorEsquerdo.y - ret.inferiorDireito.y;
    return largura * altura;
}


float calcularDiagonal(struct Retangulo ret) {
    float largura = ret.inferiorDireito.x - ret.superiorEsquerdo.x;
    float altura = ret.superiorEsquerdo.y - ret.inferiorDireito.y;
    return raizQuadrada(largura * largura + altura * altura);
}


float calcularPerimetro(struct Retangulo ret) {
    float largura = ret.inferiorDireito.x - ret.superiorEsquerdo.x;
    float altura = ret.superiorEsquerdo.y - ret.inferiorDireito.y;
    return 2 * (largura + altura);
}

int main() {
    struct Retangulo ret;


    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%f %f", &ret.superiorEsquerdo.x, &ret.superiorEsquerdo.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &ret.inferiorDireito.x, &ret.inferiorDireito.y);

   
    float area = calcularArea(ret);
    float diagonal = calcularDiagonal(ret);
    float perimetro = calcularPerimetro(ret);

   
    printf("Área do retângulo: %.2f\n", area);
    printf("Comprimento da diagonal: %.2f\n", diagonal);
    printf("Perímetro do retângulo: %.2f\n", perimetro);

    return 0;
}
