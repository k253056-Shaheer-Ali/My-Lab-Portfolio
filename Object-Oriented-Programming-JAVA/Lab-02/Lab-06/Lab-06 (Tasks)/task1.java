import java.util.Scanner;
import java.util.*;
//import java.util.ArrayList;

//assume that the input arrays have the same length, and that the order of the stocks in the opening prices array corresponds to the order of the stocks in the closing prices array.

class PortfolioAnalyzer {
    public static double[] calculateDailyProfitLoss(double[] opening, double[] closing, int size) {
        double[] stocks = new double[size];

        for(int i=0; i<size; i++){
            stocks[i] = closing[i] - opening[i];
        }
        return stocks;
    }
}

class task1 {
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);

        System.out.println("Enter number of stocks: ");
        int size = obj.nextInt();
        double[] opening = new double[size];
        double[] closing = new double[size];
        
        System.out.println("Enter opening prices for each stock: ");
        for(int i=0; i<size; i++){
            opening[i] = obj.nextDouble();
        }
        System.out.println("Enter closing prices for each stock: ");
        for(int i=0; i<size; i++){
            closing[i] = obj.nextDouble();
        }

        double[] result = PortfolioAnalyzer.calculateDailyProfitLoss(opening, closing, size);
        
        System.out.println("Resulting Profit/Loss of stocks: ");
        for(double num : result){
            System.out.print(num + " ");
        }

        obj.close();
    }
}
