#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
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
    void addEdge(int x, int y, bool undir = false)
    {
        l[x].push_back(y);
    }
    bool dfs(int node, vector<bool> &visited, vector<bool> &stack)
    {
        visited[node] = true;
        stack[node] = true;
        // do some work at node , if backedge found return true
        for (auto nbr : l[node])
        {
            if (stack[nbr])
            {
                return true;
            }
            else if (!visited[nbr])
            {
                bool nbrFoundCycle = dfs(nbr, visited, stack);
                if (nbrFoundCycle)
                {
                    return true;
                }
            }
        }
        // going back
        stack[node] = false;
        return false;
    }

    bool contains_cycle()
    {
        vector<bool> visited(V, false);
        vector<bool> stack(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                if (dfs(i, visited, stack))
                {
                    return true;
                }
            }
        }
        return false;
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

    cout << g.contains_cycle() << endl;
    return 0;
}