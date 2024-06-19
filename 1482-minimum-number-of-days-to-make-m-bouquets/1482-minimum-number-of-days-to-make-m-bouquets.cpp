class Solution {
public:
    bool canMakeBouquets(vector<int> &flowers, int day, int requiredBouquets, int flowersPerBouquet) {
        int n = flowers.size();
        int flowersCount = 0;
        int bouquetCount = 0;
        for (int i = 0; i < n; i++) {
            if (flowers[i] <= day) {
                flowersCount++;
            } else {
                bouquetCount += (flowersCount / flowersPerBouquet);
                flowersCount = 0;
            }
        }
        bouquetCount += (flowersCount / flowersPerBouquet);
        return bouquetCount >= requiredBouquets;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalRequiredFlowers = m * 1ll * k * 1ll;
        int n = bloomDay.size();
        if (totalRequiredFlowers > n) {
            return -1; // Impossible case
        }
        int minDay = INT_MAX, maxDay = INT_MIN;
        for (int i = 0; i < n; i++) {
            minDay = min(minDay, bloomDay[i]);
            maxDay = max(maxDay, bloomDay[i]);
        }
        int low = minDay, high = maxDay;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (canMakeBouquets(bloomDay, mid, m, k)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
