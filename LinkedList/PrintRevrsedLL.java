package LinkedList;

public class PrintRevrsedLL {

    // recursive approach to print reversed ll
    void recApp(Node head) {
        if (head == null) {
            return;
        }

        recApp(head.next);

        System.out.print(head.data + " ");
    }

    // iterative approach to reverse a ll
    void itrApp(Node head) {
        if (head == null) {
            return;
        }

        Node curr = head;
        Node prev = null;
        Node next = null;

        while (curr != null) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        while (prev != null) {
            System.out.print(prev.data + " ");
            prev = prev.next;
        }

    }
}
