void merge(int one[], int two[], int sizeOne, int sizeTwo) {
        int i=sizeOne-1, j = 0;
        while(i>=0 and j<sizeTwo){
            if(one[i]>two[j])
                swap(one[i],two[j]);
            i--,j++;
        }
        sort(one,one+sizeOne);
        sort(two,two+sizeTwo);
	}