class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def create(self):
        num = None
        print("digite stop para terminar")
        while num != "stop":
            print ("digite o valor a ser inserido no inicio")
            self.push(num)
            num = input()
    
    #insert at the beggining of the list
    def push(self, data):
        temp = Node(data)
        if self.head == None:
            self.head = temp
            temp.next = self.head
        else:
            temp.next = self.head
            last_node = self.head
            while last_node.next is not self.head:
                last_node = last_node.next
            last_node.next = temp
            self.head = temp
        self.traverse()

    def push_end(self, data):
        new_node = Node(data)
        new_node.next = self.head
        temp = self.head
        while temp.next != self.head:
            temp = temp.next
        temp.next = new_node

    def delete_end(self):
        temp,temp2 = self.head, None
        while temp.next != self.head:
            temp2 = temp
            temp = temp.next
        temp2.next = self.head
        temp.next = None

    def delete_start(self):
        temp = self.head
        while temp.next != self.head:
            temp = temp.next
        temp.next = self.head.next
        self.head = self.head.next

    def traverse(self):
        temp = self.head
        print(temp.data,end = " ")
        temp=temp.next
        while temp is not self.head:
            print(temp.data,end = " ")
            temp = temp.next
        print()


cllist = LinkedList()
cllist.head = Node(1)
second = Node(2)
third = Node(3)
cllist.head.next = second
second.next = third
third.next = cllist.head
cllist.traverse()
cllist.push(0)
cllist.traverse()
cllist.push_end(4)
cllist.push_end(5)
cllist.traverse()
cllist.delete_end()
cllist.delete_end()
cllist.traverse()
cllist.delete_start()
cllist.traverse()
