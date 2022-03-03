#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <cstdio>
#include <string>
#include <deque>
#include <stack>

using namespace std;

int test_case;
int N, M;


int main() {
	cin.tie(0);
	cout.tie(0);
	cin >> test_case;
	for (int t = 0; t < test_case; t++) {
		cin >> N >> M;
		queue<pair<int, int>> input;
		vector<int> priority;
		for (int i = 0; i < N; i++) {
			int x;
			cin >> x;
			input.push(make_pair(i, x));
			priority.push_back(x);
		}
		sort(priority.begin(), priority.end());
		reverse(priority.begin(), priority.end());
		int cnt = 0;
		while (!input.empty()) {
			int number = input.front().first;
			int importance = input.front().second;
			input.pop();
			if (importance == priority[cnt] && number == M) {
				cout << cnt + 1 << "\n";
				break;
			}
			if (importance != priority[cnt]) {
				input.push(make_pair(number, importance));
			}
			else if (importance == priority[cnt] && number != M) {
				cnt++;
			}
		}
	}
	return 0;
}