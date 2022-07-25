// code
stack<int> st;
stack<int> cloned;

int count = 0;
        while(count!=st.size())
        {
            int top_val = st.top();
            st.pop();
            while(st.size()!=count)
            {
                int temp = st.top();
                st.pop();
                cloned.push(temp);
            }
            st.push(top_val);
            count++;
            while(cloned.size()!=0)
            {
                int temp = cloned.top();
                cloned.pop();
                st.push(temp);
            }
        }
        while(st.size()!=0)
        {
            int temp = st.top();
            st.pop();
            cloned.push(temp);
        }
        
