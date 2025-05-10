/*#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7, 8, 9, 6, 3, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}*/

#include <iostream>
#include <vector>
using namespace std;

void frequency(int arr[], int n)
{
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}

int main()
{
    int arr[] = {10, 5, 10, 5, 15, 5, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    frequency(arr, n);
}
