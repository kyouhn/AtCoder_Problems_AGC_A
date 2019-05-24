#include<iostream>
#include<vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	vector<int>A(N);
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		sum += A[i];
	}
	
	if (sum % 2 == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	
	return 0;
}