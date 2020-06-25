class Node:
    def __init__(self,data):
        self.data = data 
        self.prev = None
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def push(self,data):
        if(self.head == None):
            self.head = Node(data)
            self.head.next = self.head
            self.head.prev = self.head
        else:
            temp = self.head
            while temp.next != self.head:
                temp = temp.next
            new_node = Node(data)
            new_node.next = self.head
            new_node.prev = temp
            temp.next = new_node
            self.head.prev = new_node

    def display(self):
        temp = self.head
        if temp != None:
            print(temp.data, end = " ")
            temp=temp.next
            while temp != self.head:
                print(temp.data,end = " ")
                temp = temp.next
        else:
            print("list empty")
        print(" ")

    def insert_beggining(self,data):
        new_node = Node(data)
        new_node.next = self.head
        new_node.prev = self.head.prev
        self.head.prev.next = new_node
        self.head.prev = new_node
        self.head = new_node

    def insert_end(self,data):
        temp = self.head
        while temp.next != self.head:
            temp = temp.next
        new_node = Node(data)
        temp.next = new_node
        new_node.prev = temp
        new_node.next = self.head
        self.head.prev = new_node

    def mergelists(self,linkedlist):
        temp1 = self.head
        while temp1.next != self.head:
            temp1 = temp1.next
        end_linked_list = linkedlist.head
        while end_linked_list.next != end_linked_list:
            end_linked_list = end_linked_list.next
        temp1.next = linkedlist.head
        linkedlist.head.prev = temp1

llist = LinkedList()
llist.push(1)
llist.push(2)
llist.push(3)
llist.display()
llist.insert_beggining(0)
llist.display()
llist.insert_beggining(-1)
llist.display()
llist.insert_beggining(-2)
llist.display()
llist.insert_end(4)
llist.display()
print(llist)
