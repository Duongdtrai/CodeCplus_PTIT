#include <bits/stdc++.h>
using namespace std;
 
#define R 4
#define C 4

int n,  m;
int A[500][500];
 
int maxHist(int row[]) {
    stack<int> result;
    int top_val; // Top of stack
    int max_area = 0; // Initialize max area in current
    int area = 0; // Initialize area with current top
    int i = 0;
    while (i < m) {
        if (result.empty() || row[result.top()] <= row[i])
            result.push(i++);
        else {
            top_val = row[result.top()];
            result.pop();
            area = top_val * i;
            if (!result.empty())
                area = top_val * (i - result.top() - 1);
            max_area = max(area, max_area);
        }
    }
    while (!result.empty()) {
        top_val = row[result.top()];
        result.pop();
        area = top_val * i;
        if (!result.empty())
            area = top_val * (i - result.top() - 1);
        max_area = max(area, max_area);
    }
    return max_area;
}
 
int maxRectangle() {
    int result = maxHist(A[0]);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++)
            if (A[i][j])
                A[i][j] += A[i - 1][j];
        result = max(result, maxHist(A[i]));
    }
    return result;
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
	    cin >> n >> m;
	    for (int i = 0; i < n; ++i)
	    	for (int j = 0; j < m; ++j)
	    		cin >> A[i][j];
	    cout << maxRectangle() << endl;
	}
    return 0;
}