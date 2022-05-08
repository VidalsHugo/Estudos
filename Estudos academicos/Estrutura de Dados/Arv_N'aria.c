#include <stdio.h>
#include <stdlib.h>

struct arvvar{

 char info; 
 struct arvvar *prim;  
 struct arvvar *prox;
}; typedef struct arvvar ArvVar; 

ArvVar* arvv_cria (char c){ 

 ArvVar *a =(ArvVar *) malloc(sizeof(ArvVar)); 
 a->info = c; 
 a->prim = NULL; 
 a->prox = NULL; 
 return a; 
} 

void arvv_insere (ArvVar* a, ArvVar* sa){ 
 sa->prox = a->prim; 
 a->prim = sa; 
} 

void arvv_imprime (ArvVar* a){ 
 ArvVar* p; 

 printf("<%c\n",a->info); 
 for (p=a->prim; p!=NULL; p=p->prox) 
 arvv_imprime(p);
 printf(">"); 
} 

int arvv_pertence (ArvVar* a, char c){ 

 ArvVar* p;

 if (a->info==c) 
 return 1; 
 else { 
 for (p=a->prim; p!=NULL; p=p->prox){ 

 if (arvv_pertence(p,c)) 
    return 1; 
    } 
 }
 return 0; 
}

void arvv_libera (ArvVar* a)
{ 
 ArvVar* p = a->prim; 
 while (p!=NULL){ 

 ArvVar* t = p->prox; 
 arvv_libera(p); 
 p = t; 

 } 
 free(a); 
}


int main(){

    ArvVar* arvv_cria (char c);
    void arvv_insere (ArvVar* a, ArvVar* sa); 
    void arvv_imprime (ArvVar* a); 
    
    int arvv_pertence (ArvVar* a, char c); 
    void arvv_libera (ArvVar* a);

    return 0;
}