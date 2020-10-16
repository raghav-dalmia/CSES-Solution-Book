# [Message Route](https://cses.fi/problemset/task/1667)
### Hint
* do **BFS** and store the prament of each node in an array, through which it is visited first time
* back traverse from **n<sup>th</sup>** to the **1<sup>th</sup>** node using parent array and save all the intermediate nodes
* since this the shortest path from **n<sup>th</sup>** to **1<sup>th</sup>** node, we have to reverse the array