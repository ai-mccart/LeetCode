void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    
    int nums1Pos = 0;
    int nums2Pos = 0;
    int arrayPos = 0;
    
    int * tempArray = malloc(sizeof(int)*(m+n));
    
    if (m > 0 && n > 0){ // Ensure both arrays have values
       while(nums1Pos < m && nums2Pos < n){ // Merge sort until one array is exhausted
        if (nums1[nums1Pos] <= nums2[nums2Pos]){
            tempArray[arrayPos] = nums1[nums1Pos];
            nums1Pos += 1;
        } else {
            tempArray[arrayPos] = nums2[nums2Pos];
            nums2Pos += 1;
        }
        arrayPos += 1;
     } 
    }
    // Merge in the remaining numbers after one is exhausted above
    while (nums1Pos < m){
        tempArray[arrayPos] = nums1[nums1Pos];
        nums1Pos += 1;
        arrayPos += 1;
    }
    
    while (nums2Pos < n){
        tempArray[arrayPos] = nums2[nums2Pos];
        nums2Pos += 1;
        arrayPos += 1;
    }
    
    for(int i = 0; i < (m+n); i++){ // Transfer all indices to nums1
        nums1[i] = tempArray[i];
    }
}