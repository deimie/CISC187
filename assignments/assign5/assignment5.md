#### TASK 3 - With the help of a figure, explain the problem that occured due to introducing a tombstone to mark the deleted cell.
![Screenshot 2025-03-06 160715](https://github.com/user-attachments/assets/7a7711ff-97d5-40c5-a471-1e5d2e229c53)

The main problem with introducing tombstones to mark a deleted cell is that a tombstone still takes up a memory index. When a search is performed, the hashed index must be iterated over during the search, even though there is no data beind held at that index anymore. This slows down search algorithms in environments where lots of insertions/deletions are occuring.
