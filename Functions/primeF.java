import java.util.Scanner;

public class primeF{

  public static void checkPrime(int num){

    int isPrime=1;

    for(int i=2;i<num;i++){

      if(num%i==0)

      {

         isPrime=0;

         break;    

      }

    }

    if(isPrime==1){

      System.out.println(num+" is Prime number");

    }

    else{

      System.out.println(num+" is not Prime number");

    }

  }

  public static void main (String[] agrs){

    Scanner input=new Scanner (System.in);

    System.out.println("\n\t\t\tProg. to check prime no. using function");

    System.out.print("\nEnter any number:");

    int no=input.nextInt();

    checkPrime(no);

    input.close();

  }

}
