class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long hours = 0;

            for (int bananas : piles) {
                hours += (bananas + mid - 1) / mid; // ceil division
            }

            if (hours <= h) {
                ans = mid;        // valid speed, try smaller
                high = mid - 1;
            } else {
                low = mid + 1;    // too slow, need faster
            }
        }
        return ans;
    }
};
