#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int cas;

	scanf("%d", &cas);
	while (cas--) {
		int x,y,z;
		scanf("%d %d %d", &x, &y, &z);

		double field = x + y;
		double ans;
		if (x <= field / 3)
			ans = 0;
		else if (x < 2 * field / 3)
			ans = ((double) z * ((double) x - field / 3.0)) / (field / 3.0);
		else
			ans = z;

		printf("%.0lf\n", ans);
	}

	return 0;
}
