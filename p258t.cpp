#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

int a, b;
int f[10][200][10][10][2];
int digit[20], len;

int solve(int todo, int done, int sub, int inc, int dec, bool p) {
	if (todo == 0) {
		if (!p && sub + inc >= 0 && sub - dec <= 0 && sub != 0) return 1;
		else return 0;
	}
	int &ret = f[done][sub + 100][inc][dec][p];
	if (ret == -1) {
		ret = 0;
		for (int i = 0; i < 10; ++i) {
			if (p && i > digit[todo]) break;
			if (!i && !done) continue;
			int t1, t2, t3;
			if (todo > done) {
				t1 = sub + i;
				t2 = max(inc, 9 - i);
				if (done == 0) t3 = i - 1;
				else t3 = max(dec, i);
			}
			else {
				t1 = sub - i;
				t2 = max(inc, i);
				t3 = max(dec, 9 - i);
			}
			ret += solve(todo - 1, done + 1, t1, t2, t3, p && (i == digit[todo]));
		}
	}
	return ret;
}

int count_ans(int x) {
	int ret = 0;
	len = 0;
	while (x) {
		digit[++len] = x % 10;
		x /= 10;
	}
	for (int i = 2; i <= len; i += 2) {
		memset(f, -1, sizeof(f));
		ret += solve(i, 0, 0, 0, 0, i == len);
	}
	return ret;
}

int main() {
	while (scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", count_ans(b + 1) - count_ans(a));
	}
}
