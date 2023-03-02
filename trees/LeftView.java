package trees;

import java.util.ArrayList;

class Node {
    Node left, right;
    int data;
    
    public Node(int data){
        this.data = data;
    }

}


// left view of binary tree using recursion
// space complexity: O(n)
// time complexity: O(n)

public class LeftView {

    Node root;

    public LeftView(){
        this.root = null;
    }

    public static void main(String[] args) {
        LeftView Root = new LeftView();

        Root.root = new Node(5);
        Root.root.left = new Node(1);
        Root.root.right = new Node(7);
        Root.root.left.left = new Node(2);
        Root.root.left.right = new Node(4);
        Root.root.left.right.left = new Node(3);
        Root.root.left.right.right = new Node(6);

        
        System.out.println("Left View of binary tree - ");
        printLeftView(Root.root);

    }

    static void printLeftView(Node root){
        ArrayList<Node> list = new ArrayList <>();


        printLeftViewUtil(root, list, 0);

        for (Node currNode : list){
            System.out.print(currNode.data + " ");
        }
    }

    static void printLeftViewUtil(Node root, ArrayList<Node> list, int level){

        if (root == null) return;

        if (list.size() == level) list.add(root);

        printLeftViewUtil(root.left, list, level+1);
        printLeftViewUtil(root.right, list, level+1);
    }

}