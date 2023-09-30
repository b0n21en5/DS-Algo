package LinkedList;

public class FindNodeLL{
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
}