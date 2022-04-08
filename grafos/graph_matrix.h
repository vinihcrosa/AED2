#ifndef graph_matrix_h
#define graph_matrix_h

// Função que cria uma representação //
// de um grafo usando uma matriz     //
Node ** create_matrix_graph(int l);

// insere uma aresta no grafo indo  //
// do nó i para o nó j              //
void insert_edge(Node ** n, int i, int j);


// retorna o grau de um nó           //
int get_edge(Node ** n, int i, int j);

// retorna o grau de entrada de um nó //
int get_degree(Node ** n, int i);

// retorna o grau de saída de um nó   //
int get_indegree(Node ** n, int i);

// remove uma aresta do grafo        //
void delete_edge(Node ** n, int i, int j);

#endif // !graph_matrix_h
