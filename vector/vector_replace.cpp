#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,2,4,7};
    replace(v.begin(), v.end(), 2,100);
    for(int x:v)
    {
        cout<<x<< " ";
    }
    return 0;
}