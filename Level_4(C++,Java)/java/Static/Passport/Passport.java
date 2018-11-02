public class Passport {
    private int id;
    private String series;
    private String name;
    private String surname;
    private Date dateOfBirth;
    
    private static final int startId = 100000;
    private static final int finalId = 999999;
    private static int lastId = startId;
    private static char[] lastSeries = new char[]{'A','A'};
    
    private void validateSeries() throws OutOfSeriesException {
        if ( lastSeries[0] == 'Z' && lastSeries[1] == 'Z' && lastId > finalId ) {
            throw new OutOfSeriesException();
        }
        if ( lastSeries[1] == 'Z' && lastId > finalId ) {
            lastSeries[0] += 1;
            lastSeries[1] = 'A';
            lastId = startId;
        } else if ( lastId > finalId ) {
            lastSeries[1] += 1;
            lastId = startId;
        }
    }

    private static void validateNewSeries(String newSeries) throws InvalidSeriesException {
        if ( newSeries.length() != lastSeries.length ) {
            throw new InvalidSeriesException();
        }
        if ( newSeries.charAt(0) < lastSeries[0] || newSeries.charAt(0) > 'Z' ) {
            throw new InvalidSeriesException();
        }
        if ( newSeries.charAt(1) < 'A' || newSeries.charAt(1) > 'Z' ) {
            throw new InvalidSeriesException();
        }
        if ( newSeries.charAt(0) == lastSeries[0] && newSeries.charAt(1) < lastSeries[1] ) {
            throw new InvalidSeriesException();
        }
    }
    
    public Passport(String surname, String name, Date dateOfBirth) throws OutOfSeriesException {
        this.validateSeries();
        this.id = lastId;
        this.series = new String(lastSeries);
        this.name = name;
        this.surname = surname;
        this.dateOfBirth = dateOfBirth;
        lastId += 1;
    }

    public Passport(Passport copy) throws OutOfSeriesException {
        this.validateSeries();
        this.id = lastId;
        this.series = new String(lastSeries);
        this.name = copy.name;
        this.surname = copy.surname;
        this.dateOfBirth = copy.dateOfBirth;
        lastId += 1;
    }
    
    public int getId() {
        return this.id;
    }

    public String getSeries() {
        return this.series;
    }

    public String getName() {
        return this.name;
    }

    public String getSurname() {
        return this.surname;
    }

    public Date getDate() {
        return this.dateOfBirth;
    }
    
    public static void setSeries(String newSeries) throws InvalidSeriesException {
        validateNewSeries(newSeries);
        
        lastSeries[0] = newSeries.charAt(0);
        lastSeries[1] = newSeries.charAt(1);
        lastId = startId;
    }

    public static void setSeries(String newSeries, int newId) throws InvalidSeriesException, InvalidIdException {
        validateNewSeries(newSeries);
        
        if ( newId < startId || newId > finalId ) {
            throw new InvalidIdException();
        }
        
        lastSeries[0] = newSeries.charAt(0);
        lastSeries[1] = newSeries.charAt(1);
        lastId = newId;
    }
    
    public String toString() {
        StringBuffer out = new StringBuffer();
        
        out.append("--------------------------------\n");
        out.append("     Passport: ");
        out.append(this.series);
        out.append(" ");
        out.append(this.id);
        out.append("\n");
        out.append("      Surname: ");
        out.append(this.surname);
        out.append("\n");
        out.append("         Name: ");
        out.append(this.name);
        out.append("\n");
        out.append("Date of birth: ");
        out.append(this.dateOfBirth);
        
        return out.toString();
    }
}
