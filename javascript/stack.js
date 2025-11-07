let array = [];
let top = -1;

const pushInStack = (value) => {
  top++;
  array[top] = value;
};

const popFromStack = () => {
  let poppedValue = array[top];
  top--;
  return poppedValue;
};

const printStack = () => {
  console.log("Printing Stack");
  for (let i = top; i >= 0; i--) {
    console.log(`${array[i]}`);
  }
};

pushInStack(2);
pushInStack(4);
pushInStack(43);
printStack();
popFromStack();
printStack();
