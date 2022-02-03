private int[] prevSmaller(int l[], int n){
        int[] ps = new int[n];
        Stack<Integer> s = new Stack<>();
        for(int i=0;i<n;i++)
        {
            while(!s.isEmpty() && l[s.peek()] >= l[i])
            {
                s.pop();
            }
            if( s.isEmpty())
            {
                ps[i]=-1;
            }
            else
            {
                ps[i]=s.peek();
            }
            s.push(i);
        }
        return ps;
    }

private int[] nextSmaller(int[] l, int n) {
        Stack<Integer> stack = new Stack<>();
        int[] next = new int[n];
        for (int i = n - 1; i >= 0; i--) {
            while (!stack.isEmpty() && l[i] <= l[stack.peek()]) {
                stack.pop();
            }
            if (stack.isEmpty()) {
                next[i] = n;
            } else {
                next[i] = stack.peek();
            }
            stack.push(i);
        }
        return next;
    }
