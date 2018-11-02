import java.text.DecimalFormat;

public class Date {
    private int day;
    private int month;
    private int year;

    private void validate(int day, int month, int year) throws InvalidDateException {
        boolean isLeapYear = false;
        int[] days = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        
        if ( year < 1 ) {
            throw new InvalidDateException("Invalid year!");
        }
        
        if ( month < 1 || month > 12 ) {
            throw new InvalidDateException("Invalid month!");
        }
        
        if ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 )) {
            isLeapYear = true;
        }
        
        if ( isLeapYear ) {
            days[2] = 29;
        }
            
        if ( day > days[month] || day < 1) {
            throw new InvalidDateException("Invalid day!");
        }
    }
    
    public Date(int day, int month, int year) throws InvalidDateException {
        this.validate(day, month, year);
        this.day = day;
        this.month = month;
        this.year = year;
    }
    
    public Date() throws InvalidDateException {
        this(1, 1, 1970);
    }
    
    int getDay() {
        return this.day;
    }
    
    int getMonth() {
        return this.month;
    }
    
    int getYear() {
        return this.year;
    }
    
    public String toString() {
        StringBuffer out = new StringBuffer();
        DecimalFormat formatter = new DecimalFormat("00");
        String fDay = formatter.format(this.day);
        String fMonth = formatter.format(this.month);
        
        out.append(fDay);
        out.append(".");
        out.append(fMonth);
        out.append(".");
        out.append(this.year);
        
        return out.toString();
    }
}
