#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<tuple<int, int, int>> customers;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        customers.push_back({a, b, i});
    }


    sort(customers.begin(), customers.end());


    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> roomAssignment(n);
    int roomCount = 0;

    for (auto &[arrival, departure, idx] : customers)
    {

        if (!pq.empty() && pq.top().first < arrival)
        {

            int room = pq.top().second;
            pq.pop();
            roomAssignment[idx] = room;
            pq.push({departure, room});
        }
        else
        {

            roomCount++;
            roomAssignment[idx] = roomCount;
            pq.push({departure, roomCount});
        }
    }

    cout << roomCount << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << roomAssignment[i];
        if (i < n - 1)
            cout << " ";
    }
    cout << "\n";

    return 0;
}