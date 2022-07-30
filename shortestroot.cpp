#include<iostream>
using namespace std;
int main(){
    char path[1000];
    cin.getline(path, 1000);
    int x=0;
    int y=0;
    for (int i = 0;path[i]!='\n'; i++)
    {
        switch (path[i])
        {
        case 'N': y++;
            break;
        case 'S': y--;
            break;
        case 'E': x++;
            break;
        case 'W': x--;
            break;
        }
    }
    cout<<"x and y is "<<x<<","<<y<<endl;
    // 1 st quardent
    if (x>0 and y>0)
    {
        while (y--)
        {
            cout<<'N';
        }
        while (x--)
        {
            cout<<'E';
        }
        return 0;
        
    }

    // 2 nd quardent
    if (x<0 and y>0)
    {
        while (y--)
        {
            cout<<'N';
        }
        while (x++)
        {
            cout<<'W';
        }
        return 0;
        
    }

    // 3 rd quardent
    if (x<0 and y<0)
    {
        while (y++)
        {
            cout<<'S';
        }
        while (x++)
        {
            cout<<'W';
        }
        return 0;
        
    }

    // 4th quardent
    if (x>0 and y<0)
    {
        while (y++)
        {
            cout<<'S';
        }
        while (x--)
        {
            cout<<'E';
        }
        return 0;
        
    }
//  SNNNEWE NNE
    
}