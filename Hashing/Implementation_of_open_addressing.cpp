//create a structure
struct myHash{
	int *arr;
	int cap,size;

	myHash(int c){  //pass capacity of hash as c
		cap = c;
		size  = 0;

		for(int i=0;i<c;i++){
			arr[i] = -1; //initially mark all array elements as -1
		}
	}

	int hash(int key){
		return key % cap;
	}

	bool search(int key){
		//call the hash function
		int h = hash(key);
	    //mark index as hash
	    int i = h;
	    //traverse till we encounter an empty area in hash
	    while(arr[i] != -1){
	    	if(arr[i] == key){
	    		return true;
	    	}
	    	i = (i+1)%cap;
	    	if(i==h){
	    		return false;
	    	}
	    }
	    return false;
	}

	bool insert(int key){
		if(size == cap){
			return false;
		}
		int i = hash(key);
		while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key){
			i=(i+1)%cap;
		}

		if(arr[i] == key){
			return false;
		}

		else{
			arr[i]=key;
			size++;
			return true;
		}
	}

	bool erase(int key){
		int h = hash(key);
		int i = h;
		while(arr[i]!=-1){
			if(arr[i] == key){
				arr[i] = -2;
                return true;
			}
			i=(i+1)%cap;
			if(i==h){
				return false;
			}
		}
		return false;
	}
}