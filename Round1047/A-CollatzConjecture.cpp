#include <stdio.h>

using namespace std;

int main() {
  int t, k;
  long long x;
  scanf("%d", &t);
  while (t--) {
	scanf("%d %lld", &k, &x);
	for (int i = 0; i < k; i++) {
	  if ((x - 1) % 3 == 0 && x != 1 && ((x - 1) / 3) % 2 == 1) {
		x = (x - 1) / 3;
	  } else {
		x = 2 * x;
	  }
	}
	printf("%lld\n", x);
  }
  return 0;
}