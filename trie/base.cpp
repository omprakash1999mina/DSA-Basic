#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long

class Node
{
public:
    char data;
    unordered_map<char, Node *> m;
    bool isTerminal;

    Node(char d)
    {
        data = d;
        isTerminal = false;
    }
};

class Trie
{
public:
    Node *root;
    Trie()
    {
        root = new Node('\0');
    }

    void Insert(string word)
    {
        Node *temp = root;
        for (char ch : word)
        {
            if (temp->m.count(ch) == 0)
            {
                Node *n = new Node(ch);
                temp->m[ch] = n;
            }
            temp = temp->m[ch];
        }
        temp->isTerminal = true;
    };

    void sufixlist(string word)
    {
        for (int i = 0; i < word.length(); i++)
        {
            Insert(word.substr(i));
        }
    }
    
    bool search(string word)
    {
        cout << "inter";
        Node *temp = root;
        for (char ch : word)
        {
            if (temp->m[ch] == 0)
            {
                return false;
            }
            temp = temp->m[ch];
        }
        return temp->isTerminal;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Trie t;

    string words[] = {"apple", "ape", "no", "news", "not", "never"};
    for (auto x : words)
    {
        t.Insert(x);
    }

    int q;
    cin >> q;

    string search_word;
    while (q--)
    {
        cin >> search_word;
        if (t.search(search_word))
        {
            cout << " Yes it is present" << endl;
        }
        else
        {
            cout << " NO it is not present" << endl;
        }
    }

    return 0;
}
