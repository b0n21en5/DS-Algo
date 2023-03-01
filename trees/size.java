package trees;

import java.util.Scanner;

public class size {
    static Scanner sc = null;
    public static void main(String[] args) {
        sc = new Scanner(System.in);

        Node root = createTree();

        System.out.println("Size of the binary tree is: " + sizeOfTree(root));

        System.out.println("Maximum Node of binary tree is: " + maxNode(root));

        System.out.println("Minimum Node of binary tree is: " + minNode(root));
         
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

    // size method implemented below
    static int sizeOfTree(Node root){
        if (root == null) return 0;

        return sizeOfTree(root.left) + sizeOfTree(root.right) + 1;
    }


    // determining maximum node of binary tree
    static int maxNode(Node root){
        if (root == null) return Integer.MIN_VALUE;

        return Math.max(root.data, Math.max(maxNode(root.left), maxNode(root.right)));
    }


    // determining minimum node of binary tree
    static int minNode(Node root){
        if (root == null) return Integer.MAX_VALUE;

        return Math.min(root.data, Math.min(minNode(root.left), minNode(root.right)));
    }
}

class Node {
    Node left, right;

    int data;

    public Node(int data){
        this.data = data;
    }

}