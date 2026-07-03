int maxArea(int* height, int heightSize) {
    int max=0,min=0;
    int l=0,r=heightSize-1;
    while(l<r){
        if(height[l]<height[r]){
            min=l;
        }
        else{
            min=r;
        }
        if((r-l)*height[min]>max){
            max=(r-l)*height[min];
       }
       if(min==l){
        l++;
    }
    else{
        r--;
    }
    }
    return max;
}