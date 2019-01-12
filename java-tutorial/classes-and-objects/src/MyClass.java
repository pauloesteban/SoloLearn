class MyClass {
    public static void main (String[] args){
        Animal dog = new Animal();
        Vehicle v1 = new Vehicle();
        Vehicle v2 = new Vehicle("Green");

        dog.bark();

        //v1.setColor("red");
        v2.horn();
    }
}
