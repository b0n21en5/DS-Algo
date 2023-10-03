package LinkedList;

public class SwapTwoNodes {
    // swaping data of the i'th and j'th nodes
    void swapTwoNodeDatas(Node head, int i, int j) {
        Node currI = null;

        Node root = head;
        while (i-- > 0 && root != null) {
            root = root.next;
        }
        currI = root;

        Node currJ = null;

        root = head;
        while (j-- > 0 && root != null) {
            root = root.next;
        }

        currJ = root;

        int temp = currI.data;
        currI.data = currJ.data;
        currJ.data = temp;
    }

    // swapping i'th and j'th nodes 
    void swapTwoNodes(Node head, int i, int j) {
        Node prevI = null;
        Node currI = null;
        Node prevJ = null;
        Node currJ = null;

        int ind = 0;
        Node currNode = head;
        Node prev = null;
        while (currNode != null) {
            if (ind == i) {
                prevI = prev;
                currI = currNode;
            }

            if (ind == j) {
                prevJ = prev;
                currJ = currNode;
                break;
            }

            ind++;
            prev = currNode;
            currNode = currNode.next;
        }

        if (prevI != null)
            prevI.next = currJ;

        if (prevJ != null)
            prevJ.next = currI;

        Node temp = currJ.next;
        currJ.next = currI.next;
        currI.next = temp;

    }
}
