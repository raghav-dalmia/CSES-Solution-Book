################################################
#                                              #
#   author: raghav_0901 (Raghav Dalmia)        #
#   updated on: 02-10-2020, 10:15:21 pm IST    #
#                                              #
################################################

from math import *

if __name__ == "__main__":
    n = int(input())
    while True:
        print(n, end=" ")
        if(n == 1):
            break
        n = ((n * 3) + 1 if(n % 2 == 1) else n // 2)

