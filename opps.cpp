#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long

class Hero
{
private:
    int level;
    int health;

public:
    int a = 1;
    static int b;

    int getLevel()
    {
        return level;
    }
    int getHealth()
    {
        return health;
    }
    void setLevel(int level)
    {
        this->level = level;
    }
    void setHealth(int health)
    {
        this->health = health;
    }
    void print()
    {
        cout << "Level : " << this->level << " , ";
        cout << "Health : " << this->health << endl
             << endl;
    }
};

class A
{
public:
    void speak()
    {
        cout << "Hello from A" << endl;
    }
};
class B
{
public:
    void speak()
    {
        cout << "Hello from B" << endl;
    }
};
class C : public A, public B {

};

int Hero::b = 2;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Hero h;
    h.setHealth(100);
    h.setLevel(1);
    h.print();

    Hero a(h);
    a.print();

    h.setHealth(80);
    h.print();
    a.print();

    cout << Hero::b << endl;
    C objc;
    // objc.speak(); ambigus
    objc.A::speak();
    objc.B::speak();
    return 0;
}