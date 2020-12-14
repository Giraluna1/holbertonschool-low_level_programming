#  DOUBLY LINKED LIST
This project you find several task to learn program with python about this topics:

- Handling Doubly linkked lists

## **FILES**
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
  <td>0-print_dlistint.c</td>
  <td>Write a function that prints all the elements of a dlistint_t list.

   - Prototype: size_t print_dlistint(const dlistint_t *h);
   - Return: the number of nodes
   </td>	
</tr>
<tr>
  <td>1</td>
  <td>1-dlistint_len.c</td>
  <td>Write a function that returns the number of elements in a linked dlistint_t list.

   - Prototype: size_t dlistint_len(const dlistint_t *h);
</td>
</tr>
<tr>
  <td>2</td>
  <td>2-add_dnodeint.c</td>
  <td>Write a function that adds a new node at the beginning of a dlistint_t list.

   - Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
   - Return: the address of the new element, or NULL if it failed
</td>
</tr>
<tr>
  <td>3</td>
  <td>3-add_dnodeint_end.c</td>
  <td>Write a program that prints the result of the addition of all arguments

   - The output should be the result of the addition of all arguments, followed by a new line
   - You can cast arguments into integers by using int() (you can assume that all arguments can be casted into integers)
   - Your code should not be executed when imported
</td>
</tr>
<tr>
  <td>4</td>
  <td>4-free_dlistint.c</td>
  <td>Write a function that frees a dlistint_t list.

   - Prototype: void free_dlistint(dlistint_t *head);
</td>
</tr>
<tr>
  <td>5</td>
  <td>5-get_dnodeint.c</td>
  <td>Write a function that returns the nth node of a dlistint_t linked list.

   - Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
   - where index is the index of the node, starting from 0
   - if the node does not exist, return NULL

</td>
</tr>
<tr>
  <td>6</td>
  <td>6-sum_dlistint.c</td>
  <td>Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

    Prototype: int sum_dlistint(dlistint_t *head);
    if the list is empty, return 0
</td>
</tr>
<tr>
  <td>7</td>
  <td>7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c</td>
  <td>Write a function that inserts a new node at a given position.

   - Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
   - where idx is the index of the list where the new node should be added. Index starts at 0
   - Returns: the address of the new node, or NULL if it failed
   - if it is not possible to add the new node at index idx, do not add the new node and return NULL

Your files 2-add_dnodeint.c and 3-add_dnodeint_end.c will be compiled during the correction
</td>
</tr>
<tr>
  <td>8</td>
  <td>8-delete_dnodeint.c</td>
  <td>Write a function that deletes the node at index index of a dlistint_t linked list.

   - Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
   - where index is the index of the node that should be deleted. Index starts at 0
   - Returns: 1 if it succeeded, -1 if it failed

</td>
</tr>
</tbody>
</table>

### _By Giraluna Gomez_