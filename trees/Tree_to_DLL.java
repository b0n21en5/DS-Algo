package trees;


public class Tree_to_DLL {

    // initializing head node
    Node head;

    // initializing tail node
    static Node tail = null;
    
    public static void main(String[] args) {
        Tree_to_DLL tr = new Tree_to_DLL();

        Node node = new Node(10);
        node.left =new Node(20); 
        node.right =new Node(30);
        node.left.left =new Node(40);
        node.left.right =new Node(60);

        System.out.println("Binary Tree to Doubly Linked List - ");
        
        tr.binaryToDLL(node);

        tr.printList(tr.head);

    }

    // this method converts tree to doubly linked list
    void binaryToDLL(Node root){
        if (root==null) return;

        binaryToDLL(root.left);

        if (tail == null) head = root;
        else{
            root.left = tail;
            tail.right = root;
        }

        tail = root;

        binaryToDLL(root.right);
    }


    // this method will print head & tail node both
    void printList(Node head){

        while(head != null){
            System.out.print(head.data + " ");
            head = head.right;
        }

        System.out.println();

        while(tail != null){
            System.out.print(tail.data + " ");
            tail = tail.left;
        }
    }

   
}


class Node {
    Node right, left;
    int data;
    public Node(int data){
        this.data = data;
    }
}
