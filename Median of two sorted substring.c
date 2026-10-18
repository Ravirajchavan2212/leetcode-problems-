double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    
  int m=nums1Size;
  int n=nums2Size;
  int c[m+n];
  
  int i=0,j=0,k=0;
  while(i<m&&j<n){
      if(nums1[i]<nums2[j]){
          c[k++]=nums1[i++];
      }
      else{
          c[k++]=nums2[j++];
      }
  }
  
  while(i<m){
      c[k++]=nums1[i++];
  }
  while(j<n){
      c[k++]=nums2[j++];
  }
  
      int total = n + m;

    if (total % 2 != 0)
        return c[total / 2];

    return ((double)c[total / 2 - 1] + c[total / 2]) / 2.0;
    
    }
