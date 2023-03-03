package trees;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Map;
import java.util.Queue;
import java.util.TreeMap;

public class BottomView {
    
    static Node node = new Node(9);
    public static void main(String[] args) {
        node.left =new Node(5); 
        node.right =new Node(7);
        node.right.left =new Node(8);
        node.right.right =new Node(6);
        node.left.right =new Node(6);
        node.right.right.right =new Node(5);
        node.right.right.left =new Node(5);

        System.out.println("Bottom view of binary tree - ");

        System.out.println(bottomViewNode(node));

    }

    static ArrayList<Integer> bottomViewNode(Node root){

        // using queue to store every node
        Queue<Pair> q = new ArrayDeque<>();

        // map will store temp data of bottom view node
        Map<Integer, Integer> map = new TreeMap<>();

        q.add(new Pair( root, 0 )); // adding root node to queue

        // loop will run till queue becomes empty
        while (!q.isEmpty()){

            // poll will return head node of the queue
            Pair curr = q.poll();

            map.put(curr.hd, curr.node.data);
            

            // queue will add left nodes till it finds null
            if (curr.node.left != null){
                q.add(new Pair(curr.node.left, curr.hd - 1));
            }

            // queue will add right nodes till it finds null
            if (curr.node.right != null){
                q.add(new Pair(curr.node.right, curr.hd + 1));
            }


        }

        // using arraylist to return bottom view of the tree
        ArrayList<Integer> ans = new ArrayList<>();

        // putting values to the arraylist
        for(Map.Entry<Integer, Integer> entry:map.entrySet()){
            ans.add(entry.getValue());
        }


        return ans;
    }


    // creating pair class to store pair of 
    // horizontal distance and node tree

    static class Pair{
        Node node;
        int hd;

        public Pair(Node node, int hd){
            this.hd = hd;
            this.node = node;
        }
    }

}


class Node{
    Node left, right;
    int data;
    public Node(int data){
        this.data = data;
    }
}
