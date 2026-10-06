#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int N;
    while (cin >> N && N != 0) {
        vector<int> a(N);
        for (int i = 0; i < N; ++i) {
            cin >> a[i];
            a[i]--;
        }
        vector<bool> visited(N, false);
        long long ans = 1;
        for (int i = 0; i < N; ++i) {
            if (!visited[i]) {
                long long cycle_length = 0;
                int curr = i;
                while (!visited[curr]) {
                    visited[curr] = true;
                    curr = a[curr];
                    cycle_length++;
                }
                ans = lcm(ans, cycle_length);
            }
        }
        cout << (ans > 1 ? ans:0) << "\n";
    }
    return 0;
}
