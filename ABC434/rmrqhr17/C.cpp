#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,h;
        cin >> n >> h;

        int minc;
        int maxc;
        int lol=0;
        int ba=0;
        int cc=0;

        for (int i=0;i<n;i++) {
            int a,b,c;
            cin >> a >> b >> c;
            if (i==0) {
                minc=h;
                maxc=h;
            }
            int jj=0;
            lol=a-ba;
            if (minc-lol>c || maxc+lol<b) {
                cc++;
            }
            else {
                if (minc-lol>b) {
                    minc-=lol;
                }
                else {
                    minc=b;
                }
                if (maxc+lol<c) {
                    maxc+=lol;
                }
                else {
                    maxc=c;
                }
            }
            ba=a;
        }
        if (cc==0) {
            cout << "Yes" << "\n";
        }
        else {
            cout << "No" << "\n";
        }
    }
}