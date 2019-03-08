public class MyClass {

    // method
    static void sayHello() {
        System.out.println("OK, Computer");
    }

    // method with parameter
    static void sayHelloTo(String name) {
        System.out.println("Hello " + name);
    }

    // method with return type
    static int sum(int val1, int val2) {
        return val1 + val2;
    }

    // another method with return type
    static int max(int a, int b) {
        if(a>b) {
            return a;
        }
        else {
            return b;
        }
    }

    // Reference types
    static void celebrateBirthday(Person p) {
        p.setAge(p.getAge() + 1);
    }

    public static void main(String[] args) {
        // calling method
        sayHello();

        // calling method with argument
        sayHelloTo("Paulo");

        // calling method with return type
        int x = sum(2, 5);
        System.out.println(x);
        
        // calling max
        int res = max(7, 42);
        System.out.println(res);

        // creating Animal object
        Animal dog = new Animal();
        dog.Bark();

        // creating Vehicle objects
        Vehicle v1 = new Vehicle();
        Vehicle v2 = new Vehicle("Green");

        // assignment value
        //v1.setColor("Red");

        // get value
        System.out.println(v1.getColor());

        // calling method
        v2.horn();

        // Reference type
        Person j;
        j = new Person("John");
        j.setAge(20);
        celebrateBirthday(j);
        System.out.println(j.getAge());
    }
}
