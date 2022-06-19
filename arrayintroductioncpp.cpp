#include<iostream>
using namespace std;

int main(){
/*ARRAY INTRODUCTION */
//To declare an array in c++ we need to
//follow the following syntax
//datatype arrayname[size of the array];
//here i am storing only integer values in the array so i have specified int as the datatype
//i have declared name of the array as myarray
//an the size of the array is 10
//the array elements will starts from index 0
//the first element of the array will be srored on the index:0
//second element of the array will be stored on the index:1

//to print anything into the screen we use cout in cpp
//to access the elements in array we have to follow the following syntax
//cout<<arrayname[index];
//endl is used to print the next line
int n=10;
int myarray[n];
//for a normal array if we have not specified any value garbage value will be stored on the array elements

cout<<"First Element of the Array:"<<myarray[0]<<endl;

cout<<"Second element of the ARRAY:"<<myarray[1]<<endl;
//for the static datatypes if we have not specified any value 0 will be stored on the array elements
static int myarraytwo[10];
cout<<"First Element of the Array:"<<myarraytwo[0]<<endl;

cout<<"Second element of the ARRAY:"<<myarraytwo[1]<<endl;

//accessing array elements using loops

//we can use for loop or while loop to access the elements of an array

for(int i=0;i<n;i++){
  cout<<"ELEMENT AT INDEX-"<<i<<":"<<myarray[i]<<endl;
}

cout<<"Accessing array elements with while loop"<<endl;

/*Adding elenets to array*/
//we can use for loop to add elemts to the array we have to assign the required value to the required index of an array

myarray[0]=10;
myarray[1]=20;
myarray[2]=30;
myarray[3]=40;
myarray[4]=50;
myarray[5]=60;
myarray[6]=70;
myarray[7]=80;
myarray[8]=90;
myarray[9]=100;

for(int i=0;i<n;i++){
  myarray[i]=myarray[i]*10;
}

int iter=0;
while(iter<n){
  cout<<"ELEMENT AT INDEX-"<<iter<<":"<<myarray[iter]<<endl;
  iter++;
}

cout<<"FINDING NUMBER OF ARRAY ELEMENTS"<<endl;
//we can use while loop or sizeof operator to find the number of elements of an array

int myarraysize=sizeof(myarray)/sizeof(myarray[0]);
cout<<"NUMBER OF ELEMENTS IN MYARRAY:"<<myarraysize<<endl;

//while loop nethod of finding numer of elements of an array
int numberofele=0;
while(myarray[numberofele]!=NULL){
  numberofele++;
}
cout<<"NUMBER OF ELEMENTS WHILE LOOP:"<<numberofele<<endl;

}
