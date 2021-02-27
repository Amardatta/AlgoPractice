//https://leetcode.com/problems/majority-element/
//This problem assumes that a majority element exists.
//Under this assumption we don't need to check its freq> n/2
//Since the freq of the majEl >= n/2+1  =>Count>=1

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
        
        if (count>=1){  
            //Check whether it is the majority el
//             int c= 0;
//             for(int i=0; i<n; i++)
//                 if (majorityEl==arr[i]) c++
            
//             if(c> n/2)
                return majorityEl;            
        }
        //else
        return -1;
        
    }
};
