#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <int> v,oper;
	int i;
	long long res, maxV = -1000000000, minV = 1000000000;

	cin >> i;
	for (int j = 0; j < i; j++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	for (int i = 0; i < 4; i++) {
		int temp;
		cin >> temp;
		for (int j = 0; j < temp; j++) {
			oper.push_back(i);
		}
	}
	do {
		res = v[0];
		int pivot = 1;
		for (int i = 0; i < oper.size(); i++) {
			switch (oper[i]) { //0 == + ,1 == -, 2 == *, 3== /
				case 0:
					res += v[pivot++];
					break;
				case 1:
					res -= v[pivot++];
					break;
				case 2:
					res *= v[pivot++];
					break;
				case 3:
					res /= v[pivot++];
					break;
			}
		}
		maxV = max(res, maxV);
		minV = min(res, minV);
	} while (next_permutation(oper.begin(), oper.end()));
	cout << maxV << endl << minV << endl;
	return 0;
}