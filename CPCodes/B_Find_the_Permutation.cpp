#include <bits/stdc++.h>
using namespace std;

// We will use 64-bit integers where convenient, but n <= 1000 is small enough
// that 32-bit would also suffice.  Define "int" as 64-bit here for consistency.
#define int long long

void solveTestCase() {
    int n;
    cin >> n;

    // Read the adjacency matrix
    // g[i][j] = '0' or '1', with i and j from 0..(n-1) in code terms,
    // but we'll treat them as 1..n conceptually.
    vector<string> g(n);
    for(int i = 0; i < n; i++){
        cin >> g[i];
    }

    // Compute deg[i]: the number of '1' in row i
    // deg[i] = number of neighbors for vertex (i+1)
    // We'll store vertices in 1-based form, so label = i+1
    vector<int> deg(n, 0);
    for(int i = 0; i < n; i++){
        int countOnes = 0;
        for(int j = 0; j < n; j++){
            if(g[i][j] == '1') {
                countOnes++;
            }
        }
        deg[i] = countOnes;
    }

    // We'll create a list of (deg, label) pairs
    // where label = i+1, deg = deg[i].
    // Then we sort primarily by deg ascending, secondarily by label descending.
    vector<pair<int,int>> arr;
    arr.reserve(n);
    for(int i = 0; i < n; i++){
        arr.push_back({deg[i], i+1});
    }

    // Custom sort:
    // 1) ascending by deg
    // 2) if deg is the same, descending by label
    sort(arr.begin(), arr.end(), [](auto &A, auto &B){
        if(A.first != B.first) return A.first < B.first;   // smaller degree first
        return A.second > B.second; // if degrees tie, larger label first
    });

    // Now arr[] is the permutation p from left to right.
    // We just output the labels in that order.
    for(int i = 0; i < n; i++){
        cout << arr[i].second << (i+1 < n ? ' ' : '\n');
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solveTestCase();
    }

    return 0;
}