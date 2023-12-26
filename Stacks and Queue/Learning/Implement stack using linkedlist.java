public class Solution {
    static class Node {
        int data;
        Node next;

        Node() {
            this.data = 0;
            this.next = null;
        }

        Node(int data) {
            this.data = data;
            this.next = null;
        }

        Node(int data, Node next) {
            this.data = data;
            this.next = next;
        }
    }

    static class Stack {
        Node stack;
        int n;

        Stack() {
            stack = null;
            n = 0;
        }

        int getSize() {
            return n;
        }

        boolean isEmpty() {
            return n == 0;
        }

        void push(int data) {
            if (n == 0) {
                stack = new Node(data);
                n++;
                return;
            }
            Node newNode = new Node(data);
            newNode.next = stack;
            stack = newNode;
            n++;
        }

        void pop() {
            if (stack == null) {
                return;
            }
            stack = stack.next;
            n--;
        }

        int getTop() {
            if (stack == null) {
                return -1;
            }
            return stack.data;
        }
    }
}
