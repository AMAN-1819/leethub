#include <vector>

class Solution {
public:
    std::vector<int> sortArray(std::vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }

private:
    void mergeSort(std::vector<int>& nums, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            mergeSort(nums, left, mid);
            mergeSort(nums, mid + 1, right);
            merge(nums, left, mid, right);
        }
    }

    void merge(std::vector<int>& nums, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;
        std::vector<int> leftPart(n1);
        std::vector<int> rightPart(n2);

        for (int i = 0; i < n1; ++i)
            leftPart[i] = nums[left + i];
        for (int j = 0; j < n2; ++j)
            rightPart[j] = nums[mid + 1 + j];

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (leftPart[i] <= rightPart[j]) {
                nums[k++] = leftPart[i++];
            } else {
                nums[k++] = rightPart[j++];
            }
        }

        while (i < n1) {
            nums[k++] = leftPart[i++];
        }

        while (j < n2) {
            nums[k++] = rightPart[j++];
        }
    }
};
