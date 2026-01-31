public class task8 {
    public static void main(String[] args){
        int start = 1;
        int end = 100;
        int evenSum=0 , oddSum=0;

        for(int i=start; i<=end; i++){
            if(i % 2 == 0){
                evenSum += i;
            }
            else{
                oddSum += i;
            }
        }

        System.out.println("From range 1-100 :");
        System.out.println("Total sum of all even numbers: " + evenSum);
        System.out.println("Total sum of all odd numbers: " + oddSum);
    }
}
