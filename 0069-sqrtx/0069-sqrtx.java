class Solution {
    public int mySqrt(int x) {
        long start=1;
        long last=x;
        long ans=0;
        while(start<=last)
        {
            long mid=start+(last-start)/2;
            if(mid*mid==x)
            {
                return (int)mid;
            }
            else
                if(mid*mid<x)
                {
                    start=mid+1;
                    ans=mid;
                }
            else
            {
                last=mid-1;
            }
        }
        return (int)(ans);
    }
}