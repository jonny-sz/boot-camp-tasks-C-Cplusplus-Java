public class Complex implements Cloneable {
    private double real;
    private double imaginary;
    
    public Complex(double real, double imaginary) {
        this.real = real;
        this.imaginary = imaginary;
    }
    
    public Complex() {
        this(0, 0);
    }
    
    public Complex clone() throws CloneNotSupportedException {
        return (Complex) super.clone();
    }
    
    public double getReal() {
        return this.real;
    }
    
    public double getImaginary() {
        return this.imaginary;
    }
    
    public boolean equals(Complex other) {
        return this.real == other.real && this.imaginary == other.imaginary;
    }
    
    public boolean notEquals(Complex other) {
        return this.real != other.real && this.imaginary != other.imaginary;
    }
    
    public void increment(Complex other) {
        this.real += other.real;
        this.imaginary += other.imaginary;
    }
    
    public void decrement(Complex other) {
        this.real -= other.real;
        this.imaginary -= other.imaginary;
    }
    
    public Complex sum(Complex other) {
        Complex tmp = new Complex(this.real, this.imaginary);
        
        tmp.increment(other);
        
        return tmp;
    }
    
    public static Complex sum(Complex a, Complex b) {
        Complex tmp = new Complex(a.real, a.imaginary);
        
        tmp.increment(b);
        
        return tmp;
    }
    
    public Complex diff(Complex other) {
        Complex tmp = new Complex(this.real, this.imaginary);
        
        tmp.decrement(other);
        
        return tmp;
    }
    
    public static Complex diff(Complex a, Complex b) {
        Complex tmp = new Complex(a.real, a.imaginary);
        
        tmp.decrement(b);
        
        return tmp;
    }
    
    public Complex product(Complex other) {
        Complex tmp = new Complex(this.real, this.imaginary);
        
        tmp.real = this.real * other.real - this.imaginary * other.imaginary;
        tmp.imaginary = this.real * other.imaginary + this.imaginary * other.real;
        
        return tmp;
    }
    
    public static Complex product(Complex a, Complex b) {
        Complex tmp = new Complex(a.real, a.imaginary);
        
        tmp.real = a.real * b.real - a.imaginary * b.imaginary;
        tmp.imaginary = a.real * b.imaginary + a.imaginary * b.real;
        
        return tmp;
    }
    
    public String toString() {
        StringBuffer out = new StringBuffer();
        
        out.append(this.real);
        
        if ( this.imaginary < 0 ) {
            out.append(this.imaginary);
            out.append("i");
        } else {
            out.append("+");
            out.append(this.imaginary);
            out.append("i");
        }
        
        return out.toString();
    }
}
