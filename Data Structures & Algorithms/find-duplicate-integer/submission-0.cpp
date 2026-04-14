class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // 1️⃣ Phase 1: Detect cycle
        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // 2️⃣ Phase 2: Find cycle entry
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        // 3️⃣ Duplicate number
        return slow;
    }
};
