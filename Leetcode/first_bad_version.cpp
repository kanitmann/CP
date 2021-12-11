// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        long low = 1, high = 1, mid;
        bool ret;

        /// Find upper bound [k]
        while (high <= n && !isBadVersion(high))
        {
            low = high;
            high *= 2;
        }

        /// Search for first bad version within range [k-1] --> [k]
        while (low <= high)
        {
            mid = (low + high) / 2;
            ret = isBadVersion(mid);

            if (ret)
                high = mid - 1;
            else
                low = mid + 1;
        }

        /// Return casted index
        return static_cast<int>(low);
    }
};