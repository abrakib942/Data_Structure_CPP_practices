#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
}; // প্রথমে Singly Linked List এর একটি Node class বানিয়ে নিলাম যাতে করে Singly Linked List তৈরি করতে পারি

class myQueue // এরপর একটি myQueue নামক ক্লাস বানিয়ে নিলাম যেখানে আমরা আমাদের তৈরি করা Queue এর স্ট্রাকচার ও বিভিন্ন ফাংশন তৈরি করে নিতে পারি
{
public:
    // Queue তে ব্যবহারের জন্য একটি Singly Linked List এর Head এবং Tail ইনিশিয়ালাইজ করে নিচ্ছি
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0; // Queue এর  সাইজ ট্রেক রাখার জন্য একটি size ভ্যারিয়েবল রাখছি। শুরুতে যেহেতু Queue টি খালি , তাই সাইজ ০

    void push(int val) // Queue তে ভ্যালু পুশ করার জন্য একটি ফাংশন তৈরি করে নিলাম যা ঐ ভ্যালুটি রিসিভ করে Queue তে পুশ করে দিবে।
    {
        sz++; // যেহেতু Queue তে একটি নতুন ভ্যালু push হচ্ছে তাই এর সাইজ ১ বাড়িয়ে দিচ্ছি

        // নিচে Singly Linked List এর tail track রাখার মাধ্যমে O(1) এর শেষে একটি ভ্যালু Insertion করার কোড দেখানো হলো
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop() // Queue এর শুরু থেকে অর্থাৎ লাইনে যে ভ্যালু সবার আগে আছে তা Queue থেকে রিমুভ করার জন্য একটি ফাংশন তৈরি করা হলো
    {
        sz--; // যেহেতু একটি ভ্যালু Queue থেকে pop করা হচ্ছে তাই এর সাইজ এক কমিয়ে দেয়া হচ্ছে

        // নিচে Singly Linked List এর প্রথম ভ্যালু অর্থাৎ  Head ডিলিট করার কোড দেয়া আছে যার কমপ্লেক্সিটি O(1)
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int front() // Queue এর শুরুতে এখন কোন ভ্যালু আছে তা জানার জন্য এই ফাংশন ব্যবহার করা হয়
    {
        return head->val; // Singly Linked List এর Head এর  ভ্যালুটি রিটার্ন করা হচ্ছে , কারণ তা ই Queue এর শুরুর ভ্যালু
    }
    int size() // Queue এর সাইজ বের করার ফাংশন
    {
        return sz; // সাইজ ট্রেকার ভ্যারিয়েবল টি রিটার্ন করা হচ্ছে
    }
    bool empty() // Queue টি খালি কিনা চেক করা হচ্ছে
    {
        if (sz == 0) // যদি size ট্রেকার ০ হয় সে ক্ষেত্রে queue টি খালি
            return true;
        else // অন্যথায় তা খালি নয়
            return false;
    }
};
int main()
{
    myQueue q; // myQueue ক্লাসের একটি অব্জেক্ট তৈরি করা হলো
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x); // n টি মান queue তে পুশ করা হলো
    }

    cout << q.size() << endl;  // returns n
    cout << q.empty() << endl; // returns false

    while (!q.empty()) // যতক্ষন queue খালি না
    {
        cout << q.front() << endl; // Queue এর প্রথম ভ্যালুটি এক্সেস করা হচ্ছে
        q.pop();                   // queue এর প্রথম ভ্যালুটি queue হতে remove করা হচ্ছে
    }
    return 0;
}