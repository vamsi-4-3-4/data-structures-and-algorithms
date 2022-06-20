import java.util.Scanner;
public class Program
{
    public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
        System.out.println("ENTER NUMBER OF ELEMENTS IN A ARRAY:");
        int n=s.nextInt();
        int myarray[]=new int[n];
        System.out.println("Enter your Array Elements");
        for(int i=0;i<myarray.length;i++){
            myarray[i]=s.nextInt();
        }
        //DECLARE A VARIABLE TO STORE THE FIRST LARGEST VALUE
        int largest;
        //DECLARE A VARIABLE TO STORE THE SECOND LARGEST VALUE
        int secondlargest;
        //DECLARE A TEMP VARIABLE FOR SWAPPTING
        int temp;
        //ASSUME THAT THE 0 INDEX ELEMENT AS LARGER
        largest=myarray[0];
        //ASSUME THAT THE 1 INDEX ELEMENT IS THE SECOND LARGEST
        secondlargest=myarray[1];
//SINCE WE HAVE ASSUMED THAT 0TH INDEX ELEMENT IS LARGEST AND THE 1ST INDEX ELEMENT IS THE SECOND LARGEST
//IF THAT CASE WAS FAILED  THAT INDICATES THAT 0TH INDEX ELEMENT IS SMALLER AND THE 1ST INDEX ELEMENT IS LARGER
// THEN MAKE A SWAP 
        if(largest<secondlargest){
            //HOW SWAP WORKS
            //WE NEED A TEMPORARY VARIABLE TO SWAP
            //WE ALSO HAVE VARIOUS OTHER METHOD FOR THE SWAPPING 
            //USING OF THE TEMPORARY VARIABLE IS ONE OF THE METHOD
            //ASSUME THAT LARGEST IS:3
            //ASSUME THAT SECONDLARGEST IS:5

            temp=largest;
            //TEMP=LARGEST
            //TEMP IS 3
            largest=secondlargest;
            //VALUE OF THE SECONDLARGEST ELEMENT WILL BE STORED IN THE LARGEST
            //LARGEST=5
            //SECONDLARGEST=5

            secondlargest=temp;
            //VALUE IN THE TEMPORARY VARIABLE WILL BE STORE IN THE SECONDLARGEST
            //WE ALREADY KNOW THAT TEMPORARY VARIABLE HOLDING 3
            //NOW 3 WILL BE ASSIGNED TO SECONDLARGEST
            //AT THE END OF THE SWAP THE LARGEST VARIABLE HOLDS 5
            //AT THE END OF THE SWAP THE SECONDLARGEST VARIABLE HOLDS THE 3
        }


        for(int i=0;i<myarray.length;i++){
            //TRAVERSE THROUGH ALL THE ELEMENTS IN THE ARRAY 
            //WE HAVE ASSUMED THAT 0TH INDEX ELEMENT IS LARGEST AND IF ANY OF THE ELEMENT IN THE ARRAY 
            //IS LARGER THAT THE LARGEST(0 TH INDEX ELEMENT) THEN UPDATE THE LARGEST VARIABLE WITH THE 
            //ARRAY ELEMENT 
            if(myarray[i]>largest){
                //MOVE THE PREVIOUS LARGE ELEMENT TO THE SECOND LARGE
                secondlargest=largest;
                //UPDATE THE ARRAY ELEMENT THAT IS LARGER THAT THE LARGEST TO THE LARGEST
                largest=myarray[i];
            }

            else if(myarray[i]>secondlargest && myarray[i]!=largest){
        
                //IF THE ELEMENT IS GREATER THAN THE SECONDLARGEST AND WHICH NOT EQUAL TO THE LARGEST
                //THEN UPDATE THE ARRAY ELEMENT AS SECOND LARGEST
                //myarray[i]!=largest
                //If the array element is the largest the largest and the second largest will be EQUAL
//here we are finding the second largest
//on the previous if condition we have moved the largest to second largest and we updated
//and there is only less cases where the first element and the second element are the first largest and the secondlargest
                secondlargest=myarray[i];
            }


        }
        System.out.println("YOUR ARRAY IS");
        for(int i=0;i<myarray.length;i++){
            System.out.print(myarray[i]+" ");
        }
        System.out.println();
        System.out.println("FIRST LARGEST IS:"+largest);
        System.out.println("SECOND LARGEST IS:"+secondlargest);
	}
}
