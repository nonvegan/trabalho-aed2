#ifndef MOV_H_
#define MOV_H_

#include "auxiliar.h"
#include "produto.h"

#define ENTRADA_PRODUTO 0
#define SAIDA_PRODUTO 1

typedef struct {
    unsigned int id_produto;
    unsigned int tipo;
    unsigned int quantidade;
    Data data;
} Movimento;

typedef struct node {
    Movimento mov;
    struct node* next;
} node_t;

int criar_novo_movimento(Movimento* novo_mov);

node_t* criar_elemento();

void inserir_node_fim(node_t **lista, node_t *elemento);

void print_lista_movs(node_t *lista_movs, Produto* lista_produtos);

void print_lista_movs_intervalo(node_t *lista_movs, Produto* lista_produtos, Data d1, Data d2);

#endif /* MOV_H_ */
