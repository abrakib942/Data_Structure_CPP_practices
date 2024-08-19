#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q; // int ডাটা টাইপের একটি queue ডিক্লেয়ার করলাম
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x); // ভ্যালু x , push ফাংশনের মাধ্যমে queue তে পুশ করলাম
    }
    cout << q.size() << endl; // queue এর সাইজ কতো চেক করলাম

    while (!q.empty()) // queue , empty কিনা চেক করছি।
    {
        cout << q.front() << endl; // queue এর front এর ভ্যালু রিটার্ন করবে
        q.pop();                   // queue এর প্রথম ভ্যালুটি queue থেকে রিমুভ করে দিবে
    }
    return 0;
}