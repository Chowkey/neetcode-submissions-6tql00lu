class Solution {
public:
    vector<int> v;

    Solution() : v(100, 0) {}

int climbStairs(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    if (v[n] != 0) return v[n];

    v[n] = climbStairs(n-1) + climbStairs(n-2);
    return v[n];
}
};
