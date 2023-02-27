package trees;

import java.util.Scanner;

public class Tree {

    static Scanner sc = null;
    public static void main(String[] args) {
        sc = new Scanner(System.in);

        Node root = createTree();

        System.out.print("In-Order Traversal = ");
        inOrder(root);
        System.out.println();
        

        System.out.print("Pre-Order Traversal = ");
        preOrder(root);
        System.out.println();
         
        System.out.print("Post-Order Traversal = ");
        postOrder(root);
        System.out.println();
         
    }


    static Node createTree(){

        Node root = null;

        System.out.println("Enter Data: ");
        int data = sc.nextInt();

        if (data == -1){return null;}

        root = new Node(data);

        System.out.println("Enter left node for "+ data);
        root.left = createTree();

        System.out.println("Enter right node for "+ data);
        root.right = createTree();

        return root;
    }


    // In-Order Traversal follows Left-Node-Right(LNR) approach
    static void inOrder(Node root){
        if ( root == null ) return;

        inOrder(root.left);

        System.out.print(root.data+ " ");

        inOrder(root.right);

    }



    // Pre-Order Traversal follows Node-Left-Right(NLR) approach
    static void preOrder(Node root){
        if ( root == null ) return;

        System.out.print(root.data + " ");

        preOrder(root.left);

        preOrder(root.right);
    }



    // Post-Order Traversal follows Left-Right-Node(LRN) approach
    static void postOrder(Node root){
        if ( root == null ) return ;

        postOrder(root.left);

        postOrder(root.right);

        System.out.print(root.data + " ");
    }
}


class Node {
    Node left, right;

    int data;

    public Node(int data){
        this.data = data;
    }

}