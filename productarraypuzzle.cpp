//GIVEN PROBLEM STATEMENT
//WE HAVE GIVEN AN ARRAY OF INTEGERS 
//FOR THE GIVEN ARRAY OF INTEGERS WE NEED TO FIND THE PRODUCT ARRAY
//EVERY ELEMENT OF THE PRODUCT ARRAY MUST CONTAIN PRODUCT OF ALL THE OTHER ELEMENTS OF THE ARRAY EXCEPT THAT ELEMENT
//FOR EXAMPLE
//GIVEN INPUT ARRAY[2,3,4,5,6]
//OUTPUT ARRAY MUST BE [360,240,180,144,120]
//output will comes inthis way
//[element1,element2,element3,element4,element5]
//[3*4*5*6,2*4*5*6,2*3*5*6,2*3*4*6,2*3*4*5]

//-------ALGORITHM--------
//create a array for the product of the right side elements of the array except the product of required element
//create a array for the product of the left side elements of the array except the product of required element
//multiply the leftproduct array and the right product array

#include<iostream>
using namespace std;

void requiredproduct(int inputarray[],int n) {
   //creating an array for the product of leftside element
   int *leftproductarray = new int[sizeof(int)*n];
   //creating an array to store the result
   int product[n];
   //creating an array for the product of the right side elements
   int *rightproductarray = new int[sizeof(int)*n];
   
   //set the first element of left[] and the last element of right[] as 1
   leftproductarray[0] = rightproductarray[n-1] = 1;
   
   //calculate the product of the leftside elements
   for(int i = 1; i<n; i++) {
      leftproductarray[i] = leftproductarray[i-1] * inputarray[i-1];
   }
   //calculate the product of the right side elements
   for(int i = n-2; i>=0; i--) {
      rightproductarray[i] = rightproductarray[i+1] * inputarray[i+1];
   }
  //calculating the product of the leftside array and right sided array and storing in the product array
   for(int i=0;i<n;i++){
   product[i]=rightproductarray[i]*leftproductarray[i];
   }
  //printing the elemets of the product array
   for(int i=0;i<n;i++){
     cout<<product[i]<<" ";
   }

}
main() {
    //out input array for which we want to find the product 
   int myarray[5] = {2,3,4,5,6};
   //calculating the number of elements for the iterations
   int n=sizeof(myarray)/sizeof(myarray[0]);
   //printing the input array
   cout <<"INPUT ARRAY"<<endl;
   for(int i=0;i<n;i++){
     cout<<myarray[i]<<" ";
   }
   
cout<<endl;
//printing the output array
  cout<<"OUTPUT ARRAY"<<endl;
  //calling the requiredproduct function for the input array
  requiredproduct(myarray,n);
 
}
