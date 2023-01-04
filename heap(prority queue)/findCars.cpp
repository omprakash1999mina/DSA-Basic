#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long

class Car
{
public:
    string id;
    int x;
    int y;

    Car(string id, int x, int y)
    {
        this->id = id;
        this->x = x;
        this->y = y;
    }
    int dist()
    {
        return x * x + y * y;
    }
};

class CompareCar
{
public:
    bool operator()(Car a, Car b)
    {
        return a.dist() < b.dist(); // for maxHeap
    }
};

void find_nearest(vector<Car> cars, int k)
{

    priority_queue<Car, vector<Car>, CompareCar> max_heap(cars.begin(),cars.begin()+k);

    for (int i=k; i<cars.size();i++)
    {
        
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n(5), k(3);
    string id;

    return 0;
}