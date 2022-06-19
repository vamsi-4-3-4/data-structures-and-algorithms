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

#include<stdio.h>
#include<stdlib.h>

void requiredproduct(int inputarray[],int n) {
    //foriterating of the loops
    int i;
   //creating an array for the product of leftside element
   int *leftproductarray =(int*)malloc(sizeof(int)*n);
   //creating an array to store the result
   int product[n];
   //creating an array for the product of the right side elements
   int *rightproductarray =(int*)malloc(sizeof(int)*n);
   
   //set the first element of left[] and the last element of right[] as 1
   leftproductarray[0] = rightproductarray[n-1] = 1;
   
   //calculate the product of the leftside elements
   for(i = 1; i<n; i++) {
      leftproductarray[i] = leftproductarray[i-1] * inputarray[i-1];
   }
   //calculate the product of the right side elements
   for(i = n-2; i>=0; i--) {
      rightproductarray[i] = rightproductarray[i+1] * inputarray[i+1];
   }
  //calculating the product of the leftside array and right sided array and storing in the product array
   for(i=0;i<n;i++){
   product[i]=rightproductarray[i]*leftproductarray[i];
   }
  //printing the elemets of the product array
   for(i=0;i<n;i++){
     printf("%d ",product[i]);
   }

}
main() {
    //out input array for which we want to find the product 
   int myarray[5] = {2,3,4,5,6};
   //for iterating of the loops
   int i;
   //calculating the number of elements for the iterations
   int n=sizeof(myarray)/sizeof(myarray[0]);
   //printing the input array
   printf("INPUT ARRAY\n");
   for(i=0;i<n;i++){
     printf("%d ",myarray[i]);
   }
   
printf("\n");
//printing the output array
  printf("OUTPUT ARRAY\n");
  //calling the requiredproduct function for the input array
  requiredproduct(myarray,n);
 
}
