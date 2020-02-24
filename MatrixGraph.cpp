#include "MatrixGraph.hpp"

MatrixGraph::MatrixGraph(int numElem)
: m_numElem(numElem)
{
    m_AdjacentMatrix = new int*[m_numElem];
    for(int i = 0; i < m_numElem; i++)
        m_AdjacentMatrix[i] = new int[m_numElem];

    for(int i = 0; i < m_numElem; i++)
    {
        for(int j = 0; j < m_numElem; j++)
            m_AdjacentMatrix[i][j] = INFINITE;
    }
}

MatrixGraph::~MatrixGraph()
{
    for(int i = 0; i < m_numElem; i++)
        delete[] m_AdjacentMatrix[i];
}

int MatrixGraph::get_distance(int vertice1, int vertice2)
{
    return m_AdjacentMatrix[vertice1][vertice2];
}

void MatrixGraph::set_distance(int vertice1, int vertice2, int distance)
{
    m_AdjacentMatrix[vertice1][vertice2] = distance;

    return;
}