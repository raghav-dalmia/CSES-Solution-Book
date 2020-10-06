################################################
#                                              #
#   author: raghav_0901 (Raghav Dalmia)        #
#   updated on: 06-10-2020, 11:44:19 pm IST   #
#                                              #
################################################

from math import *

if __name__ == "__main__":
    s = input()
    n = len(s)
    dp = [0]

    i, j = 0, 1
    while(j < n):
        if(s[i] == s[j]):
            dp.append(i + 1)
            i = i + 1
            j = j + 1
        else:
            if(i == 0):
                dp.append(0)
                j = j + 1
            else:
                i = dp[i - 1]

    i, ans = n - 1, []
    while(i > 0 and dp[i] > 0):
        ans.append(dp[i])
        i = dp[i] - 1

    ans.sort()
    for i in ans:
        print(i, end=" ")
