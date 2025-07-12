# Hashing in DSA

Hashing is a technique used to map data of arbitrary size to fixed-size values, called hash values or hash codes, using a hash function. In Data Structures and Algorithms (DSA), hashing is commonly used to implement efficient data retrieval, such as in hash tables or hash maps.

## Key Points

- **Hash Function:** Converts input (key) into a fixed-size integer (hash code).
- **Hash Table:** A data structure that stores key-value pairs and uses a hash function to compute an index for storing data.
- **Collision:** When two keys produce the same hash code. Common collision resolution techniques are chaining and open addressing.

## Example

- Storing and searching data in a hash table (like a dictionary or map) for fast access.

Hashing allows for average-case constant time complexity, O(1), for search, insert,

## What is a Key in Hashing?

A **key** in hashing is the unique identifier or value used as input to the hash function. The hash function processes the key to generate a hash code, which determines where the associated data (value) will be stored in the hash table. Each key should ideally be unique to avoid collisions.

**Example:**  
In a dictionary storing student records, the student roll number can be used as the key to quickly access

## What is Separate Chaining in Hashing?

**Separate chaining** is a collision resolution technique used in hashing. When two or more keys hash to the same index in a hash table (a collision), separate chaining handles this by maintaining a linked list (or another data structure) at each index. All elements that hash to the same index are stored in this list.

example of same index:
12 % 10 == 2
22 % 10 == 2

### How it works

- Each slot in the hash table points to a linked list.
- When a collision occurs, the new element is added to the end of the list at that index.
- Searching involves traversing the list at the hashed index.

**Example:**  
If keys 5 and 15 both hash to index 0, both will be stored in a linked list at index 0.

**Advantage:**  
It is simple to implement and can handle an unlimited number of collisions

## What is Open Addressing in Hashing?

**Open addressing** is another collision resolution technique used in hashing. When a collision occurs (i.e., two keys hash to the same index), open addressing searches for the next available slot in the hash table according to a specific probing sequence.

### How it works

- If the hashed index is occupied, the algorithm probes (checks) other slots in the table until an empty slot is found.
- The most common probing methods are:
  - **Linear Probing:** Check the next slot (index + 1, index + 2, ...).

  ## Linear Probing Example

Suppose we have a hash table of size 7 and the hash function is `h(key) = key % 7`.  
We want to insert the keys: 10, 20, 15, 7.

### Step-by-step Insertion

1. **Insert 10:**  
   `10 % 7 = 3`  
   Place 10 at index 3.

2. **Insert 20:**  
   `20 % 7 = 6`  
   Place 20 at index 6.

3. **Insert 15:**  
   `15 % 7 = 1`  
   Place 15 at index 1.

4. **Insert 7:**  
   `7 % 7 = 0`  
   Place 7 at index 0.

Now, if we try to insert **17**:  
`17 % 7 = 3` (index 3 is already occupied by 10)  
Linear probing checks the next index (4), which is empty, so 17 is placed at index 4.

### Final Hash Table

| Index | Value |
|-------|-------|
|   0   |   7   |
|   1   |  15   |
|   2   |       |
|   3   |  10   |
|   4   |  17   |
|   5   |       |
|   6

- **Quadratic Probing:** Check slots at intervals of 1², 2², 3², etc.

## Quadratic Probing Example

Suppose we have a hash table of size 7 and the hash function is `h(key) = key % 7`.  
We want to insert the keys: 10, 20, 15, 7, 17 using **quadratic probing**.

Quadratic probing formula:  
If a collision occurs at index `h`, try `(h + 1^2) % 7`, `(h + 2^2) % 7`, `(h + 3^2) % 7`, etc.

### Step-by-step Insertion

1. **Insert 10:**  
   `10 % 7 = 3`  
   Place 10 at index 3.

2. **Insert 20:**  
   `20 % 7 = 6`  
   Place 20 at index 6.

3. **Insert 15:**  
   `15 % 7 = 1`  
   Place 15 at index 1.

4. **Insert 7:**  
   `7 % 7 = 0`  
   Place 7 at index 0.

5. **Insert 17:**  
   `17 % 7 = 3` (index 3 is occupied by 10)  
   Try `(3 + 1^2) % 7 = 4` (index 4 is empty)  
   Place 17 at index 4.

