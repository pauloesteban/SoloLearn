public class Vehicle {
    int maxSpeed;
    int wheels;
    private String color;
    double fuelCapacity;

    // Constructor
    Vehicle() {
        this.setColor("Red");
    }

    // Constructor
    Vehicle(String c) {
        this.setColor(c);
    }

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
}
