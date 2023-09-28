package LinkedList;

public class InsertIthNode {
    void insert(Node head,int pos, int data){

        Node curr=head;
        while(curr!=null && pos>0){
            pos--;
            curr=curr.next;
        }

        int temp=0;
        if(curr != null){
            temp=curr.data;
            curr.data=data;
            curr=curr.next;

            while(curr != null){
                int tempData=curr.data;
                curr.data=temp;
                curr=curr.next;
                temp=tempData;
            }
        }
    }
}
