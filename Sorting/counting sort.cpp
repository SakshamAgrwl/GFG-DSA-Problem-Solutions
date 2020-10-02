void countSort(int arr[], int n, int k){
	int count[k];
	for(int i=0;i<k;i++){
		count[i] = 0;
	}

   //count all occurences of elements in array
	for(int i=0;i<n;i++){
		count[arr[i]]++;
	}


	/*creating a new array which stores the sum 
	of current element*/
	for(int i=1;i<k;i++){
		count[i] = count[i-1] + count[i];
	}

	//defining a new output array
	int output[n];

	/*we will traverse the elements from end of array arr
	there we will check the value of element in count array
	and then we will put its value at the index which has the 
	element value and then we will decrement the value*/

	for(int i= n-1;i>=0;i--){
		output[count[arr[i]]-1] = arr[i];
		count[arr[i]]--;
	}

	//then we will copy the elements from output array to 
	//original array arr
	for(int i=0;i<n;i++){
		arr[i] = output[i];
	}



}