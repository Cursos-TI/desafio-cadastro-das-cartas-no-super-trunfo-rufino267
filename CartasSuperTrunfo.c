#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa



int main () {
    

     char Estado1[20], Estado2[20], Codigo1[10], Codigo2[10], nomecidade1[20], nomecidade2[20];
     float area1, area2, PIB1, PIB2, densidade1, densidade2, PP1, PP2, SP1, SP2;
     int turistico1, turistico2, CP, CA, CPIB, CPT, CDP, CPP, CSP;
     unsigned long int populacao1, populacao2;
    
     // inicio carta 1 
    
    printf("*** Vamos jogar super trunfo***\n\n");
    printf(" Para iniciar o joga, antes e necesserio escolhermos 2 cartas\n\n");
    printf( " ***Vamos comecar*** \n\n");


    printf("Incira os dados da primeira carta:\n"); 
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

    printf("\n\n Incira os dados da Segunda carta:\n"); 
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


   // desnidade populacional e PIB per capita 

   densidade1 = populacao1 / area1;
   PP1 = (float) PIB1/populacao1;

   densidade2 = (float) populacao2 / area2;
   PP2 = (float) PIB2/populacao2;

   //super poder 

   SP1 = populacao1 + area1 + PIB1 + turistico1 + (1 / densidade1) + PP1;

   SP2 = populacao2 + area2 + PIB2 + turistico2 + (1 / densidade2) + PP2;

   // comparacao 

   CP = populacao1 > populacao2;

   CA = area1 > area2;
   
   CPIB = PIB1 > PIB2;

   CPT = turistico1 > turistico2;

   CDP = densidade1 < densidade2;

   CPP = PP1 > PP2;

   CSP = SP1 > SP2;

   // dados primeira carta 

    printf(" \n\n Primeira carta : \n");
    printf(" Estado : %s\n Codigo :%s\n Nome da cidade : %s\n",Estado1, Codigo1, nomecidade1);
    printf(" Area :%.2f\n PIB : %.2f\n",area1, PIB1);
    printf(" Populacao : %d\n Numero de pontos turisticos:%d\n",populacao1, turistico1);
    printf(" Densidade populacional: %.2f \n", densidade1);
    printf(" PIB per capita: %.2f \n", PP1);
    printf("Super poder e: %.2f\n\n", SP1);

   // dados segunda carta 
    
    printf(" Segunda carta : \n");
    printf(" Estado : %s\n Codigo :%s\n Nome da cidade : %s\n",Estado2, Codigo2, nomecidade2);
    printf(" Area :%f\n PIB : %f\n",area2, PIB2);
    printf(" Populacao : %d\n Numero de pontos turisticos:%d\n",populacao2, turistico2);
    printf(" Densidade populacional: %.2f \n", densidade2);
    printf(" PIB per capita: %.2f \n", PP2);
    printf("Super poder e: %.2f\n\n", SP2);

    printf("Agora vamos comparar as cartas\n\n\n");
    printf("Se ao final tivermos mais numeros 1 que 0 a carta 1 e a vencedora, agora se tivermos mais numeros 0 que 1 a carta 2 sera a vencedora\n\n");
    printf(" Populacao : %i\n Area : %i\n PIB : %i\n Pontos turisticos : %i\n Densidade populacional : %i\n PIB per capita : %i\n Super poder :%i",CP, CA, CPIB, CPT, CDP, CPP,CSP);
    
    return 0;
}
