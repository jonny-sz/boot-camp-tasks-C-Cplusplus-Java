public class Point implements Cloneable {
    private double x;
    private double y;
    
    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    
    public Point() {
        this(0.0, 0.0);
    }
    
    public Point clone() throws CloneNotSupportedException {
        return (Point) super.clone();
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
    
    public boolean equals(Point other) {
        return this.x == other.x && this.y == other.y;
    }
    
    public boolean notEquals(Point other) {
        return this.x != other.x && this.y != other.y;
    }
    
    public double distance(Point other) {
        return Math.hypot(this.x - other.x, this.y - other.y);
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
