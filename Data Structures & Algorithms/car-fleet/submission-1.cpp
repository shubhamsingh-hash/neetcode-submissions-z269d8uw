class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, double>> cars;

        for (int i = 0; i < n; i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }

        // Sort by position descending
        sort(cars.begin(), cars.end(), greater<>());

        int fleets = 0;
        double maxTime = 0;

        for (auto &car : cars) {
            if (car.second > maxTime) {
                fleets++;
                maxTime = car.second;
            }
        }
        return fleets;
    }
};
