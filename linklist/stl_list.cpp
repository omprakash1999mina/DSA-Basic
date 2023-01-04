#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long

void print_list(list<int> &li, auto it){    
    while(it!=li.end()){
        cout<<*it<< " ";
        it++;
    }
    cout<<endl;
}

int main()
{
    // in STL  list is a doubly linked list
    // in STL  forward list singly linked list but we not use this buz give less functions one direction only

    // in linked list traversal is slow but insertion / deletion fast
    // non-contiguous memory allocation

    // front() , back(), push_front(g), push_back(g), pop_front(), pop_back(), empty() bool	
    // reverse(), size(), sort(), erase()
    // list.begin(), list.end()	return itrator
    
    // insert()	Inserts new elements in the list before the element at a specified position.
    // remove()	Removes all the elements from the list, which are equal to given element.
    // remove_if()	Used to remove all the values from the list that correspond true to the predicate or condition given as parameter to the function.


    list<int> li;
    li.push_back(1);
    li.push_back(4);
    li.insert(li.begin(),3);
    li.push_back(1);
    li.push_back(7);


    auto it = li.begin();
    print_list(li,it);

    // li.remove(1);
    li.erase(li.begin());
    print_list(li,li.begin());

    li.sort();
    print_list(li,li.begin());
    
    return 0;
}

