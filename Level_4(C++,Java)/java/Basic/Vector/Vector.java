public class Vector implements Cloneable {
    private double x;
    private double y;
    
    public Vector(double x, double y) {
        this.x = x;
        this.y = y;
    }
    
    public Vector() {
        this(0.0, 0.0);
    }
    
    public Vector clone() throws CloneNotSupportedException {
        return (Vector) super.clone();
    }
    
    public double getX() {
        return this.x;
    }
    
    public double getY() {
        return this.y;
    }

    public void setX(double value) {
        this.x = value;
    }
    
    public void setY(double value) {
        this.y = value;
    }
    
    public double len() {
        return Math.hypot(this.x, this.y);
    }
    
    public boolean equals(Vector other) {
        return this.x == other.x && this.y == other.y;
    }
    
    public boolean notEquals(Vector other) {
        return this.x != other.x && this.y != other.y;
    }
    
    public void increment(Vector other) {
        this.x += other.x;
        this.y += other.y;
    }
    
    public void decrement(Vector other) {
        this.x -= other.x;
        this.y -= other.y;
    }
    
    public Vector sum(Vector other) {
        Vector tmp = new Vector(this.x, this.y);
        
        tmp.increment(other);
        
        return tmp;
    }
    
    public static Vector sum(Vector a, Vector b) {
        Vector tmp = new Vector(a.x, a.y);
        
        tmp.increment(b);
        
        return tmp;
    }
    
    public Vector diff(Vector other) {
        Vector tmp = new Vector(this.x, this.y);
        
        tmp.decrement(other);
        
        return tmp;
    }
    
    public static Vector diff(Vector a, Vector b) {
        Vector tmp = new Vector(a.x, a.y);
        
        tmp.decrement(b);
        
        return tmp;
    }
    
    public String toString() {
        StringBuffer out = new StringBuffer();
        
        out.append("(");
        out.append(this.x);
        out.append(", ");
        out.append(this.y);
        out.append(")");
        
        return out.toString();
    }
}
