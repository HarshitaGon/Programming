import java.util.Scanner;
import java.util.HashMap;
import java.util.HashSet;

class Test {
    public static void main(String[] args) {
        HashMap<String, Integer> map = new HashMap<>();

        map.put("Harshita", 87);
        map.put("Dipti", 91);
        map.put("Adity", 97);

        System.out.println(map.get("Dipti"));
        System.out.println(map.getOrDefault("Abhi", 76));

        System.out.println(map.containsKey("Harshita"));

        System.out.println(map.isEmpty());

        HashSet<Integer> set = new HashSet<>();

        set.add(56);
        set.add(15);
        set.add(26);
        set.add(50);
        set.add(66);
        set.add(56);        //Doesn't store duplicates value
        set.add(44);

        System.out.println(set);
    }
}