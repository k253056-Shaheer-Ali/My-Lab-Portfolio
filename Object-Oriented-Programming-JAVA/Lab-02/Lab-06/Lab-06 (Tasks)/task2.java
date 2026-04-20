import java.util.ArrayList;
import java.util.Scanner;

class DuplicateRemover {
    public static ArrayList<Integer> removeDuplicates(ArrayList<Integer> list) {
        
        for(int i=0; i<list.size(); i++){
            for(int j=i+1; j<list.size(); j++){
                if(list.get(i).equals(list.get(j))){
                    list.remove(j);
                    j--;  // because after removing element at specific index , other subsequent elements are going to get to left by an index
                }
            }
        }
        return list;
    }
}

class task2 {
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);

        ArrayList<Integer> list = new ArrayList<>();
        System.out.println("Enter integer inputs and press -1 to exit: ");

        while(true) {
            int num = obj.nextInt();
            if(num == -1){
                break;
            }
            list.add(num);
        }

        System.out.println("\nOriginal: " + list);
        ArrayList<Integer> result = DuplicateRemover.removeDuplicates(list);
        System.out.println("Without duplicates: " + result);

        obj.close();
    }
}