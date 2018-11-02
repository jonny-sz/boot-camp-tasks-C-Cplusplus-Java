public class PassportMain {
    public static void main(String[] args) throws OutOfSeriesException,
                                                  InvalidSeriesException,
                                                  InvalidIdException,
                                                  InvalidDateException {
        
        Passport pass1 = new Passport("Backham", "David", new Date());
    
        Passport.setSeries("BB", 999999);
        
        Passport pass2 = new Passport("Lee", "Bruce", new Date(15,11,1973));
        Passport pass3 = new Passport("Martin", "William", new Date(3,4,2005));
        Passport pass4 = new Passport(pass1);
        
        System.out.println(pass1);
        System.out.println(pass2);
        System.out.println(pass3);
        System.out.println(pass4);
    }
}
