#include <stdio.h>
#include <stdlib.h>

struct arv{

 char info; 
 struct arv* esq; 
 struct arv* dir; 

}; typedef struct arv Arv;

Arv* arv_criavazia (void){ 
 return NULL; 
}

Arv* arv_cria (char c, Arv* sae, Arv* sad){ 

 Arv* p=(Arv*)malloc(sizeof(Arv)); 

 p->info = c; 
 p->esq = sae; 
 p->dir = sad; 

 return p; 
} 

Arv* arv_libera (Arv* a){ 
 if (!arv_vazia(a)){ 
 arv_libera(a->esq);
 arv_libera(a->dir);
 free(a);
 } 
 return NULL; 
}

int arv_vazia (Arv* a){ 
 return a==NULL; 
}

int arv_pertence (Arv* a, char c){ 
 if (arv_vazia(a)) 
 return 0;
 else 
 return a->info==c || 
 arv_pertence(a->esq,c) || 
 arv_pertence(a->dir,c); 
} 

void arv_imprime (Arv* a)
{ 
 printf("<"); 
 if (!arv_vazia(a)){ 
 printf("%c ", a->info);
 arv_imprime(a->esq); 
 arv_imprime(a->dir);
 } 
 printf(">");

}  

int main(){

Arv* a1 = arv_cria('d',arv_criavazia(),arv_criavazia()); 
Arv* a2 = arv_cria('b',arv_criavazia(),a1); 
Arv* a3 = arv_cria('e',arv_criavazia(),arv_criavazia()); 
Arv* a4 = arv_cria('f',arv_criavazia(),arv_criavazia()); 
Arv* a5 = arv_cria('c',a3,a4); 
Arv* a = arv_cria('a',a2,a5 );

arv_imprime(a);

    return 0;
}