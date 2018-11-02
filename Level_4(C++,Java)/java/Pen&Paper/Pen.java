public class Pen {
    private int inkAmount;
    private int inkCapacity;
    
    public Pen(int inkCapacity) {
        this.inkCapacity = inkCapacity;
        this.inkAmount = inkCapacity;
    }
    
    public Pen() {
        this(4096);
    }
    
    public int getInkAmount() {
        return this.inkAmount;
    }
    
    public int getInkCapacity() {
        return this.inkCapacity;
    }
    
    public void write(Paper paper, String message) throws OutOfInkException, OutOfSpaceException {
        int tmp = paper.getSymbols();
        int symbolsWrited;
        int inkNeeded;
        int gaps = 0;
        
        if ( this.inkAmount == 0 ) {
            throw new OutOfInkException();
        }
        
        if ( message.length() <= this.inkAmount ) {
            paper.addContent(message);
        } else {
            paper.addContent(message.substring(0, this.inkAmount));
        }
        
        symbolsWrited = paper.getSymbols() - tmp ;
        
        for ( int i = 0; i < symbolsWrited; i++ ) {
            if ( message.charAt(i) == ' ' || message.charAt(i) == '\n' ) {
                gaps += 1;
            }
        }
        
        inkNeeded = symbolsWrited - gaps;
        this.inkAmount -= inkNeeded;
    }
    
    public void refill() {
        this.inkAmount = this.inkCapacity;
    }
}
