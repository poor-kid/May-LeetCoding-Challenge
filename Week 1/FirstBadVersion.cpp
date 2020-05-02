/*Given n = 5, and version = 4 is the first bad version.

call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true

Then 4 is the first bad version. */

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int left = 1,right=n;
        
        while(left<=right)
        {
            int mid = left+ (right-left)/2;
            if(isBadVersion(mid) && !isBadVersion(mid-1))
                return mid;
            else if(isBadVersion(mid) && isBadVersion(mid-1))
            {
                right = mid-1;
            }
            else
                left = mid+1;
        }
        return 0;
           
    }
};