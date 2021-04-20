<h1 align="center">
    0x1E. C - Search Algorithms
</h1>

## 🧐 Learning Objects

- **What is a search algorithm**
- **What is a linear search**
- **What is a binary search**
- **What is the best search algorithm to use depending on your needs**

## 📝 FILES

<table>
<thead>
<tr>
  <th>TASK</th>
  <th>Directory</th>
  <th>Description</th>
</tr>
</thead>
<tbody>
<tr>
  <td></td>
  <td> README.md</td>
  <td>...<td>
</tr>
<tr>
  <td>0</td>
  <td>0-linear.c</td>
  <td>Write a function that searches for a value in an array of integers using the Linear search algorithm

    Prototype : int linear_search(int *array, size_t size, int value);
    Where array is a pointer to the first element of the array to search in
    size is the number of elements in array
    And value is the value to search for
    Your function must return the first index where value is located
    If value is not present in array or if array is NULL, your function must return -1
    Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

   </td>
</tr>
<tr>
  <td>1</td>
  <td>1-binary.c</td>
  <td>Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

    Prototype : int binary_search(int *array, size_t size, int value);
    Where array is a pointer to the first element of the array to search in
    size is the number of elements in array
    And value is the value to search for
    Your function must return the index where value is located
    You can assume that array will be sorted in ascending order
    You can assume that value won’t appear more than once in array
    If value is not present in array or if array is NULL, your function must return -1
    You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

</td>
</tr>
<tr>
  <td>2</td>
  <td>2-O</td>
  <td> What is the time complexity (worst case) of a linear search in an array of size n?

</td>
</tr>
<tr>
  <td>3</td>
  <td>3-O</td>
  <td>What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

</td>
</tr>
<tr>
  <td>4</td>
  <td>4-O</td>
  <td>What is the time complexity (worst case) of a binary search in an array of size n?

</td>
</tr>
<tr>
  <td>5</td>
  <td>5-O</td>
  <td>What is the space complexity (worst case) of a binary search in an array of size n?
</td>
</tr>
<tr>
  <td>6</td>
  <td>6-O</td>
  <td>What is the space complexity of this function / algorithm?

    int **allocate_map(int n, int m)
    {
        int **map;

        map = malloc(sizeof(int *) * n);
        for (size_t i = 0; i < n; i++)
        {
              map[i] = malloc(sizeof(int) * m);
        }
        return (map);
    }

</td>
</tr>

</tbody>
</table>

## _BY_ @Giraluna1 <lunagolo@hotmail.com>
