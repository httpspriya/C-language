import java.util.Scanner;

public class tableN{

  public static void tableOfN(int no){

    int i, mult;

    for(i=1;i<=10;i++){

      mult=i*no;

      System.out.println(no+" × "+i+" = "+mult);

    }

  }

  public static void main(String[] args){

    Scanner input=new Scanner (System.in);

    System.out.println("\n\t\t\tProg. to print table of any number using function");

    System.out.print("\nEnter any number:");

    int N=input.nextInt();

    tableOfN(N);

    input.close();

  }

}
