package trees;

import java.util.Scanner;

public class height {

    static Scanner sc = null;
    public static void main(String[] args) {
        sc = new Scanner(System.in);

        Node root = createTree();

        System.out.println(getHght(root));
         
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


    // height function is defined underneath
    static int getHght(Node root){
        if (root == null) return 0;

        return Math.max(getHght(root.left), getHght(root.right)) + 1;
    }
    
}


class Node {
    Node left, right;

    int data;

    public Node(int data){
        this.data = data;
    }

}