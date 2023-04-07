#include <iostream>
#include <queue>
#include <unordered_map>
#include <cstring>

using namespace std;

string start, ed = "12345678x";

int bfs(string state) {

    queue <string> q;
    unordered_map<string, int> d;

    q.push(start);
    d[start] = 0;

    int dx[] = {0, 0, -1, 1}, dy[] = {1, -1, 0, 0};

    while (q.size()) {
        auto t = q.front();
        q.pop();

        if (t == ed) return d[t];

        int distance = d[t];
        int k = t.find('x');

        int a = k / 3, b = k % 3;
        for (int i = 0; i < 4; i++) {
            int x = a + dx[i], y = b + dy[i];
            if (x >= 0 && x < 3 && y >= 0 && y < 3) {
                swap(t[k], t[x * 3 + y]);
                if (!d.count(t)) {
                    d[t] = distance + 1;
                    q.push(t);
                }
                swap(t[k], t[x * 3 + y]); //还原现场！！！
            }
        }
    }

    return -1;
}

int main() {

    string str;
    while (cin >> str) start += str;

    cout << bfs(start) << endl;

    return 0;
}