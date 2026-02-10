int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
     int* result = malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    int* count = calloc(1001, sizeof(int));   
 
    for (int i = 0; i < nums1Size; i++)
        count[nums1[i]]++;

    int k = 0;
 
    for (int i = 0; i < nums2Size; i++) {
        if (count[nums2[i]] > 0) {
            result[k++] = nums2[i];
            count[nums2[i]]--;
        }
    }

    *returnSize = k;
    free(count);

    return result;
}