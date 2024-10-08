# Experiment-9

# Aim:
To study and implement C++ Pointer basics

# Theory:

Pointers in C++ denote variables that hold the address of another variable in memory. They permit direct memory operation thus playing an essential role in specific programming tasks like dynamic storage allocation, matrices, and also developing complex data structures e.g. linked list and trees. A pointer gets declared when a data type is defined with the sign ‘*’ before writing down the name of the pointer itself after it. This indicates what kind of variable does this point towards. The & operator used delivers a variable’s physical location in a computer’s storage space. This operator can retrieve or reference what is held by an address number which is stored within its range. This means that dereferencing enables one to read as well as alter certain values belonging to that particular place you arrived at pointing still added onto them. Pointers can get lengthened or shortened so as they lead to areas right above ours or below depending on whatever you want them to do with your pointers; particularly amid arrangements involving arrays where these may become more useful by calling upon different addresses thereby traversing through all their parts simultaneously.
Here’s the algorithm for the code you provided, which demonstrates the use of pointers in C++:

### Algorithm to Demonstrate Pointer Usage

1. **Initialize a Variable**:
   - Create an integer variable `a` and assign it a value (e.g., `10`).

2. **Declare a Pointer**:
   - Declare a pointer `aptr` that will point to an integer.

3. **Assign Address to Pointer**:
   - Assign the address of variable `a` to `aptr` using the address-of operator (`&`).

4. **Display Address**:
   - Print the address of `a` using `&a`.
   - Print the address stored in `aptr` (which should be the same as `&a`).

5. **Dereference Pointer**:
   - Print the value pointed to by `aptr` using the dereference operator (`*`).
Here’s the algorithm for the code you provided, which demonstrates the use of multiple data types and pointer arithmetic in C++:

### Algorithm to Demonstrate Pointers and Pointer Arithmetic

1. **Initialize Variables**:
   - Create an integer `a` and assign it a value (e.g., `10`).
   - Create a float `b` and assign it a value (e.g., `2.4`).
   - Create a char `c` and assign it a value (e.g., `'a'`).
   - Create a boolean `d` and assign it a value (e.g., `true`).

2. **Declare Pointers**:
   - Declare pointers for each variable type:
     - `int *aptr`
     - `float *bptr`
     - `char *cptr`
     - `bool *dptr`

3. **Assign Addresses to Pointers**:
   - Assign the address of each variable to its corresponding pointer:
     - `aptr = &a`
     - `bptr = &b`
     - `cptr = &c`
     - `dptr = &d`

4. **Display Addresses**:
   - Print the addresses of each variable using the address-of operator (`&`) and cast `cptr` to `void*` for proper output formatting.

5. **Pointer Arithmetic**:
   - Increment each pointer to point to the next memory location:
     - `aptr++`
     - `bptr++`
     - `cptr++`
     - `dptr++`

6. **Display Incremented Addresses**:
   - Print the new addresses of each pointer after incrementing.

