//
// Created by vinicius Rosa on 26/03/22.
//

#include "stdio.h"
#include "stdlib.h"

typedef struct symbol{
    int info;
} Node;

Node ** create_matrix_graph(int l){
    Node n[l][l];
    for(int i = 0; i < l; i++)
        for(j = 0; j < l; j++)
            n[i][j].info = 0;
    return n;
}


void insert_edge(Node ** n, int i, int j){
    n[i][j].info = 1;
}

int get_edge(Node ** n, int i, int j){
    return n[i][j].info;
}

int get_degree(Node ** n, int i){
    int degree = 0;
    for(int j = 0; j < i; j++)
        degree += n[i][j].info;
    return degree;
}

int get_indegree(Node ** n, int i){
    int indegree = 0;
    for(int j = 0; j < i; j++)
        indegree += n[j][i].info;
    return indegree;
}

void delete_edge(Node ** n, int i, int j){
    n[i][j].info = 0;
}