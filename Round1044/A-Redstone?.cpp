#include <cstdio>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
  int t, n, a;
  scanf("%d", &t);
  while (t--) {
	scanf("%d", &n);
	vector<int> occur = vector<int>(101, 0);
	for (int i = 0; i < n; i++) {
	  scanf("%d", &a);
	  occur[a]++;
	}
	bool found = false;
	for (int i = 0; i < 101; i++) {
	  if (occur[i] > 1) {
		printf("YES\n");
		found = true;
		break;
	  }
	}
	if (!found) {
	  printf("NO\n");
	}
  }
  return 0;
}