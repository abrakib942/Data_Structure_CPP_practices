#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list2 = {1, 2, 3, 4, 5};
    list<int> myList(list2);
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}