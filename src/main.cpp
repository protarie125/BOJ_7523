#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	for (auto i = 1; i <= t; ++i) {
		cout << "Scenario #" << i << ":\n";

		ll n, m;
		cin >> n >> m;

		auto s1 = ll{ 0 };
		if (n < 0) {
			auto n2 = -n;
			s1 = n2 * (n2 + 1) / 2;
			s1 *= -1;
		}
		else {
			s1 = n * (n + 1) / 2;
		}

		auto s2 = ll{ 0 };
		if (m < 0) {
			auto m2 = -m;
			s2 = m2 * (m2 + 1) / 2;
			s2 *= -1;
		}
		else {
			s2 = m * (m + 1) / 2;
		}

		auto ans = ll{ 0 };
		if (0 < n && 0 < m) {
			ans = s2 - s1 + n;
		}
		else if (n < 0 && m < 0) {
			ans = s1 - s2 + m;
		}
		else {
			ans = s2 + s1;
		}

		cout << ans << "\n\n";
	}

	return 0;
}