class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        int cur = 0;
        while (cur < n && height[cur] == 0)
            cur++;

        if (cur == n) return 0;

        int area = 0;

        while (cur < n - 1) {
            int next = -1;      // first bar >= height[cur]
            int maxIdx = cur + 1; // tallest bar to the right

            // Scan to the right
            for (int i = cur + 1; i < n; i++) {
                if (height[i] >= height[cur]) {
                    next = i;
                    break;
                }
                if (height[i] > height[maxIdx]) {
                    maxIdx = i;
                }
            }

            // If no bar is tall enough, use the tallest one to the right
            int h = (next != -1) ? next : maxIdx;

            // If no progress can be made, stop
            // if (h <= cur) break;

            // Compute trapped water between cur and h
            int water = std::min(height[cur], height[h]) * (h - cur - 1);

            for (int i = cur + 1; i < h; i++) {
                water -= height[i];
            }

            if (water > 0)
                area += water;

            // Move to the next boundary
            cur = h;
        }

        return area;
    }
};