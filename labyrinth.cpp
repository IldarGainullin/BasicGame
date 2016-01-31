#include <bits/stdc++.h>

using namespace std;

vector <vector <int> > generate (int n, int m) {
    vector <vector <int> > f(n, vector <int> (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            f[i][j] = rand() & 1;
        }
    }
    return f;
}
