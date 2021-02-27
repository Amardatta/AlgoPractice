class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n= arr.size();
        
        int count= 1, majorityEl= arr[0];
        
        for (int i=1; i<n; i++){
            
            if (count==0) majorityEl= arr[i], count= 1;
            
            else if (majorityEl==arr[i]) count++;
            
            else count--;
        }
        
        if (count>=1) return majorityEl;
        else return -1;
        
    }
};