# Queue Operations 

## Overview
This README provides detailed descriptions of the queue operations you can perform. A queue is a linear data structure that follows the First In First Out (FIFO) principle, meaning the first element added is the first one to be removed. The operations covered include Enqueue(), Dequeue(), isEmpty(), isFull(), count(), and display().

## Queue Operations

### Enqueue(item)
Adds an item to the end of the queue.
- *Parameters:* 
  - item: The item to be added to the queue.
- *Returns:* None
- *Description:* This method places the specified item at the end of the queue. If the queue is already full, an appropriate error or exception is raised.

### Dequeue()
Removes and returns the front item from the queue.
- *Parameters:* None
- *Returns:* The item removed from the front of the queue.
- *Description:* This method removes the item at the front of the queue and returns it. If the queue is empty, an appropriate error or exception is raised.

### isEmpty()
Checks if the queue is empty.
- *Parameters:* None
- *Returns:* True if the queue is empty, False otherwise.
- *Description:* This method checks whether the queue contains any items. If there are no items in the queue, it returns True; otherwise, it returns False.

### isFull()
Checks if the queue is full.
- *Parameters:* None
- *Returns:* True if the queue is full, False otherwise.
- *Description:* This method checks whether the queue has reached its maximum capacity. If the queue is full, it returns True; otherwise, it returns False.

### count()
Returns the number of items in the queue.
- *Parameters:* None
- *Returns:* The number of items in the queue.
- *Description:* This method returns the total number of items currently present in the queue.

### display()
Displays all items in the queue.
- *Parameters:* None
- *Returns:* A list of items in the queue.
- *Description:* This method returns a list of all items currently in the queue, providing a way to see the current state of the queue.

## Example Usage
Here's an example of how these queue operations might be used in practice:

1. *Initialize the Queue*
   - Create a queue with a specified size.
2. *Enqueue Items*
   - Add items to the queue using the Enqueue() method.
3. *Dequeue Items*
   - Remove the front item from the queue using the Dequeue() method.
4. *Check if Empty*
   - Use the isEmpty() method to check if the queue is empty.
5. *Check if Full*
   - Use the isFull() method to check if the queue is full.
6. *Count Items*
   - Use the count() method to get the number of items in the queue.
7. *Display the Queue*
   - Use the display() method to view all items in the queue.

This README provides a clear understanding of the queue operations and their purposes. Make sure to handle any potential errors or exceptions, especially when performing operations on an empty or full queue.
