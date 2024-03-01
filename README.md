# PowerPuff-Girls-Hause-in-OpenGL
Project carried out for the Introduction to Computer Graphics course at UFPB.

# Menu

- F1 -> chuva
- 1 -> dia
- 2 -> noite
- ESC -> sair

Obs.: a função que deveria ser com 'CONTROL + ESPAÇO' não funciona pois a máquina virtual n queconhece o CONTROL

# Descrições dos Arquivos

## formas.cpp

Funções para desenhar círculos, quadrados, triângulos, linhas simples e loop de linhas.

## colors.cpp

Contém um vetor com todas as cores usadas.

## casa.cpp

Controi a casa em si. Tem funções para contruir cada quadrante (direita, esquerda e meio), onde dentro delas tem funções que desenham coisas como janelas e porta. As variaveis auxiliares SEMPRE recebem números que são as cores referentes no vetor.

## outside.cpp

Desenha todas as coisas que são externas a casa: muros, flores, arbusto e grama.

## motion.cpp

Desenha tudo aquilo que vai ter movimentação (nuvens, chuva).

# Compilar

1. g++ -o teste main.cpp src/casa.cpp src/colors.cpp src/formas.cpp src/outside.cpp src/motion.cpp -I include -lglut -lGLU -lGL -lm
2. ./teste

ou 

1. make
2. ./teste
