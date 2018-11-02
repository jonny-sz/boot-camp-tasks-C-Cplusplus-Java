public class Gun {
    private int amount;
    private int capacity;
    private String model;
    private boolean isReady;
    private int totalShots;
    
    public Gun(String model, int capacity) {
        this.amount = 0;
        this.capacity = capacity;
        this.model = model;
        this.isReady = false;
        this.totalShots = 0;
    }
    
    public Gun() {
        this("Beretta", 8);
    }
    
    public int getAmount() {
        return this.amount;
    }
    
    public int getCapacity() {
        return this.capacity;
    }
    
    public boolean ready() {
        return this.isReady;
    }
    
    public String getModel() {
        return this.model;
    }
    
    public int getTotalShots() {
        return this.totalShots;
    }
    
    public void prepare() {
        this.isReady = !(this.isReady);
    
        System.out.println(this.model + " prepare!");
    }
    
    public void reload() {
        this.amount = this.capacity;
        this.isReady = false;
        
        System.out.println(this.model + " reloded!");
    }
    
    public void shoot() throws OutOfRoundsException, NotReadyException {
        if ( this.amount == 0 ) {
            throw new OutOfRoundsException();
        }
        if ( !(this.isReady) ) {
            throw new NotReadyException();
        }
        
        this.totalShots += 1;
        this.amount -= 1;
        
        System.out.println("Bang!");
    }
    
    public String toString() {
        StringBuffer out = new StringBuffer();
        
        out.append(this.model);
        out.append(": ");
        out.append("Ammunition[");
        out.append(this.amount);
        out.append('/');
        out.append(this.capacity);
        out.append("] Ready[");
        
        if ( this.isReady ) {
            out.append("yes] ");
        } else {
            out.append("no] ");
        }
        
        out.append("Total shots[");
        out.append(this.totalShots);
        out.append(']');
        
        return out.toString();
    }
}
