#include <bits/stdc++.h>
using namespace std;

template <int m>
class Modint {
using mint = Modint;
private:
    unsigned int _v;
    static constexpr unsigned int umod() { return m;}

public:
    static constexpr int mod() { return m;}
    static mint raw(int v) {
        mint x;
        x._v = v;
        return x;
    }

    Modint() : _v(0) {}

    template<class T>
    Modint(T v) {
        long long x = (long long)(v % (long long)(umod()));
        if (x < 0) x += umod();
        _v = (unsigned int)(x);
    }

    unsigned int val() const { return _v; }

    mint& operator++() {
        _v++;
        if (_v == umod()) _v = 0;
        return *this;
    }
    mint& operator--() {
        if (_v == 0) _v = umod();
        _v--;
        return *this;
    }
    mint operator++(int) {
        mint result = *this;
        ++*this;
        return result;
    }
    mint operator--(int) {
        mint result = *this;
        --*this;
        return result;
    }

    mint& operator+=(const mint& rhs) {
        _v += rhs._v;
        if (_v >= umod()) _v -= umod();
        return *this;
    }
    mint& operator-=(const mint& rhs) {
        _v -= rhs._v;
        if (_v >= umod()) _v += umod();
        return *this;
    }
    mint& operator*=(const mint& rhs) {
        unsigned long long z = _v;
        z *= rhs._v;
        _v = (unsigned int)(z % umod());
        return *this;
    }
    mint& operator/=(const mint& rhs) { return *this = *this * rhs.inv(); }

    mint operator+() const { return *this; }
    mint operator-() const { return mint() - *this; }

    mint pow(long long n) const {
        assert(0 <= n);
        mint x = *this, r = 1;
        while (n) {
            if (n & 1) r *= x;
            x *= x;
            n >>= 1;
        }
        return r;
    }

    friend mint operator+(const mint& lhs, const mint& rhs) {
        return mint(lhs) += rhs;
    }
    friend mint operator-(const mint& lhs, const mint& rhs) {
        return mint(lhs) -= rhs;
    }
    friend mint operator*(const mint& lhs, const mint& rhs) {
        return mint(lhs) *= rhs;
    }
    friend mint operator/(const mint& lhs, const mint& rhs) {
        return mint(lhs) /= rhs;
    }
    friend bool operator==(const mint& lhs, const mint& rhs) {
        return lhs._v == rhs._v;
    }
    friend bool operator!=(const mint& lhs, const mint& rhs) {
        return lhs._v != rhs._v;
    }
    friend ostream& operator<< (ostream& out, const mint& x) {
        out << x.val();
        return out;
    }
};
using mint = Modint<998244353>;

constexpr int N = 60;

mint c[N + 1][N + 1];
auto init_comb = []() {
    for (int i = 1; i <= N; ++i) {
        c[i][0] = c[i][i] = 1;
        for (int j = 1; j < i; ++j)
            c[i][j] = c[i-1][j] + c[i-1][j-1];
    }
    return 0;
} ();

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int _; cin >> _;
    mint a[N], b[N];
    a[2] = 1, b[2] = 0;
    for (int i = 4; i <= N; i += 2) {
        a[i] = c[i-1][i/2-1] + b[i-2];
        b[i] = c[i][i/2] - a[i] - 1;
    }
    while (_--) {
        int n; cin >> n;
        cout << a[n] << ' ' << b[n] << " 1\n";
    }
    return 0;
}