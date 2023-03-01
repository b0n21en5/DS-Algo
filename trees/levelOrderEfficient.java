package trees;
import java.util.LinkedList;
import java.util.Queue;


// level order binary tree traversal using queue
// space complexity: O(n)
// time complexity: O(n)

class Node {
    Node left, right;
    int data;

    public Node(int data){
        this.data = data;
    }
}

public class levelOrderEfficient {
    Node root;
    public levelOrderEfficient(){
        this.root = null;
    }
    public static void main(String[] args) {
        levelOrderEfficient Root = new levelOrderEfficient();

        Root.root = new Node(5);
        Root.root.left = new Node(1);
        Root.root.right = new Node(7);
        Root.root.left.left = new Node(2);
        Root.root.left.right = new Node(4);
        Root.root.left.right.left = new Node(3);
        Root.root.left.right.right = new Node(6);

        System.out.println("Level Order traversal of binary tree is - ");
        printLevelOrder(Root.root);

    }

    static void printLevelOrder(Node root){
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        q.add(null);

        while(!q.isEmpty()){
            Node currNode = q.poll();

            if (currNode == null){
                if (q.isEmpty()) return;

                q.add(null);
                System.out.println();
                continue;
            }

            System.out.print(currNode.data + " ");

            if (currNode.left != null) q.add(currNode.left);

            if (currNode.right != null) q.add(currNode.right);
        }
    }
}
