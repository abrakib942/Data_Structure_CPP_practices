#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st; // stack container দিয়ে stack নেয়া হচ্ছে।
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x); // stack এ value push করা হচ্ছে।
    }
    // stack এ value empty না হওয়া অব্দি loop চালানো হচ্ছে।
    while (!st.empty())
    {
        cout << st.top() << endl; // top print করে হচ্ছে।
        st.pop();                 // top value টা pop or delete করা হচ্ছে।
    }
    return 0;
}
