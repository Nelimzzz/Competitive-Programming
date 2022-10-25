
import java.util.*;
//import java.text.*;
//import java.math.*;
//import java.util.regex.*;

public class Grade {

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            for(int a = 0; a < n; a++){
                int grade = sc.nextInt();
                if (grade >= 38) {
                    if (grade % 5 >= 3) {
                        grade += 5 - (grade % 5);
                    }
                }
                System.out.println(grade);
            }
        }
    }
}
