################################################
#                                              #
#   author: raghav_0901 (Raghav Dalmia)        #
#   updated on: 03-10-2020,  1:05:03 am IST    #
#                                              #
################################################

from math import *

if __name__ == "__main__":
    n = int(input())
    arr = [int(x) for x in input().split(' ')]
    dp = [0] * (n + 1)
    ans, mi, dp[1] = 1, arr[0], arr[0]
    for i in range(1, n):
        if(arr[i] > dp[ans]):
            ans = ans + 1
            dp[ans] = arr[i]
        elif(mi > arr[i]):
            mi = dp[1] = arr[i]
        else:
            s, e = 1, ans
            while(s <= e):
                mid = (s + e) // 2
                if(dp[mid] <= arr[i]):
                    s = mid + 1
                else:
                    e = mid
                if(s == e):
                    break
            if(dp[s - 1] < arr[i]):
                dp[s] = min(dp[s], arr[i])
    print(ans)
