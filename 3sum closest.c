
int threeSumClosest(int* nums, int numsSize, int target)
{
    
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = 0; j < numsSize - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    int closest = nums[0] + nums[1] + nums[2];

    
    for (int i = 0; i < numsSize - 2; i++)
    {
        int l = i + 1;
        int r = numsSize - 1;

        
        while (l < r)
        {
            int sum = nums[i] + nums[l] + nums[r];

            int diff = target - sum;
            int bestDiff = target - closest;

            if (diff < 0)
                diff = -diff;

            if (bestDiff < 0)
                bestDiff = -bestDiff;

            if (diff < bestDiff)
                closest = sum;

            if (sum == target)
                return sum;
            else if (sum < target)
                l++;
            else
                r--;
        }
    }

    return closest;
}
