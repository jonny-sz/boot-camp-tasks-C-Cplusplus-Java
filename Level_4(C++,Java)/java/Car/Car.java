public class Car {
    private double fuelAmount;
    private double fuelCapacity;
    private double fuelConsumption;
    private Point location;
    private String model;
    
    public Car(double capacity, double consumption, Point location, String model) {
        this.fuelCapacity = capacity;
        this.fuelConsumption = consumption;
        this.location = location;
        this.model = model;
        this.fuelAmount = 10;
    }
    
    public Car() {
        this(60, 0.6, new Point(0, 0), "Mercedes");
    }
    
    public double getFuelAmount() {
        return this.fuelAmount;
    }
    
    public double getFuelCapacity() {
        return this.fuelCapacity;
    }
    
    public double getFuelConsumption() {
        return this.fuelConsumption;
    }
    
    public Point getLocation() {
        return this.location;
    }
    
    public String getModel() {
        return this.model;
    }
    
    public void drive(Point destination) throws OutOfFuelException {
        double fuelNeeded = this.location.distance(destination) * this.fuelConsumption;
    
        if ( fuelNeeded > fuelAmount ) {
            throw new OutOfFuelException();
        }
        
        this.location = destination;
        this.fuelAmount -= fuelNeeded;
    }
    
    public void drive(double x, double y) throws OutOfFuelException {
        Point point = new Point(x, y);
    
        this.drive(point);
    }
    
    public void refill(double fuel) throws ToMuchFuelException {
        this.fuelAmount += fuel;
    
        if ( this.fuelAmount > this.fuelCapacity ) {
            throw new ToMuchFuelException();
        }
    }
    
    public String toString() {
        StringBuffer out = new StringBuffer();
        
        out.append("--------------------------------------\n");
        out.append("      Model: ");
        out.append(this.model);
        out.append("\n");
        out.append("       Fuel: ");
        out.append("(");
        out.append(this.fuelAmount);
        out.append("/");
        out.append(this.fuelCapacity);
        out.append(")\n");
        out.append("Сonsumption: ");
        out.append(this.fuelConsumption);
        out.append("\n");
        out.append("   Location: ");
        out.append(this.location);
        out.append("\n");
        out.append("--------------------------------------\n");
        
        return out.toString();
    }
}
