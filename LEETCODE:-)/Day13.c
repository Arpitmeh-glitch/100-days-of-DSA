/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
 int m = matrixSize;
    int n = matrixColSize[0];

    int *result = (int*)malloc(m * n * sizeof(int));
    *returnSize = 0;

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++)
            result[(*returnSize)++] = matrix[top][j];
        top++;

        for (int i = top; i <= bottom; i++)
            result[(*returnSize)++] = matrix[i][right];
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                result[(*returnSize)++] = matrix[bottom][j];
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                result[(*returnSize)++] = matrix[i][left];
            left++;
        }
    }
 return result;   
}