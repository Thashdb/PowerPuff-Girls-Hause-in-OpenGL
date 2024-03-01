#include "../include/colors.h"

std::vector<Cor> cores = {
    //basicas
    {0, 0, 0},              //0 preto
    {1.0f, 1.0f, 1.0f},     //1 branco


    //dia casa
    {0.74f, 0.21f, 0.3f},   //2 Vermelho porta
    {0.93f, 0.8f, 0.48f},   //3 macaneta
    {0.38f, 0.47f, 0.59f},  //4 janela
    {0.54f, 0.54f, 0.53f},  //5 escada 1
    {0.4f, 0.4f, 0.4f},     //6 escada 2
    {0.48f, 0.50f, 0.51f},  //7 contorno janela
    {0.49f, 0.49f, 0.47f},  //8 portao
    {0.27f, 0.27f, 0.27f},  //9 linhas portao
    {0.83f, 0.85f, 0.83f},  //10 cinza frente casa
    {0.88f, 0.85f, 0.8f},   //11 cinza lateral casa
    {0.78f, 0.79f, 0.75f},  //12 cinza garagem
    {1.0f, 0.8f, 1.0f},     //13 nuvens
    {0.8f, 0.9f, 1.0f},     //14 ceu
    {0.44f,  0.76f, 0.36},  //15 grama

    
    //noite casa
    {0.4f, 0.18f, 0.22f},   //16 porta
    {0.29f, 0.28f, 0.01f},  //17 macaneta
    {0.87f, 0.72f, 0.45f},  //18 janela
    {0.18f, 0.36f, 0.56f},  //19 escada1
    {0.42f, 0.53f, 0.68f},  //20 escada2
    // contorno janela
    {0.12f, 0.17f, 0.28f},  //21 portao
    //linhas portao
    {0.34f, 0.57f, 0.49f},  //22 frente lateral
    {0.06f, 0.25f, 0.34f},  //23 frente frente
    {0.25f, 0.3f, 0.39f},   //24 garagem
    {0, 0, 0.09f},          //25 ceu
    {0.14f, 0.15f, 0.22f},  //26 nuvens
    {0.1f, 0.17f, 0.08f},   //27 verde grama


    {0.3f, 0.3f, 0.3f},     //28 cinza ceu chuva
    {0.1, 0.15f, 0.2f},     //29 cinza nuvens chuva
    {0.54f, 0.01f, 0.1f},   //30 porta
    {0.73f, 0.6f, 0.28f},   //31 macaneta
    {0.18f, 0.37f, 0.49f},  //32 janela
    {0.34f, 0.34f, 0.33f},  //33 escada 1
    {0.2f, 0.2f, 0.2f},     //34 escada 2
    {0.48f, 0.50f, 0.51f},  //35 contorno janela
    {0.29f, 0.29f, 0.27f},  //36 portao
    {0.07f, 0.07f, 0.07f},  //37 linhas portao
    {0.63f, 0.65f, 0.63f},  //38 cinza frente casa
    {0.68f, 0.65f, 0.6f},   //39 cinza lateral casa
    {0.58f, 0.59f, 0.55f},  //40 garagem

    {1.0f, 0.01f, 0.13f},   //41 emergencia
    {0.61f, 0.84f, 1.0f},   //42 azul chuva

    //
    //flores
    //dia
    {1.0f, 0.49f, 0.15},    //43 girassol1
    {1.0f, 0.94f, 0},       //44 girassol2
    {0.32f, 0.21f, 0.15f},  //45 girassol3
    {0.05f, 0.3f, 0.13f},   //46 verde

    //dia
    {0.50f, 0.25f,  0.07f}, //47 girassol1
    {0.74f, 0.57f, 0},      //48 girassol2
                            // girassol3 -> preto
    {0, 0.5f, 0},           //49 verde

    //chuva
    {0.8f, 0.29f, 0},       //50 girassol1
    {0.8f, 0.74f, 0},       //51 girassol2
    {0.12f, 0.01f, 0},      //52 girassol3
    {0, 0.1f, 0},           //53 verde
    
    {1.0f, 0.68f, 0.87f},   //54 rosa dia
    {0.92f, 0.21f, 0.5f},   //55 rosa noite
    {0.8f, 0.48f, 0.67f},   //56 rosa chuva
};
