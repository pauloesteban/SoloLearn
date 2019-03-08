public class Vehicle {
    // Attributes
    int maxSpeed;
    int wheels;
    private String color;
    double fuelCapacity;

    // Methods
    void horn() {
        System.out.println("Beep!");
    }

    // Getter
    public String getColor() {
        return color;
    }

    // Setter
    public void setColor(String c) {
        this.color = c;
    }

    // Constructor
    Vehicle() {
        this.setColor("Red");
    }

    // Constructor with parameter
    Vehicle(String c) {
        this.setColor(c);
    }
}
