import java.util.ArrayList;
import java.util.Scanner;

class task3 {
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);

        ArrayList<Integer> list = new ArrayList<>();

        System.out.println("Enter 5 numbers: ");
        //list.add(obj.nextInt());
        //list.add(obj.nextInt());
        //.add(obj.nextInt());
        //list.add(obj.nextInt());
        //list.add(obj.nextInt());
        for(int i=0; i<5; i++){
            list.add(obj.nextInt());
        }

        int flag = 0, sumEven = 0, sumOdd = 0;
        for(int i=0; i<list.size(); i++){
            int num = list.get(i);
            if(num == 2 || num == 3 || (num > 1 && num % 2 != 0 && num % 3 != 0)){  //logic is not valid for big numbers sir
                flag = 1;
            }

            if(i % 2 == 0){
                sumEven += list.get(i);
            }
            else{
                sumOdd += list.get(i);
            }
        }

        if(flag == 1){
            System.out.println("List have prime numbers!");
            System.out.println("Sum of numbers at even indices: " + sumEven);
        }
        else{
            System.out.println("Sum of numbers at odd indices: " + sumOdd);
        }

        obj.close();
    }
}

//for (int i = 2; i <= Math.sqrt(num); i++) if (num % i == 0) { isPrime = false; break; }kkkkk