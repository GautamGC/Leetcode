class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalDrunk = numBottles;
        while (numBottles >= numExchange) {
            numBottles -= (numExchange - 1);
            totalDrunk++;
        }
        return totalDrunk;
    }
};