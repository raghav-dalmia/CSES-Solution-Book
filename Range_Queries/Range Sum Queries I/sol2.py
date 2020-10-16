################################################
#                                              #
#   author: raghav_0901 (Raghav Dalmia)        #
#   updated on: 16-10-2020,  3:38:46 pm IST    #
#                                              #
################################################

from math import *


def _in():
    return [int(x) for x in input().split(' ')]


def getSum(ftree, ind):
    if(ind < 0):
        return 0
    ind = ind + 1
    ans = 0
    while(ind > 0):
        ans = ans + ftree[ind]
        ind = ind - (ind & (-ind))
    return ans


def constructFT(n, arr):
    ftree = [0] * (n + 1)

    for i in range(0, n):
        ind = i + 1
        while(ind <= n):
            ftree[ind] += arr[i]
            ind = ind + (ind & (-ind))
    return ftree


if __name__ == "__main__":
    n, q = _in()
    arr = _in()

    ftree = constructFT(n, arr)

    for i in range(q):
        l, r = _in()
        ans = getSum(ftree, r - 1) - getSum(ftree, l - 2)
        print(ans)