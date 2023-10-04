package LinkedList;

public class FindNodeLL{
     // find node in linkedlist iteratively
    int findNode(Node head, int data){
        Node curr=head;

        int ind=0;
        while(curr!=null){
            if(curr.data==data){
                return ind;
            }
            ind++;
            curr=curr.next;
        }

        return -1;
    }

    // find node in linkedlist recursively
    int findRec(Node head, int data, int ind){
        if(head==null) return -1;

        if(head.data==data){
            return ind;
        }

        return findRec(head.next, data, ind+1);
    }
}