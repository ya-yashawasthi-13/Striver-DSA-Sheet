// doesn't repeat duplicates keys 
// unique keys
// value can be duplicate
// 0(1)

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["Yash"] = 2;
    m["Yash"] = 2;
    m["kush"] = 2;
    m["Awasthi"] = 1;

    cout << "Size : " << m.size() << endl;


    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}