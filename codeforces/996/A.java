import java.util.Scanner;

public class A_Hit_the_Lottery{
    public static void main(String[] args) {
        // print how many notes does this amount contains = 5482
        Scanner input = new Scanner(System.in) ;
        long amnt = input.nextLong() ;
        long  n100,n20, n10, n5, n1 ;
        long sum = 0 ;



        n100 =  amnt/100 ; // counts how many notes of 100
        amnt%=100 ;


        n20 =  amnt/20 ; // counts how many notes of 20
        amnt%=20 ;

        n10 =  amnt/10 ; // counts how many notes of 10
        amnt%=10 ;

        n5 = amnt/5 ; // counts how many notes of 5
        amnt%=5 ;

        n1 =  amnt/1 ; // counts how many notes of 1
        amnt%=1 ;

        sum =  n100+ n20+ n10+ n5+n1 ;

        // System.out.printf("Note count for %d : \n1000: %d \n500: %d \n200: %d \n100: %d \n50: %d \n20: %d \n10: %d \n5: %d \n2: %d \n1: %d \n", amnt, n1000, n500, n200, n100, n50, n20, n10, n5, n2, n1);
        System.out.println(sum);

    }
}