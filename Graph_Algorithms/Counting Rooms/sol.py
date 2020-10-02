################################################
#                                              #
#   author: raghav_0901 (Raghav Dalmia)        #
#   updated on: 03-10-2020,  1:40:05 am IST    #
#                                              #
################################################
 
from math import *
 
 
def _in():
    return [int(x) for x in input().split(' ')]
 
 
mov = ((1, 0), (-1, 0), (0, 1), (0, -1))
 
 
def valid(r, c):
    return (r >= 0 and r < n and c >= 0 and c < m)
 
 
def dfs(r, c):
    vis[r][c] = True
    for (x, y) in mov:
        nr = r + x
        nc = c + y
        if(valid(nr, nc) and vis[nr][nc] == False and arr[nr][nc] == '.'):
            dfs(nr, nc)
 
 
if __name__ == "__main__":
    global n, m, arr, vis
    n, m = _in()
    arr, vis = [], []
    for _ in range(n):
        s = input()
        arr.append(s)
        vis.append([False] * m)
    ans = 0
    for i in range(n):
        for j in range(m):
            if(vis[i][j] == False and arr[i][j] == '.'):
                ans = ans + 1
                dfs(i, j)
    print(ans)
