class Test {
    public static void main(String[] args) {
        String name = "Harshita";
        int code = name.hashCode();
        System.out.println("Name's hashCode :" + code);
    }
}

/*
    * Hash code is a method of object class which is an integer value generated
      by the JVM for an object at the time of its creation.
    * When the hashCode() method is called on an object, it returns an
      integer value that is used to identify the object in hash-based collections.
*/