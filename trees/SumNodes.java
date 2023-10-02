package trees;

public class SumNodes {
    int sumOfNodes(Node root) {
        if (root == null) {
            return 0;
        }

        int leftNodeSum = sumOfNodes(root.left);
        int rightNodeSum = sumOfNodes(root.right);

        return leftNodeSum + rightNodeSum + root.data;
    }
}
