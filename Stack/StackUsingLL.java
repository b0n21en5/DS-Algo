package Stack;

class Node {
    int data;
    Node next;

    public Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class StackUsingLL {
    private int size;
    private Node head;

    public StackUsingLL() {
        size = 0;
        head = null;
    }

    void push(int data) {
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
        size++;
    }

    int pop() {
        int popVal = -1;
        if (head != null) {
            popVal = head.data;
            head = head.next;
            size--;
        }
        return popVal;
    }

    int top() {
        int topVal=-1;
        if(head!=null){
            topVal=head.data;
        }
        return topVal;
    }

    int size() {
        return size;
    }

    boolean isEmpty() {
        if (size == 0) {
            return true;
        }

        return false;
    }

    static void print(Node head) {
        Node curr = head;
        while (curr != null) {
            System.out.print(curr.data + " ");
            curr = curr.next;
        }
        System.out.println();
    }

    public static void main(String args[]) {
        StackUsingLL st = new StackUsingLL();

        st.head = new Node(5);
        st.size = 1;

        print(st.head);

        st.push(6);
        st.push(4);
        print(st.head);

        int popVal = st.pop();

        System.out.println(
                "Size: " + st.size() + "\nPop: " + popVal + "\nTop: " + st.top() + "\nisEmpty: " + st.isEmpty());

        print(st.head);
    }
}
