
int maxArea(int* height, int heightSize) {
    int L = 0;
    int R = heightSize - 1;
    int max = 0;
    int w = 0;

    while (L < R) {
        w = R - L;

        if (height[L] < height[R]) {
            if (max < w * height[L]) {
                max = w * height[L];
            }
            L++;
        }
        else {
            if (max < w * height[R]) {
                max = w * height[R];
            }
            R--;
        }
    }

    return max;
}

    
    
    
