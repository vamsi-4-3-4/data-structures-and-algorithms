//PROBLEM
//CONVERT THE GIVEN ARRAY INTO THE REDUCED FORM
//target complexity o(ologn)
//ALL THE ARRAY ELEMENTS MUST BE IN THE RANGE OF 0 TO N-1
//N-1 IS PLACED FOR THE LARGEST ELEMENT
//N-2 PLACED FOR THE SECOND LARGEST ELEMENT
//N-3 IS PLACED FOR THE THRID LARGEST ELEMENT
//OR
//0 IS PLACED FOR THE SMALLEST ELEMENT
//1 IS PLACED FOR THE SECOND SMALLEST ELEMENT
//......
//N-1 IS PLACED FOR THE LARGEST ELEMENT
//EXAMPLE
//GIVEN ARRAY[9,99,999]
//OUTPUT [0,1,2]
//9 IS THE SMALLEST WE HAVE REPLACED WITH THE 0
//99 IS THE SECOND SMALLEST WE HAVE REPLACED WITH THE 1
//999 IS THE THRID SMALLEST WE HAVE REPLACED WITH THE 2 (N-1=3-1=2)
//OR
//999 IS THE LARGEST WE HAVE REPLACED WITH THE N-1 WHICH IS 3-1=2
//99 IS THE SECOND LARGEST WE HAVE REPLACED WITH THE N-2 WHICH IS 3-2=1
//9 IS THE THRID LARGEST WE HAVE REPLACED WITH THE N-3 WHICH IS 3-3=0
//OTHER CASES
//GIVEN ARRAY[3,300,30]
//OUTPUT ARRAY[0,2,1]
//*********************************
//||||||| BASIC SOLUTION |||||||||
//---------------------------------
//TRAVERSE THE GIVEN ARRAY AND FIND THE MINIMUM ELEMNET AND REPLACE THE
//MINIMUM ELEMENT WITH THE 0
//NOW WE HAVE TO TRAVERSE WITH THE REMAINING ARRAY AND WE HAVE FIND THE 
//SECOND MINIMUM AND WE HAVE TO REPLACE WITH THE 1
//NOW WE NEED TO CONSIDER THE REST OF THE ARRAY AND WE NEED TO FIND THE 
//SMALLEST AND WE NNED REPLACE THAT WITH THE 2
//WE HAVE TO DO THE ABOVE PROCEDURE FOR ALL THE ELEMENTS OF THE ARRAY
//TIME COMPLEXITY:O(N^2)

//**A*******************************
//|||||| GOOD SOLUTION ||||||||||||
//---------------------------------
//SORTING AND HASHING METHOD
//STEP1:CREATE A TEMPORARY ARRAY
//COPY THE CONTENTS OF THE GIVEN ARRAY TO THE TEMPORARY ARRAY 
//THIS COPING TAKES THE O(N) TIME COMPLEXITY
//STEP2:SORT THE TEMPORARY ARRAY IN THE ASCENDING ORDER
//THIS SORTING TAKES THE O(NLOGN) TIME COMPLEXITY
//STEP3:CREATE A EMPTY HASHTABLE
//CREATING EMPTY HASHTABLE TAKES O(1) TIME COMPLEXITY
//STEP:4 TRAVERSE THE TEMP ARRAY TO THE HASHTABLE IN THE HASHTABLE STORE
//THE INDEX AS WELL AS VALUE 
//STORING INTO HASHTABLE TAKES O(N) TIME COMPLEXITY
//TRAVERSE THE GIVEN ARRAY AND REPLACE THE POSITIONS OF THE ELEMENTS USING HASHTABLE
//TRAVERSING ARRAY TAKES THE O(N) TIME
//WE GET THE OVERALL TIME COMPLEXITY OF O(N LOGN)

#include<bits/stdc++.h>
#include<cstring>
#include <iostream>

using namespace std;
void findingArray(int myarray[],int n){
    //creating a temporary with the number of elements of an input array
    int temp[n];
    //copying its contents to the temp array

    memcpy(temp,myarray,n*sizeof(int));
    //sorting the temporary array
    sort(temp,temp+n);
    //creating the hashtable
    unordered_map<int,int>mymap;
    //insert elements and assign the values of each element 
    int value=0;
    for(int i=0;i<n;i++){
        mymap[temp[i]]=value++;
    }
    //converting the input array with mymap elements
    for(int i=0;i<n;i++){
        myarray[i]=mymap[myarray[i]];
    }
    //printing the obtained array
    cout<<endl;
    cout<<"OBTAINED OUTPUT ARRAY IS"<<endl;
    for(int i=0;i<n;i++){
        cout<<myarray[i]<<" ";
    }
}
int main() {
    int n=9;
    int myarray[n]={1,2,3,4,5,6,7,8,9};
    cout<<"GIVEN INPUT ARRAY"<<endl;
    for(int i=0;i<n;i++){
        cout<<myarray[i]<<" ";
    }
    findingArray(myarray,n);
int nn=5;
int myarraytwo[5]={4,2,3,1,9};

cout<<endl<<"GIVEN INPUT ARRAY IS"<<endl;
for(int i=0;i<nn;i++){
    cout<<myarraytwo[i]<<" ";
}
findingArray(myarraytwo,nn);
}
