#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int> l; // প্রথমে int টাইপের একটি list ডিক্লয়ার করলাম

    void push(int val) // Queue তে ভ্যালু পুশ করার ফাংশন
    {
        l.push_back(val); // ভ্যালুটি List এর ব্যাকে push করে দেয়া হলো
    }
    void pop() // queue এর সবার সামনের ভ্যালুটি পপ করার ফাংশন
    {
        l.pop_front(); // list এর front এর ভ্যালুটি delete করে দেয়া হলো
    }
    int front() // queue এর front ভ্যালুটি access করা হচ্ছে
    {
        return l.front(); // list এর front ভ্যালুটি রিটার্ন করে দেয়া হলো
    }
    int size()
    {
        return l.size(); // list এর সাইজ রিটার্ন করা হলো
    }
    bool empty()
    {
        return l.empty(); // list খালি কিনা চেক করা হচ্ছে
    }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
