class Solution {
public:
    int firstBadVersion(int n) {
        int l=1,r=n,m=0;
        while(l<=r){
            m = (l+(r-l)/2);
            if(isBadVersion(m)){
                if( isBadVersion(m-1)==false)
                    return m;
                r=m-1;
            }
            else l = m+1;
        }
        return 0;

    }
};

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int mid = 0;
        
        while (low <= high) {
            mid = low +(high-low)/2;
            if (isBadVersion (mid)) {
                if (isBadVersion(mid-1) == false)
                    return mid;
                high = mid -1;
            } else
                low = mid +1;
        }
    return 0;
    }
};