package LinkedList;

public class DeleteN_nodesAfterEveryM_nodes {
    static void linkdelete(Node head, int M, int N)
    {
        if(head==null || M==0 || N==0){
            return;
        }
        
        Node temp=head;
        while(temp != null){
            int take=M;
            while(take>1 && temp.next!=null){
                temp=temp.next;
                take--;
            }
            
            int skip = N;
            Node temp2=temp;
            while(skip>=0 && temp!=null){
                temp=temp.next;
                skip--;
            }
            temp2.next=temp;
        }
    }
}
