# sort-method-in-c
The process of Sorting can be explained as a technique of rearranging the elements in any particular order, which can be set ready for further processing by the program logic. In C programming language, there are multiple sorting algorithms available, which can be incorporated inside the code. The various types of sorting methods possible in the C language are Bubble sort, Selection sort, Quick sort and Insertion sort.

## Types of Sorting in C
| Method         | Worst-case | Best-case | Performance | Space complexity | Note | Code |
|----------------|------------|-----------|-------------|------------------|------|------|
| Bubble sort    |    O(n^2)   |     O(n)      |      Stable       |        O(1)          |   n小比較好。   |      |
| Selection sort |     O(n^2)       |    O(n)        |     Unstable        |      O(1)            |   n小較好，部份排序好更好。   |      |
| Insertion sort |     O(n^2)       |     O(n)       |      Stable       |        O(1)          |   大部份排序好比較好。   |      |
| Quick sort     |     O(n^2)       |     ![](https://i.imgur.com/ysLLVz5.png)      |    Unstable         |       O(n)~O(log n)      |   在資料已排序好時會產生最差狀況。   |      |