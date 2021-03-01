# Repository of CSE-330 when I took the class at my University

# CSE-330 - Data Structures
Course Description: Abstract data structures including lists, stacks, queues and trees; their storage allocation and associated application algorithms.


# Homework

## **Homework 1:**

Complete the ADT Vector implementation from Lab02 and add the following two functions to the Vector class:

    1. Member function void erase(int k){…} which removes the element at index k.
    2. Member function void insert(int k, T x){…} which inserts the new element x at index k. (The element that is at index k prior to insertion, as well as all other elements at higher-numbered indices are to move one position to the right.)


## **Homework 3:**

For this homework, you will be filling the missing code into the following member functions of class iterator (within class BinarySearchTree):

*bool is_root(BinaryNode * t)*

       - returns true when t is a pointer to the BinaryNode that is the “root”; the root is the only BinaryNode that has nullptr as its parent;

*bool is_left_child(BinaryNode * t)*

    - returns true when t is a pointer to a BinaryNode that is the left child of its parent; test whether t’s parent’s left child is the same as t;

*bool is_right_child(BinaryNode * t)*

    - analogous to is_left_child;

*BinaryNode * leftmost(BinaryNode * t)*

    - starting at t, follow the left children and return a pointer to the deepest leftmost child;

*BinaryNode * follow_parents_until_leftchild(BinaryNode * t)*

    - starting at t, follow the parent links upwards until a BinaryNode is reached which is a left child; return a pointer to this left child’s parent;

## **Homework 4:**

In this assignment, you will be comparing the algorithm performances of TreeSort and HeapSort. Both algorithm have the data values stored in a binary tree structure; one uses a binary search tree, the other uses a binary heap. Both algorithms share an average computational complexity of O(N log N) in the “best” and “average” cases. Yet they are different … as you will demonstrate in this assignment.


# LABS

## **Lab 1:**

*Exercise 1:* Write a C++ program that will take a positive integer N as input and then print out a matrix of the following sort:
For input 8:
```
1 _ _ _ _ _ _ _
_ 2 _ _ _ _ _ _
_ _ 3 _ _ _ _ _
_ _ _ 4 _ _ _ _
_ _ _ _ 5 _ _ _
_ _ _ _ _ 6 _ _
_ _ _ _ _ _ 7 _
_ _ _ _ _ _ _ 8
```

*Exercise 2:* If your solution to Exercise 1 is code that is wrapped within “one big main()”, unravel your program by having a function print out the matrix. Modify your main() function so that it uses the new function.

*Exercise 3:* Define and implement a class SquareNumber which represents only those numbers that are squares of integer values. Start your class with
```
class SquareNumber
{
public:
    SquareNumber():base(0){}
// … fill in …
private:
    int base;
};
```

## **Lab 2:**

This lab will have you do the hard labor of reproducing a C++ implementation of the Vector ADT. The implementation closely follows the one in Chapter 2 of Weiss, Data Structures and Algorithm Analysis in C++. However, the instructor made a few modifications:

- We will not use C++ exceptions at this time; instead, we will use assert statements from the <cassert> STL.
- We will write ‘<typename T>’ instead of ‘<typename Object>’.
- We will not (yet) implement “iterators” for Vector.

## **Lab 3:**

This lab will have you experience three algorithms that solve the same problem, but do so with markedly different computational complexities. The problem to solve is the “maximal subsequence sum” problem from our textbook (Weiss, DSAAC++) in chapter 2. A vector of arbitrary positive and negative integers is given. In this sequence of numbers the sum of values of any subsequence of contiguous values can be computed. The problem is to determine the maximal sum of this sort that can be computed for the given vector.

## **Lab 4:**

In this lab, you will be spared the laborious entry of the C++ code that implements the List ADT. However, you will be asked to extend class List with additional capabilities, and in doing so, you will familiarize yourself with the details of class List.
Start by obtaining a copy of the our text book author’s implementation of a doubly-linked list data structure.

- Obtain a copy of Weiss_Link.h from the instructor’s directory via the Linux ‘cp’ command.

## **Lab 5:**

In this lab you will implement the Binary Search algorithm and experience its efficient O(log n) performance for presorted vectors.

*Exercise 1:* Implement the binary search function from your textbook on p. 67 and add an additional reference parameter ‘int& steps’ which is counting up the costs associated with the iterations needed to find the target value. When the target is found in the vector, binary_search returns the index at which the target is stored; otherwise, the function returns value -1.

*Exercise 2:* Implement an analogous binary search function for linked lists. Use your own List.h data structure and add to class List a function List<T>∷nth(int, int&). You may use this one:

```
int nth(int k, int& steps) const
{
    steps = 0;
    if (k < 0 || k >= theSize)
        return -1;
    const_iterator itr = begin();
    if (k == 0)
    {
        steps++;
        return *itr;
    }
    for (int i = 1; i <=k; i++)
    {
        itr++;
        steps++;
    }
    return *itr;
}
```
## **Lab 6:**

In this lab, you will be implemeting the ADT called BinarySearchTree. This data stucture will provide us with an alternative to vectors and linked lists when it comes to storing a list of data values.

