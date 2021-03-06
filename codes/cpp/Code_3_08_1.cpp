#include <iostream>
#include <algorithm>
using namespace std;

long long N, X, A[1000009];

int main() {
	// 入力
	cin >> N >> X;
	for (int i = 1; i <= N; i++) cin >> A[i];

	// 配列のソート
	sort(A + 1, A + N + 1);

	// 二分探索
	int left = 1, right = N;
	while (left <= right) {
		int mid = (left + right) / 2; // 探索範囲の中央で分割する
		if (A[mid] == X) { cout << "Yes" << endl; return 0; }
		if (A[mid] > X) right = mid - 1; // 探索範囲を前半部分に絞る
		if (A[mid] < X) left = mid + 1; // 探索範囲を後半部分に絞る
	}

	// 探索範囲がなくなっても Yes とならなければ答えは No
	cout << "No" << endl;
	return 0;
}