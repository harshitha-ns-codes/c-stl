#include <bits/stdc++.h>
using namespace std;

// Simple print function
void print() {
    cout << "hello world" << endl;
}

// Sum function
int sum(int a, int b) {
    return a + b;
}

// Function declarations
void explainpairs();
void explainvector();
void explainlist();
void explaindeque();
void explainstack();
void explainqueue();
void explainpq();
void explainset();
void explainmultiset();
void explainust();
void explainmpp();
void explainmultimap();
void explainunorderedmap();
void explainextra();

int main() {
    print();
    int s = sum(3, 4);
    cout << s << endl;

    explainpairs();
    explainvector();
    explainlist();
    explaindeque();
    explainstack();
    explainqueue();
    explainpq();
    explainset();
    explainmultiset();
    explainust();
    explainmpp();
    explainmultimap();
    explainunorderedmap();
    explainextra();

    return 0;
}

// PAIRS
void explainpairs() {
    pair<int, int> p = {1, 10};
    cout << p.first << " " << p.second << endl;

    // NESTED PAIR
    pair<int, pair<int, int>> p1 = {2, {4, 2}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    // ARRAY OF PAIRS
    pair<int, int> arr[] = {{1,2}, {3,4}, {4,2}};
    cout << arr[2].first << endl;
}

// VECTORS
void explainvector() {
    vector<int> v1;
    v1.push_back(4);
    v1.emplace_back(10);

    vector<pair<int, int>> vec;
    vec.push_back({2,3});
    vec.emplace_back(4,3);

    vector<int> v2(5,100);  // {100,100,100,100,100}
    vector<int> v3(4,100);  // {100,100,100,100}
    vector<int> v4(4);      // {0,0,0,0}
    vector<int> v5(v3);     // copy of v3

    // Iterators
    auto it = v2.begin();
    cout << *(it) << " ";    
    it++;
    cout << *(it) << " " << endl;

    // Access
    cout << v2[0] << " ";    
    cout << v2.back() << endl;

    // Loop with iterators
    for (auto it = v2.begin(); it != v2.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Range-based for loop
    for (auto x : v2) {
        cout << x << " ";
    }
    cout << endl;

    // Erase
    v2.erase(v2.begin()+1);                
    v2.erase(v2.begin()+1, v2.begin()+3);  

    // Insert
    v2.insert(v2.begin(), 300);        
    v2.insert(v2.begin()+1, 3, 50);    
    v2.insert(v2.begin()+2, {4,5,6});  

    cout << v2.size() << endl;
    v2.pop_back();
    v2.clear();

    cout << v2.empty() << endl;  
}

// LIST
void explainlist() {
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(2);
    ls.emplace_front(10);
}

// DEQUE
void explaindeque() {
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(3);
    dq.push_front(2);
    dq.emplace_front(10);

    dq.pop_back();
    dq.pop_front();

    cout << dq.front() << " " << dq.back() << endl;
}

// STACK (LIFO)
void explainstack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout << st.top() << endl;

    st.pop();

    cout << st.empty() << " " << st.size() << endl;

    stack<int> st1, st2;
    st1.swap(st2);
}

// QUEUE (FIFO)
void explainqueue() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);

    q.back() += 3;
    cout << q.back() << endl;
    cout << q.front() << endl;

    q.pop();
    cout << q.front() << endl;
}

// PRIORITY QUEUE
void explainpq() {
    priority_queue<int> pq; // MAX HEAP
    pq.push(1);
    pq.push(8);
    pq.push(4);
    pq.push(5);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    priority_queue<int, vector<int>, greater<int>> pq_min; // MIN HEAP
    pq_min.push(1);
    pq_min.push(8);
    pq_min.push(4);
    pq_min.push(5);

    cout << pq_min.top() << endl;
    pq_min.pop();
    cout << pq_min.top() << endl;
}

// SET
void explainset() {
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);

    auto it = st.find(3);
    st.erase(4);

    int cnt = st.count(1);

    auto it1 = st.find(1);
    auto it2 = st.find(4);
    st.erase(it1, it2);

    auto lb = st.lower_bound(2);
    auto ub = st.upper_bound(4);
}

// MULTISET
void explainmultiset() {
    multiset<int> mst;
    mst.insert(1);
    mst.insert(1);
    mst.insert(1);

    mst.erase(1); // erases all 1s

    int cnt = mst.count(1);

    mst.insert(1);
    mst.erase(mst.find(1));

    // erase range
    auto it1 = mst.find(1);
    auto it2 = mst.find(1);
    mst.erase(it1, it2);
}

// UNORDERED SET
void explainust() {
    unordered_set<int> st; // average O(1) insert/find
}

// MAPS
void explainmpp() {
    map<int, int> mpp;
    map<int, pair<int,int>> mpp2;
    map<pair<int,int>, int> mpp3;

    mpp[1] = 2;
    mpp.insert({2,3});

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    auto it = mpp.find(2);

    cout << mpp[2] << endl;
    auto lb = mpp.lower_bound(2);
    auto ub = mpp.upper_bound(4);
}

// MULTIMAP
void explainmultimap() {
    multimap<int,int> mp;
    mp.insert({1,100});
    mp.insert({1,200});
}

// UNORDERED MAP
void explainunorderedmap() {
    unordered_map<int,int> ump;
    ump[1] = 10;
    ump[2] = 20;
}

// CUSTOM COMPARATOR FOR PAIRS
bool comp(pair<int,int> p1, pair<int,int> p2) {
    if (p1.second > p2.second) return false;
    if (p1.second < p2.second) return true;
    if (p1.first > p2.first) return true;
    return false;
}

// EXTRA STL FUNCTIONS
void explainextra() {
    int a[] = {5, 2, 8, 1};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> vac = {5, 2, 8, 1};

    sort(a, a+n);                 // sort integers ascending
    sort(vac.begin(), vac.end()); // vector ascending
    sort(a+2, a+4);               // sort subarray
    sort(a, a+n, greater<int>()); // sort descending

    pair<int,int> ar[] = {{1,2}, {4,1}, {3,1}};
    sort(ar, ar+3, comp);         // custom sort for pairs

    int num = 8;
    int cnt = __builtin_popcount(num); // number of 1s in binary

    long long lnum = 1234567890123;
    int lcnt = __builtin_popcountll(lnum);

    string s = "1234";
    sort(s.begin(), s.end());

    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    int maxi = *(max_element(a, a+n));
    cout << "Max element: " << maxi << endl;
}
