package trees;

// Node class
class Node{
    Node left, right;
    int data;

    public Node(int data){
        this.data = data;
    }
}

public class levelOrder {

    Node root;

    public levelOrder(){
        root = null;
    }

    static void printCurrentLevel(Node root, int level){

        if (root == null) return ;

        if (level == 1){
            System.out.print(root.data + " ");
        }else if (level>1){
            printCurrentLevel(root.left, level-1);
            printCurrentLevel(root.right, level-1);
        }
    }
    
    public static void main(String[] args) {

        levelOrder Root = new levelOrder();

        Root.root = new Node(5);
        Root.root.left = new Node(7);
        Root.root.right = new Node(3);
        Root.root.left.left = new Node(4);
        Root.root.left.right = new Node(3);
        Root.root.right.right = new Node(8);

        for (int i=1; i<=3; i++){
            printCurrentLevel(Root.root, i);
            System.out.println();
        }

    }



}
