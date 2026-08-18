class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
    stack<int> st;
    int max_area=0;
    for(int i=0;i<=n;++i){
        int currheight;
        if(i<n){
            currheight=heights[i];
        }
        else if(i==n){
            currheight=0;
        }
        while(!st.empty() && currheight<heights[st.top()]){
            int mid=st.top();
            st.pop();
            int height=heights[mid];
            int left_smaller;
            if(st.empty()){
                left_smaller=-1;
            }
            else{
                left_smaller=st.top();
            }
            int right_smaller=i;
            int width=right_smaller-left_smaller-1;
            max_area=max(max_area, height*width);
        }
        st.push(i);
    }
    return max_area;
    }
};