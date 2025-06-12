#include <iostream>
#include <vector>

using namespace std;

void multiply(vector<int>& num, int n) {
    int carry = 0;
    for (int i = 0; i < num.size(); ++i) {
        int product = num[i] * n + carry;
        num[i] = product % 10;
        carry = product / 10;
    }

    while (carry) {
        num.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n) {
    vector<int> result;
    result.push_back(1);

    for (int i = 2; i <= n; ++i) {
        multiply(result, i);
    }

    for (int i = result.size() - 1; i >= 0; --i) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        factorial(n);
    }

    return 0;
}