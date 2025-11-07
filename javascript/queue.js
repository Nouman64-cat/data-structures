let array = [];
let start = 0;
let end = 0;

const enqueue = (value) => {
  if (end == array.length() - 1) {
    console.log("Queue overflow");
    return;
  }
  array[end] = value;
  end++;
};

const dequeue = () => {
  if (start == end) {
    console.log("Queue underflow");
    return;
  }
  let dequeueValue = array[start];
  start++;
  return dequeueValue;
};

const printArray = () => {
  console.log("printing arrays");
  for (let i = start; i <= end; i++) {
    console.log(array[i]);
  }
};
