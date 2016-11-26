import java.util.Scanner;
import java.math.BigInteger;

class Main{
public static void main(String args[]){
    Scanner cin = new Scanner(System.in);
    String num1, num2;
    while (cin.hasNext()){
        num1= cin.next();
        num2= cin.next();
        BigInteger b1= new BigInteger (num1);
        BigInteger b2= new BigInteger (num2);
        BigInteger product = b1.multiply(b2);
        System.out.println(product.toString());
    }
}
}