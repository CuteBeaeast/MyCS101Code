#ifndef MATRIXGRAPH_H
#define MATRIXGRAPH_H

#define INFINITE -1

class MatrixGraph
{
public:
    // Constructor and Destructor
    MatrixGraph(int numElem);
    ~MatrixGraph();

    // Accessor
    int get_distance(int vertice1, int vertice2);

    // Mutator
    void set_distance(int vertice1, int vertice2, int distance);

private:
    int** m_AdjacentMatrix;
    int m_numElem;
};

#endif