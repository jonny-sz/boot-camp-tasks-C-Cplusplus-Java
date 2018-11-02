import java.util.Scanner;

public class DateMain {
    public static void main(String[] args) throws InvalidDateException {
        int day, month, year;
        boolean isDate = false;
        Scanner in = new Scanner(System.in);
        
        for ( ; !isDate; ) {
            try {
                day = in.nextInt();
                month = in.nextInt();
                year = in.nextInt();
                
                Date date = new Date(day, month, year);
                
                isDate = true;
                
                System.out.println(date);
                
            } catch (InvalidDateException exc) {
                System.out.println(exc.text);
            }
        }
        
        in.close();
        
        System.out.println("Well done!!!");
    }
}
