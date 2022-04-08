#ifndef graph_linked_list_h
#define graph_linked_list_h

// Função que cria uma representação //
// de um grafo usando lista ligada   //
Node ** create_matrix_graph(int l);

// insere uma aresta no grafo indo  //
// do nó i para o nó j              //
void insert_edge(Node * n, int i, int j);

// retorna o grau de um nó           //
Node * get_edge(Node * n, int i, int j);

// retorna o grau de entrada de um nó //
int get_degree(Node * n, int i);

// retorna o grau de saída de um nó   //
int get_indegree(Node * n, int i, int l);

// remove uma aresta do grafo        //
void delete_edge(Node * n, int i, int j);

#endif // !graph_linked_list_h