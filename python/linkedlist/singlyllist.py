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
        temp1 = self.head
        temp2 = self.head.next
        while temp1.data != node:
            temp1 = temp1.next
            temp2 = temp2.next
        new_node.next = temp2
        temp1.next = new_node

    def delete_node(self,node):
        temp1 = self.head
        temp2 = self.head.next
        while temp2.data is not node and temp1.data is not node:
            temp1=temp1.next
            temp2=temp2.next
        temp2 = temp2.next
        temp1.next = temp2

    def delete_at_position(self,pos):
        temp = self.head
        for i in range(pos-1):
            temp=temp.next
        print(temp.data)
        self.delete_node(temp.data)

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

    llist.delete_node(3)
    llist.traverse()

    llist.delete_at_position(3)
    llist.traverse()
