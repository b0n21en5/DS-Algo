package LinkedList;

public class DeleteNodeLL {
    Node deleteNode(Node head, int pos) {
        if (head == null) {
            return null;
        }

        if (pos == 0) {
            return head.next;
        }

        Node curr = head;

        while (curr != null && pos > 1) {
            pos--;
            curr = curr.next;
        }

        if (curr == null || curr.next == null) {
            return head;
        }

        curr.next = curr.next.next;
        return head;
    }
}
