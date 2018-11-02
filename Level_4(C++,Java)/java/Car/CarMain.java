public class CarMain {
    public static void main(String[] args) throws OutOfFuelException, ToMuchFuelException {
        Car bmw = new Car(60, 0.6, new Point(0, 0), "BMW");
        
        Point berlin = new Point(5, 7);
        Point london = new Point(8, 10);
        Point pekin = new Point(-5, -3);
        
        System.out.println("I have a new car!!! Yeeeeeeees!");
        System.out.println(bmw);
        System.out.println("GO to Berlin!");
        
        bmw.drive(berlin);
        
        System.out.println(bmw);
        System.out.println("GO to London!");
        
        bmw.drive(london);
        
        System.out.println(bmw);
        System.out.println("Fuck!!! Out of fuel!");
        
        bmw.refill(50);
        
        System.out.println("But I find a fuel!!!");
        System.out.println(bmw);
        System.out.println("GO to Pekin!");
        
        bmw.drive(-10, -12);
        bmw.drive(berlin);
        
        System.out.println(bmw);
        System.out.println("YouooHoo! I cool traveler!!!");
    }
}
