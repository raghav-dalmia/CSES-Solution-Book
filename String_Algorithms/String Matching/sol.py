################################################
#                                              #
#   author: raghav_0901 (Raghav Dalmia)        #
#   updated on: 07-10-2020, 12:19:40 am IST    #
#                                              #
################################################

from math import *

if __name__ == "__main__":
    s, p = input(), input()
    n, m = len(s), len(p)
    dp = [0]

    i, j = 0, 1
    while(j < m):
        if(p[i] == p[j]):
            dp.append(i + 1)
            i = i + 1
            j = j + 1
        else:
            if(i == 0):
                dp.append(0)
                j = j + 1
            else:
                i = dp[i - 1]

    i, j, ans = 0, 0, 0
    while(i < n):
        if(s[i] == p[j]):
            i = i + 1
            j = j + 1
            if(j == m):
                ans = ans + 1
                j = dp[m - 1]
        else:
            if(j == 0):
                i = i + 1
            else:
                j = dp[j - 1]
    print(ans)
