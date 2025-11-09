class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
  }

  push(data) {
    const newNode = new Node(data);

    if (!this.head) {
      this.head = newNode;
      this.tail = newNode;
    } else {
      this.tail.next = newNode;
      this.tail = newNode;
    }
  }

  pop() {
    if (this.head == null) {
      console.log("Linked list underflow");
    }
    let poppedValue = this.head;
    this.head = this.head.next;
    return poppedValue;
  }

  print() {
    let current = this.head;
    let output = "";
    while (current !== null) {
      output += current.data + " -> ";
      current = current.next;
    }
    output += "null";
    console.log(output);
  }
}

const list = new LinkedList();

list.push(19);
list.push(23);
list.push(34);
list.print();
list.pop();
list.print();
