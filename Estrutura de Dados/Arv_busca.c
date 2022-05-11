#include <stdio.h>
#include <stdlib.h>

struct arv{ 

 int info; 
 struct arv* esq; 
 struct arv* dir; 

}; typedef struct arv Arv;

Arv* abb_cria (void){ 
 return NULL; 
}

void abb_imprime (Arv* a){ 

 if (a != NULL){ 
    abb_imprime(a->esq); 
    printf("%d\n",a->info); 
    abb_imprime(a->dir); 
 } 
}

Arv* abb_busca (Arv* r, int v){ 

 if (r == NULL) 
    return NULL; 
 else if (r->info > v) 
    return abb_busca (r->esq, v); 
 else if (r->info < v) 
    return abb_busca (r->dir, v); 
 else return r; 
} 

Arv* abb_insere (Arv* a, int v){ 

 if (a==NULL) { 
    a = (Arv*)malloc(sizeof(Arv)); 
    a->info = v; 
    a->esq = a->dir = NULL; 
 } 
 else if (v < a->info) 
    a->esq = abb_insere(a->esq,v); 
 else
    a->dir = abb_insere(a->dir,v); 
 return a; 
}

Arv* abb_retira (Arv* r, int v){ 

 if (r == NULL) 
    return NULL; 
 else if (r->info > v) 
    r->esq = abb_retira(r->esq, v); 
 else if (r->info < v) 
    r->dir = abb_retira(r->dir, v); 
 else {
  
 if (r->esq == NULL && r->dir == NULL){ 
    free (r); 
    r = NULL; 
 } 
 else if (r->esq == NULL){ 
    Arv* t = r; 
    r = r->dir; 
    free (t); 
 }
 else if (r->dir == NULL){ 
    Arv* t = r; 
    r = r->esq; 
    free (t); 
 } 
 else { 
    Arv* f = r->esq; 
    while (f->dir != NULL){ 
        f = f->dir; 
 } 
    r->info = f->info;
    f->info = v; 
    r->esq = abb_retira(r->esq,v); 
 } 
} 
 return r; 
}


int main(){

    return 0;
}
