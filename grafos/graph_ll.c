#include "stdio.h"
#include "stdlib.h"

typedef struct symbol{
    int info;
    Node * next;
} Node;

Node * create_list_graph(int l){
    Node * n = (Node *) malloc(sizeof(Node) * l);
    for(int i = 0; i < l; i++)
        n[i].info = 0;
    return n;
}

void insert_edge(Node * n, int i, int j){
    Node * aux = (Node *) malloc(sizeof(Node));
    aux->info = j;
    aux->next = n[i].next;
    n[i].next = aux;
}

void delete_edge(Node * n, int i, int j){
    Node * aux = n[i].next;
    Node * ant = NULL;
    while(aux != NULL){
        if(aux->info == j){
            if(ant == NULL)
                n[i].next = aux->next;
            else
                ant->next = aux->next;
            free(aux);
            break;
        }
        ant = aux;
        aux = aux->next;
    }
}

Node * get_edge(Node * n, int i, int j){
    Node * aux = n[i].next;
    while(aux != NULL){
        if(aux->info == j)
            return aux;
        aux = aux->next;
    }
    return NULL;
}

int get_degree(Node * n, int i){
    int degree = 0;
    Node * aux = n[i].next;
    while(aux != NULL){
        degree++;
        aux = aux->next;
    }
    return degree;
}

int get_indegree(Node * n, int i, int l){
    int indegree = 0;
    for(int j = 0; j < l; j++){
        Node * aux = n[j].next;
        while(aux != NULL){
            if(aux->info == i)
                indegree++;
            aux = aux->next;
        }
    }
    return indegree;
}