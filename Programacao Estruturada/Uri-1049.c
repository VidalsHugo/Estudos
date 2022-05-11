#include <stdio.h>
 
int main() {
 
 char tipo01[21], tipo02[21], tipo03[21];

scanf("%s", &tipo01);
scanf("%s", &tipo02);
scanf("%s", &tipo03);
 
 if (strcmp(tipo01, "vertebrado") ==0){
 	
     if(strcmp (tipo02, "ave") == 0){
         if(strcmp(tipo03, "carnivoro") == 0){
             printf("aguia\n");
         }
         else if(strcmp(tipo03, "onivoro") ==0){
             printf("pomba\n");
         }
     }
     else if(strcmp(tipo02, "mamifero") ==0){
         if(strcmp(tipo03, "onivoro") ==0){
             printf("homem\n");
         }
         else if(strcmp(tipo03, "herbivoro") ==0){
             printf("vaca\n");
         }
     }
 }
 else if (strcmp(tipo01, "invertebrado") ==0){
 	
     if(strcmp(tipo02, "inseto") ==0){
         if(strcmp(tipo03, "hematofago") ==0){
             printf("pulga\n");
         }
         else if(strcmp(tipo03, "herbivoro") ==0){
             printf("lagarta\n");
         }
     }
     else if(strcmp(tipo02, "anelideo") ==0){
         if(strcmp(tipo03, "hematofago") ==0){
             printf("sanguessuga\n");
         }
         else if(strcmp(tipo03, "onivoro") == 0){
             printf("minhoca\n");
         }
     }
 }
 
    return 0;
}
