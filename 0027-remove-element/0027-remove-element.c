int removeElement(int* nums, int numsSize, int val) {
    
    int numElements = 0;
    int safeIndex = 0;
    
    for(int i = 0; i < numsSize; i++){
        
        if (nums[i] != val){
            nums[safeIndex] = nums[i];
            numElements += 1;
            safeIndex += 1;
        }
        
    }
        
    return numElements;
}