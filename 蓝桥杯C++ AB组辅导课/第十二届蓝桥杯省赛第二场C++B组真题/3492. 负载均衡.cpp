#include <iostream>
#include <queue>

using namespace std;

const int N = 2e5 + 10;

typedef pair<int, int> PII;

int n, m;
int s[N];
priority_queue <PII, vector<PII>, greater<PII>> q[N];

int main() {

    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> s[i];

    while (m--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        while (q[b].size() && q[b].top().first <= a) {
            s[b] += q[b].top().second;
            q[b].pop();
        }
        if (s[b] < d) puts("-1");
        else {
            s[b] -= d;
            q[b].push({a + c, d});
            cout << s[b] << endl;
        }
    }

    return 0;
}