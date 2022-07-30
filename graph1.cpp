#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[v];
    }
    void addEdge(int i, int j, bool undir = true)
    {
        l[i].push_back(j);
        if (undir)
        {
            l[j].push_back(i);
        }
    }
    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << (i) << "-->";
            for (auto node : l[i])
            {
                cout << node << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g(3);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);

    g.printGraph();
}