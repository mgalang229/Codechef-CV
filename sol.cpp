#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n;
	cin >> n;
	char a[n];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int cnt = 0;
	char v[5] = {'a','e','i','o','u'};
	for(int i = 0; i < n - 1; ++i) {
		bool ok = true;
		for(int j = 0; j < (int) strlen(v); ++j) {
			if(a[i] == v[j]) ok = false;
		}
		if(ok) {
			for(int j = 0; j < (int) strlen(v); ++j) {
				if(a[i+1] == v[j]) {
					cnt++;
					break;
				}
			}
		}
	}
	cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    for(int nr = 1; nr <= T; ++nr) {
        test_case();
    }
    //test_case();
    return 0;
}
