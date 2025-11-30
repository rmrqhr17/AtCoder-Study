#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector <long double> bird(n+1);
    vector <long double> count(n+1);
    for (int i=0;i<n;i++) {
        int a;
        long double b;
        cin >> a >> b;
        bird[a]+=b;
        count[a]+=1;
    }
    for (int i=1;i<=m;i++) {
        printf("%.20Lf\n",bird[i]/count[i]);
    }
}