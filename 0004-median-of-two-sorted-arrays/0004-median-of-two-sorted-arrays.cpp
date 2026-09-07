class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        vector<int> merged;
        int a = arr1.size();
        int b = arr2.size();
        int i=0,j=0;
        
        while(i<a && j<b) {
            if(arr1[i] < arr2[j]) {
                merged.push_back(arr1[i++]);
            }
            else {
                merged.push_back(arr2[j++]);
            }
        } 

        while (i < arr1.size()) {
            merged.push_back(arr1[i++]);
        }

        while (j < arr2.size()) {
            merged.push_back(arr2[j++]);
        }

        int n = merged.size();
        if(n % 2 != 0) {
            return merged[n/2];
        }   
        else {
            return (merged[n/2 - 1] + merged[n/2]) / 2.0; 
        } 
    }
};