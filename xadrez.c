#include <stdio.h>

// Função para mover a Torre (usando for)
void moverTorre() {
    printf("Movimento da Torre (5 casas para a direita):\n");
    for(int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");
}

// Função para mover o Bispo (usando while)
void moverBispo() {
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int i = 0;
    while(i < 5) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");
}

// Função para mover a Rainha (usando do-while)
void moverRainha() {
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while(i < 8);
    printf("\n");
}

// Função para mover o Cavalo (usando loops aninhados)
void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");
    
    // Primeira parte do L: 2 casas para baixo
    for(int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    
    // Segunda parte do L: 1 casa para a esquerda
    int j = 0;
    while(j < 1) {
        printf("Esquerda\n");
        j++;
    }
    printf("\n");
}

// Função recursiva para mover a Torre
void moverTorreRecursivo(int casas) {
    if(casas <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorreRecursivo(casas - 1);
}

// Função recursiva para mover o Bispo
void moverBispoRecursivo(int casas) {
    if(casas <= 0) {
        return;
    }
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função recursiva para mover a Rainha
void moverRainhaRecursivo(int casas) {
    if(casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

// Função para mover o Cavalo com loops complexos
void moverCavaloComplexo() {
    printf("Movimento complexo do Cavalo (2 casas para cima e 1 para a direita):\n");
    
    int cima = 0, direita = 0;
    for(cima = 0; cima < 2; cima++) {
        printf("Cima\n");
        
        // Usando break para sair se já tivermos feito o movimento completo
        if(cima == 1 && direita == 1) {
            break;
        }
        
        // Loop interno para o movimento para a direita
        while(direita < 1) {
            printf("Direita\n");
            direita++;
            
            // Usando continue para pular o resto do loop se já tivermos feito o movimento
            if(direita >= 1) {
                continue;
            }
        }
    }
    printf("\n");
}

int main() {
    printf("=== SIMULADOR DE MOVIMENTOS DE XADREZ ===\n\n");
    
    // Nível Novato - movimentos básicos
    moverTorre();
    moverBispo();
    moverRainha();
    
    // Nível Aventureiro - movimento do cavalo
    moverCavalo();
    
    // Nível Mestre - movimentos com recursividade e loops complexos
    printf("=== MOVIMENTOS AVANÇADOS ===\n\n");
    
    printf("Torre com recursividade (5 casas para a direita):\n");
    moverTorreRecursivo(5);
    printf("\n");
    
    printf("Bispo com recursividade (5 casas na diagonal):\n");
    moverBispoRecursivo(5);
    printf("\n");
    
    printf("Rainha com recursividade (8 casas para a esquerda):\n");
    moverRainhaRecursivo(8);
    printf("\n");
    
    printf("Cavalo com loops complexos (2 casas para cima e 1 para a direita):\n");
    moverCavaloComplexo();
    
    printf("=== FIM DA SIMULAÇÃO ===\n");
    
    return 0;
}