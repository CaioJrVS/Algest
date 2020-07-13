class Stack:
    def __init__(self):
        self.stack = []

    def push(self,data):
        self.stack.append(data)

    def pop(self):
        val = self.stack.pop(-1)
        return val

    def peek(self):
        print(self.stack[-1])

    def display(self):
        for i in self.stack:
            print(i, end=" ");
        print(" ")


stk = Stack()
stk.push(1)
stk.push(2)
stk.push(3)
stk.push(4)
stk.display()
a = stk.pop()
print(a)
stk.display()
stk.peek()
stk.display()
