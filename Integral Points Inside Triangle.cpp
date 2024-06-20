// Back-end complete function Template for C++

class Solution {
  public:
    // utility function to find GCD of two numbers
    // GCD of a and b
    long long int gcd(long long int a, long long int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    // Finds the no. of Integral points between
    // two given points.
    long long int getBoundaryCount(long long int p[], long long int q[]) {
        // Check if line parallel to axes
        if (p[0] == q[0]) return abs(p[1] - q[1]) - 1;
        if (p[1] == q[1]) return abs(p[0] - q[0]) - 1;

        return gcd(abs(p[0] - q[0]), abs(p[1] - q[1])) - 1;
    }

    // Returns count of points inside the triangle
    long long int InternalCount(long long int p[], long long int q[],
                                long long int r[]) {
        // 3 extra integer points for the vertices
        long long int BoundaryPoints = getBoundaryCount(p, q) +
                                       getBoundaryCount(p, r) +
                                       getBoundaryCount(q, r) + 3;

        // Calculate 2*A for the triangle
        long long int doubleArea = abs(
            p[0] * (q[1] - r[1]) + q[0] * (r[1] - p[1]) + r[0] * (p[1] - q[1]));

        // Use Pick's theorem to calculate the no. of Interior points
        return (doubleArea - BoundaryPoints + 2) / 2;
    }
};