### Final Hash Table

| Index | Value |
|-------|-------|
|   0   |   7   |
|   1   |  15   |
|   2   |       |
|   3   |  10   |
|   4   |  17   |
|   5   |   20  |

- **Double Hashing:** Use a second hash function to determine the step size for probing.

## Double Hashing Example

Suppose we have a hash table of size 7.  
Primary hash function: `h1(key) = key % 7`  
Secondary hash function: `h2(key) = 5 - (key % 5)`  
We want to insert the keys: 10, 20, 15, 7, 17 using **double hashing**.
_______________________________________________________________________
Formula: h(k, i) = (h1(k) + i*h2(k))%h
This formula is used in **double hashing**, a collision resolution technique in hashing.

- `h(k, i)` gives the index to probe for the `i`th attempt to insert/search the key `k`.
- `h1(k)` is the primary hash function (e.g., `key % table_size`).
- `h2(k)` is the secondary hash function (e.g., `R - (key % R)`, where `R` is a prime less than table size).
- `i` is the probe number (starting from 0).
- `% h` ensures the index wraps around within the table size.

**Purpose:**  
When a collision occurs, double hashing uses this formula to find the next available slot in the hash table, reducing clustering and improving performance compared to linear or quadratic
_______________________________________________________________________

### Step-by-step Insertion

1. **Insert 10:**  
   `h1(10) = 10 % 7 = 3`  
   Index 3 is empty, place 10 at index 3.

2. **Insert 20:**  
   `h1(20) = 20 % 7 = 6`  
   Index 6 is empty, place 20 at index 6.

3. **Insert 15:**  
   `h1(15) = 15 % 7 = 1`  
   Index 1 is empty, place 15 at index 1.

4. **Insert 7:**  
   `h1(7) = 7 % 7 = 0`  
   Index 0 is empty, place 7 at index 0.

5. **Insert 17:**  
   `h1(17) = 17 % 7 = 3` (index 3 is occupied by 10)  
   `h2(17) = 5 - (17 % 5) = 5 - 2 = 3`  
   Next index: `(3 + 3) % 7 = 6` (index 6 is occupied by 20)  
   Next index: `(6 + 3) % 7 = 2` (index 2 is empty)  
   Place 17 at index 2.

### Final Hash Table

| Index | Value |
|-------|-------|
|   0   |   7   |
|   1   |  15   |
|   2   |  17   |
|   3   |  10   |
|   4   |       |

2.Example:

## Double Hashing Example with Keys: 27, 43, 692, 72

Suppose we have a hash table of size 7.  
Primary hash function: `h1(key) = key % 7`  
Secondary hash function: `h2(key) = 5 - (key % 5)`

Let's insert the keys: **27, 43, 692, 72**

### Step-by-step Insertion

1. **Insert 27:**  
   `h1(27) = 27 % 7 = 6`  
   Index 6 is empty, place 27 at index 6.

2. **Insert 43:**  
   `h1(43) = 43 % 7 = 1`  
   Index 1 is empty, place 43 at index 1.

3. **Insert 692:**  
   `h1(692) = 692 % 7 = 6` (index 6 is occupied by 27)  
   `h2(692) = 5 - (692 % 5) = 5 - 2 = 3`  
   First probe: `(6 + 1*3) % 7 = (6 + 3) % 7 = 2`  
   Index 2 is empty, place 692 at index 2.

4. **Insert 72:**  
   `h1(72) = 72 % 7 = 2` (index 2 is occupied by 692)  
   `h2(72) = 5 - (72 % 5) = 5 - 2 = 3`  
   First probe: `(2 + 1*3) % 7 = (2 + 3) % 7 = 5`  
   Index 5 is empty, place 72 at index 5.

### Final Hash Table

| Index | Value |
|-------|-------|
|   0   |       |
|   1   |  43   |
|   2   |  692  |
|   3   |       |
|   4   |       |
|   5   |  72   |

**Example:**  
If key 5 hashes to index 0, but index 0 is occupied, linear probing will check index 1, then index 2, and so on, until an empty slot is found.

**Advantage:**  
Open addressing does not require extra memory for linked lists and keeps all data within
