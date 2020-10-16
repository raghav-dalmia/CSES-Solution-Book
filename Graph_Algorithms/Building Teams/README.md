# [Building Teams](https://cses.fi/problemset/task/1668)
### Hint
* Pick a starting node(which is currently unvisited) and assign it any team number
* Do **BFS** from that node and assign different value to it's child node
* if any point of time parent and children are visited and both have same value then answer is "IMPOSSIBLE"