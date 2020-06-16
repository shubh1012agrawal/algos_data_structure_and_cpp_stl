//Stack

stack<int> s;
s.push(1); // [1]
s.push(13); // [1, 13]
s.push(7); // [1, 13, 7]
cout << s.top() << endl; // 7
s.pop(); // [1, 13]
cout << s.size() << endl; // 2


// Queue

queue<int> q;
q.push(1); // [1]
q.push(3); // [3, 1]
q.push(4); // [4, 3, 1]  // might be opposite
q.pop(); // [4, 3]
cout << q.front() << endl; // 3

/* Deques
A deque (usually pronounced “deck”) stands for double ended queue and is a combination
of a stack and a queue, in that it supports O(1) insertions and deletions from both the
front and the back of the deque. The four methods for adding and removing are push_back,
pop_back, push_front, and pop_front.
*/
deque<int> d;
d.push_front(3); // [3]
d.push_front(4); // [4, 3]
d.push_back(7); // [4, 3, 7]
d.pop_front(); // [3, 7]
d.push_front(1); // [1, 3, 7]
d.pop_back(); // [1, 3]

/*Priority Queues
A priority queue supports the following operations: insertion of elements, deletion of
the element considered highest priority, and retrieval of the highest priority element, all in
O(log n) time according to the number of elements in the priority queue. Priority is based on
a comparator function, but by default the lowest element is at the front of the priority queue.
The priority queue is one of the most important data structures in competitive programming,
so make sure you understand how and when to use it. By default, the C++ Priority Queue
puts the highest element at the front of the queue.*/

priority_queue<int> pq;
pq.push(7); // [7]
pq.push(2); // [2, 7]
pq.push(1); // [1, 2, 7]
pq.push(5); // [1, 2, 5, 7]
cout << pq.top() << endl; // 7
pq.pop(); // [1, 2, 5]
pq.pop(); // [1, 2]
pq.push(6); // [1, 2, 6]

