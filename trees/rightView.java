package trees;

import java.util.ArrayList;

class Node {
    Node left, right;
    int data;
    public Node(int data){
        this.data = data;
    }
}


public class rightView {
    
    Node root;

    public rightView(){
        this.root = null;
    }

    public static void main(String[] args) {
        rightView Root = new rightView();

        Root.root = new Node(5);
        Root.root.left = new Node(1);
        Root.root.right = new Node(7);
        Root.root.left.left = new Node(2);
        Root.root.left.right = new Node(4);
        Root.root.left.right.left = new Node(3);
        Root.root.left.right.right = new Node(6);

        
        System.out.println("Right View of binary tree - ");
        printRightView(Root.root);

    }

    static void printRightView(Node root){
        ArrayList<Node> list = new ArrayList <>();


        printRightViewUtil(root, list, 0);

        for (Node currNode : list){
            System.out.print(currNode.data + " ");
        }
    }

    static void printRightViewUtil(Node root, ArrayList<Node> list, int level){

        if (root == null) return;

        if (list.size() == level) list.add(root);

        printRightViewUtil(root.right, list, level+1);
        printRightViewUtil(root.left, list, level+1);
    }
    
}
