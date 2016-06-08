    class Node(object):
     
        def __init__(self, data, next=None):
     
            self.data = data
            self.next = next
     
        def __str__(self):
            return str(self.data)
     
     
     
    class LinkedList(object):
     
     
     
        def __init__(self):
     
            self.head = None
            self.size = 0
     
     
        def append(self, *data):
     
                n = self.head
                #new_node = Node(data)
     
                if self.head is None:
     
                    n = self.head
     
                    for elem in data:
                        n = Node(elem)
                        n = n.next
                        self.size += 1
     
                else:
     
                    n = self.head
                    while n.next != None:
                        n = n.next
     
                    for elem in data:
                        n.next = Node(elem)
                        n = n.next
                        self.size += 1
     
     
     
     
        def isEmpty(self):
            return self.head is None
     
        def printList(self):
     
            n = self.head
     
            while n is not None:
                print str(n)
