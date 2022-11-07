#include <iostream>
#include <algorithm>

using namespace std;

int num[11] = { 0, };
int oper[4] = { 0, };
int maxV = -1000000000, minV = 1000000000;

void dfs(int res, int pl, int mi, int mu, int di,int depth) {
	if (num[depth] == 0) {
		maxV = max(maxV, res);
		minV = min(minV, res);
	}

	if (pl > 0) {
		dfs(res + num[depth], pl-1, mi, mu, di, depth + 1);
	}
	if (mi > 0) {
		dfs(res - num[depth], pl, mi-1, mu, di, depth + 1);
	}
	if (mu > 0) {
		dfs(res * num[depth], pl, mi, mu-1, di, depth + 1);
	}
	if (di > 0) {
		dfs(res / num[depth], pl, mi, mu, di-1, depth + 1);
	}
}
int main() {
	int size;
	cin >> size;

	for (int i = 0; i < size; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> oper[i];
	}
	dfs(num[0], oper[0], oper[1], oper[2], oper[3], 1);
	cout << maxV << endl << minV << endl;
	return 0;
}