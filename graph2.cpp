#include <iostream>
#include <bits/stdc++.h>
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

    void bfs(int base)
    {
        queue<int> q;
        bool *visited = new bool[V]{0};

        q.push(base);
        visited[base] = true;

        while (!q.empty())
        {
            int f = q.front();
            cout << f << " ";
            q.pop();
            for (auto nbr : l[f])
            {
                if (!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
        cout<<endl;
    }
    void dfsHelper(bool *visited, int base)
    {
        visited[base] = true;
        cout << base << " ";
        for (auto nbr : l[base])
        {
            if (!visited[nbr])
            {
                dfsHelper(visited, nbr);
            }
        }
        return;
    }

    void dfs(int base)
    {
        bool *visited = new bool[V]{0};
        dfsHelper(visited, base);
        cout<<endl;
    }
    bool dfsIsCyclic(int base, vector<bool> &visited, int parent)
    {
        visited[base] = true;
        for (auto nbr : l[base])
        {
            if (!visited[nbr])
            {
                bool nbrFoundCyclic = dfsIsCyclic(nbr, visited, base);
                if (nbrFoundCyclic)
                {
                    return true;
                }
            }
            else if (nbr != parent)
            {
                return true;
            }
        }
    }
    bool isCyclic(int base)
    {
        vector<bool> visited(V, false);
        if(dfsIsCyclic(base, visited, -1)){
            cout<<"Graph is cyclic";
        }
    }
};

int main()
{
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(4, 5);
    g.addEdge(0, 4);
    g.addEdge(3, 4);

    g.printGraph();
    g.bfs(1);
    g.dfs(1);
    g.isCyclic(1);
}