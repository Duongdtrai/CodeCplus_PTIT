#include <stdio.h>

int main () {
	int t;
	scanf ("%d", &t);
	while (t--) {
		int n;
		scanf ("%d", &n);
		int a[n];
		int i;
		for (i = 0; i < n; i++) {
			scanf ("%d", &a[i]);
		}
		for (i = 0; i < n; i++) {
			int j;
			int dem = 0;
			for (j = 0; j < n; j ++) {
				if (a[i] >= a[j]) {
					dem++;
				}
			}
			if (dem == n) {
				printf ("%d\n", a[i]);
				break;
			}
		}
		for (i = 0; i < n; i++) {
			int j;
			int dem = 0;
			for (j = 0; j < n; j ++) {
				if (a[i] >= a[j]) {
					dem++;
				}
			}
			if (dem == n) {
				printf ("%d ", i);
			}
		}
	}
	return 0;
}
