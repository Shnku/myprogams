// import java.util.*;
// import java.text.*;
import java.text.NumberFormat;
import java.util.Locale;
import java.util.Scanner;

public class Solution {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();
        
        // Write your code here.
        String us = NumberFormat.getCurrencyInstance(Locale.US).format(payment);
        String india = NumberFormat.getCurrencyInstance(new Locale("en","IN")).format(payment);
        //public Locale(String language,String country) 
        /*india doesnot have any format*/
        String china=NumberFormat.getCurrencyInstance(Locale.CHINA).format(payment);
        String france=NumberFormat.getCurrencyInstance(Locale.FRANCE).format(payment);

        //or we can also do..
        // Format the payment value as a currency string for the US locale
        NumberFormat currencyFormat = NumberFormat.getCurrencyInstance(Locale.GERMANY);
        //! NumberFormat currencyFormat = NumberFormat.getInstance(Locale.GERMANY); //error...
        // Format the currency value
        String formattedAmount = currencyFormat.format(payment);
        
        System.out.println("US: " + us);
        System.out.println("India: " + india);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
}
