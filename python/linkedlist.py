class Node:
    def __init__(self,data):
       self.data = data
       self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def traverse(self):
        temp = self.head
        while temp != None:
            print(temp.data, end = " ")
            temp = temp.next
        print()

    def insert_begining(self,data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    def insert_end(self,data):
        new_node = Node(data)
        new_node.next = None
        temp = self.head
        while temp.next != None:
            temp=temp.next
        temp.next = new_node

    def insert_after(self,node,data):
        new_node = Node(data)
        temp1 = self.head.next
        temp2 = self.head
        while temp2.next != node:
            temp2=temp2.next
            temp1=temp1.next
        new_node.next = temp1
        temp2.next = new_node

if __name__ == "__main__":
    llist = LinkedList()

    llist.head = Node(1)
    second = Node(2)
    third = Node(3)

    llist.head.next = second
    second.next = third
    third.next = None
    llist.traverse()

    llist.insert_begining(0)
    llist.traverse()

    llist.insert_end(5)
    llist.traverse()

    llist.insert_after(3,4)
    llist.traverse()
