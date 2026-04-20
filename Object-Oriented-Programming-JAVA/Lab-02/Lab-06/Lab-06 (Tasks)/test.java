import java.util.*;

class test {
    public static void main(String[] args) {
        ArrayList<Integer> numbers = new ArrayList<>();

        for(int i=0; i<3; i++) {
            numbers.add(i+1);
        }
        System.out.println(numbers + " Size: " + numbers.size());
        
    }
}