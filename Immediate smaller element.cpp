class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    //  code here
	    for(int i=0;i<arr.size()-1;i++){
	        if(arr[i+1]<arr[i]){
	            arr[i]=arr[i+1];
	        }
	        else{
	            arr[i]=-1;
	        }
	    }
	    arr[arr.size()-1]=-1;
	}

};