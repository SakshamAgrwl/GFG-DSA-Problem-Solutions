    //Optimal Solution to the problem : https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/0
    


    
    public:
        //Function to merge the arrays.
        void merge(long long ar1[], long long ar2[], int n, int m) 
        { 
            int gap = ceil((float)(n + m) / 2);
            while (gap > 0) {
            int i = 0;
            int j = gap;
            while (j < (n + m)) {
              if (j < n && ar1[i] > ar1[j]) {
                swap(ar1[i], ar1[j]);
              } else if (j >= n && i < n && ar1[i] > ar2[j - n]) {
                swap(ar1[i], ar2[j - n]);
              } else if (j >= n && i >= n && ar2[i - n] > ar2[j - n]) {
                swap(ar2[i - n], ar2[j - n]);
              } 
              j++;
              i++;
            }
            if (gap == 1) {
              gap = 0;
            } else {
              gap = ceil((float) gap / 2);
            }
        }
    }
}