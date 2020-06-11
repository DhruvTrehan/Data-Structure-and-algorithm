# Data-Structure-and-algorithm
In this repository, I would be sharing a daily byte regarding Data Structure and Algorithm. I would be discuss the code and algorithm to learn along with the community 
# Linked List 
Linked List is a linear collection of the data elements. It is data structure consisting of collection of nodes which together represents the sequence. Each node consists of:
o	Data 
o	Reference (Address to next node) 
 
<h2>Features of Linked List</h2>

 •	Structure of Linked List allows the efficient insertion or removal of an element at any position

 •	Access time is linear in Linked List
 
 •	Random access is not feasible in Linked List 
 
 •	Arrays have better cache locality compared to Linked List 

<b>Cache Locality(Locality of Reference or Principal of Locality)</b>

Tendency of a processor to access same set of memory location repetitively over a shorter period of a time. 

<h2>Benefit of a Linked List over an array.</h2> 

The list items could be easily removed or re-inserted without any reallocation or reorganization of an entire structure because data items could not be restored contiguously. 
In the disk, while restructuring in an array is a long process. Linked List are dynamic, so the length of the list can be increased or decreased depending upon situation. However, the length of the array remains same as that at the time of deceleration and cannot be changed. 

<h2> Insertion in the Linked List </h2>

Insertion in the Linked List, is a proccess of adding elements in the Linked List. Insertion in the Linked List is of three types:

1. Insert at Head 

2. Insert at Tail 

3. Insert in Middle 

<h2> Deletion in the Linked List </h2>

Deletion in the Linked List, is a process of removing the elements from the Linked List. Deletion is of three types:

1. Deletion at the Head 

2. Deletion at the Tail 

3. Deletion in the Middle 

<h2> Searching in the Linked List </h2>

Searching , is a process of Searching elements in the Linked List. Search could be done by:
 
 1. Iteration 
 
 2. Recursion 
 
 <h2> Reversing the Linked List </h2> 
 
 Reversing, is a process of changing the order of elements in the linked list. Reversing is done by:
 
 1. Iteration 
 
 2. Recursion 
 
 <h2> Operator Overloading in the Linked List </h2>
 
 Operator overloading, is a process of overloading in order to perform specific operation in the list. 
 
 <h2> Printing the Linked List </h2> 
 
 A special customized loop is setup, to print up the elements in the linked list and print the value in it till NULL is reached. 
 
 <h2> Why Merge Sort is preffered for Linked List </h2>
 
 The reason behind this is:
 
 1. The complexity of the Merge sort remain as that of O(nlogn) despite the fact that, we find the mid-point in the Linked List 
 
 2. In Linked List, we can insert a node in between in O(1) time and space complexity ; if we are given reference to the previous node 
 
 3. We do not have random access to elements in the Linked List 
 
 4. Linked List follows sequential pattern, while reffering to any node. So, that could be a overhead for quick sort. Merge sort access the data sequentially. 
 
 
