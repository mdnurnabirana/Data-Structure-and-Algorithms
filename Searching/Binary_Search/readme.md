## Binary Search

Binary Search is a searching algorithm used on a sorted array by repeatedly dividing the search interval in half.

![Binary Search Illustration](binary_search.gif)

**Conditions to apply binary search:**

- The data structure must be sorted.
- Access to any element of the data structure takes constant time.

### Complexity Analysis of Binary Search

**Time Complexity:**

- **Best Case:** O(1)
- **Worst Case:** O(log N)
- **Average Case:** O(log N)

**Space Complexity:**

- **Auxiliary Space:** O(1)

**Advantages of Binary Search:**

- Faster than linear search.
- More efficient than other searching algorithms.
- Well-suited for searching large datasets stored in external memory (e.g., hard drives or cloud storage).

**Drawbacks of Binary Search:**

- The data structure should be sorted in contiguous memory locations.
- The elements must be comparable (able to be ordered).
