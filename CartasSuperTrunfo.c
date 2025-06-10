#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main () {
    

     char Estado1[20], Estado2[20], Codigo1[10], Codigo2[10], nomecidade1[20], nomecidade2[20];
     float area1, area2, PIB1, PIB2, densidade1, densidade2, PP1, PP2;
     int populacao1, populacao2, turistico1, turistico2;
     

     // inicio carta 1 
    
    printf("*** Vamos jogar super trunfo***\n\n");
    printf(" Para iniciar o joga, antes e necesserio escolhermos 2 cartas\n\n");
    printf( " ***Vamos comecar*** \n\n");


    printf("Incira os dados da primeira carta:\n\n"); 
    printf("Estado:"); 
    scanf("%s", Estado1);
     
    printf("Codigo de id da carta:"); 
    scanf("%s", Codigo1);

    printf("Nome da cidade:"); 
    scanf("%s", nomecidade1);

    printf("Area :");
    scanf("%f", & area1);

    printf("PIB :");
    scanf("%f", & PIB1);

    printf("Populacao :");
    scanf("%d", & populacao1);

    printf("Numero de pontos turisticos :");
    scanf("%d", & turistico1);
   
   // fim carta 1

    // inicio carta 2

    printf("\n\n Incira os dados da Segunda carta:\n\n"); 
    printf("Estado:"); 
    scanf("%s", Estado2);
     
    printf("Codigo de id da carta:"); 
    scanf("%s", Codigo2);

    printf("Nome da cidade:"); 
    scanf("%s", nomecidade2);

    printf("Area :");
    scanf("%f", & area2);

    printf("PIB :");
    scanf("%f", & PIB2);

    printf("Populacao :");
    scanf("%d", & populacao2);

    printf("Numero de pontos turisticos :");
    scanf("%d", & turistico2);
   
   // fim carta 2 
   
   // dados primeira carta 

    printf(" \n\n Primeira carta : \n");
    printf(" Estado : %s\n Codigo :%s\n Nome da cidade : %s\n",Estado1, Codigo1, nomecidade1);
    printf(" Area :%f\n PIB : %f\n",area1, PIB1);
    printf(" Populacao : %d\n Numero de pontos turisticos:%d\n",populacao1, turistico1);
    printf(" Densidade populacional: %.2f \n", densidade1 = populacao1 / area1);
    printf(" PIB per capita: %.2f \n\n", PP1 = (float) PIB1/populacao1);

   // dados segunda carta 
    
    printf(" Segunda carta : \n");
    printf(" Estado : %s\n Codigo :%s\n Nome da cidade : %s\n",Estado2, Codigo2, nomecidade2);
    printf(" Area :%f\n PIB : %f\n",area2, PIB2);
    printf(" Populacao : %d\n Numero de pontos turisticos:%d\n",populacao2, turistico2);
    printf(" Densidade populacional: %.2f \n", densidade2 = (float) populacao2 / area2);
    printf(" PIB per capita: %.2f \n", PP2 = (float) PIB2/populacao2);

    return 0;
}