*Exercise 1:* Implement the BinarySearchTree ADT in a file BinarySearchTree.h exactly as shown below. As always, make an effort to copy mindfully, trying to understand the purpose of each line of code as you go along.

*Exercise 2:* Program your own file BinarySearchTreeMain.cpp in which your main() function will test the new data structure. Declare an instance of BinarySearchTree (short: BST) suitable to hold integer values. Then enter a random sequence of 25 integer values into the data structure (your values should NOT be in sorted order).
Use the print_Tree () member function in order to print out the values of the BST structure – What do you notice?
Next, remove 5 values from your BST and save them in a vector (use your own Vector.h or STL <vector>). Print out the reduced BST.

*Exercise 3:* Next add the following member function do your BinarySearchTree class:

Under public:

```
void printInternal()
{
    print_Internal(root,0);
}
```


Under private:

```
void printInternal(BinaryNode* t, int offset)
{
    if (t == nullptr)
        return;
        
    for(int i = 1; i ≤ offset; i++)
        cout ≪ “..”
        
    cout ≪ t->element ≪ endl;
    printInternal(t->left, offset + 1);
    printInternal(t->right, offset + 1);
}
```
Go back to your program BinarySearchTreeMain.cpp and change printTree to printInternal. Compile and run your program, and see what you get.
Next, insert the 5 value that have been removed back into the BST. Print the new BST with printInternal. How does this printed BST compare with the BST that the program printed befre the removal of 5 values? Same? Different? Explanation?

## **Lab 7:**

In this lab we will enhance our BinarySearchTree implementation with additional functionalities that are necessary in order to build the Set and Map data structures on top of binary search trees. Because these enhancements are fairly involved, this lab will be run in a more instruction-based “follow-the-leader” type manner. Follow the instructions and make sure you keep up. If you find that the pace is too fast, please speak up and we slow down …

## **Lab 8:**

In this lab we will implement the ADT Map in terms of a “set of pairs.” The Set ADT, in turn, is essentially a BinarySearchTree data structure with several modifications that are meant to support Map.

*Exercise 1:* Start by obtaining a copy of Set.h from the instructors Linux directory. In its current form, this file originates from our earlier BinarySearchTree.h.

Modify the insert() member functions (both, public (“external”) and private (“internal”) so that instead of void both functions will returen a iterator to the newly inserted item.

*Exercise 2:* Create a new header file Pair.h for a template Pair<K,V> as shown below.

*Exercise 3:* You are now ready to implement the ADT Map. Notice how it adapts a Set data structure of Pairs. Enter the following into a header file Map.h.

*Exercise 4:* Test your new Map data structure with an int main() test stub of your choice.
The test should include the entering of data items of some value type V, associated with keys of some other data type K. E.g.,

## **Lab 9:**

In this lab we will implement a class called BinaryHeap which will form (in some sense already “is”) the ADT PriorityQueue. You will have discussed the details of priority queue data structures in the lecture and you will have learned about the surprising fact that certain binary tree structures (“complete” binary trees) can be implemented in terms of linear vector. Naturally, if a hierarchical structure can be represented without the overhead of having to maintain special pointers to parent and child nodes, then this is the more efficient avenue to follow.

*Exercise 1:* Copy the code below into a file BinaryHeap.h. Notice that a choice was made to define the member functions with the larger bodies *outside* the scope of class BinaryHeap. It is good to practice this alternative layout of your C++ code, and some would say that moving the bulk of the function definitions outside of the class is preferred. Here, we will not argue, but simply explore this other way of doing things …

*Exercise 2:* Put our class BinaryHeap to the test by running the following int main(). Copy the following into a file BinaryHeapMain.cpp.

*Exercise 3:* It there is time left, enhance your program with the ability to print out the internal tree structure of an instance of Binary Heap. To this end, consider implementing a member function BinaryHeap<C>∷printHeap(). How would you do this? The task is has some analogy to the printing of the internal structure or BinarySearchTree …

## **Lab 10:**

In this lab you will implement and test three well known sorting algorithms: insertionSort, selectionSort, and mergeSort. The insertionSort and selectionSort algorithms are of computational complexity O(N2). Convince yourself of this fact when implementing the steps of the algorithm. These two algorithms are considered inefficient. The mergeSort algorithm is known as an efficient sorting algorithm with complexity O(N log N). Again, understand what accounts for the more efficient performance of mergeSort when you go through the steps of implementation.

*Exercise 1:* In a file Sort.h, implement all three sorting algorithms as template functions. You are allowed to use the STL data structure vector with ‘#include <vector>’. Proceed to “mindfully” copy the code below. Use your own judgment whether to copy or omit any of the lines of comment (/*…*/ or // …).

*Exercise 2:* Write your own test program in file SortMain.cpp which generates an unordered vector of 20 random integers and two copies of this vector. The program is to sort the first vector copy with insertionSort, the second vector copy with selection Sort, and the third copy with mergeSort. The test program should print the each vector pre- and post-sorting.
