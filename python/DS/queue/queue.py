class Queue:
    def __init__(self):
        self.queue = []

    def insert(self,val):
        self.queue.append(val)
    
    def delete(self):
        val = self.queue[0]
        self.queue = self.queue[1:]
        print("The deleted value is: " , val)

    def peek(self):
        print(self.queue[0])

    def display(self):
        for i in self.queue:
            print(i, end=" ")
        print(" ")


q = Queue()
q.insert(0)
q.peek()
q.insert(1)
q.insert(2)
q.display()
q.delete()
q.display()
q.peek()
