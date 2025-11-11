class Node {
  constructor(data) {
    this.data = data;
    this.prev = null;
    this.next = null;
  }
}

class DoublyLinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
  }
  push(data) {
    const newNode = new Node(data);
    if (this.head === null) {
      this.head = newNode;
      this.tail = newNode;
    } else {
      this.tail.next = newNode;
      newNode.prev = this.tail;
      this.tail = newNode;
    }
  }
  pop() {
    if (this.head == null) {
      console.log("underflow");
      return;
    }
    this.head = this.head.next;
    if (this.head !== null) {
      this.head.prev = null;
    } else {
      this.tail = null; // List is now empty
    }
  }
  print() {
    if (this.head == null) {
      console.log("underflow");
      return;
    }
    let current = this.head;
    while (current !== null) {
      process.stdout.write(current.data.toString());
      if (current.next !== null) {
        process.stdout.write(" -> ");
      }
      current = current.next;
    }
  }
}

const dll = new DoublyLinkedList();

dll.push(10);
dll.push(20);
dll.push(30);

dll.print(); // Should print 10, 20, 30

dll.pop(); // Removes 10 (head)
dll.print(); // Should print 20, 30

dll.pop(); // Removes 20 (head)
dll.print(); // Should print 30

dll.pop(); // Removes 30 (head)
dll.print(); // Should print "underflow"
