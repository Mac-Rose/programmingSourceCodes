import java.util.Scanner;

class student {
    int no;
    String name;
    int[] marks = new int[3];

    student(String name, int no) {
        this.name = name;
        this.no = no;
    }

    void display() {
        System.out.println("Student name is : " + name);
        System.out.println("Student roll no is : " + no);
        System.out.println("Student marks are : ");
        for (int i = 0; i < 3; i++) {
            System.out.println(marks[i]);
        }
    }
}

class calc {
    static void getMarks(student obj) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 3; i++) {
            obj.marks[i] = sc.nextInt();
        }

    }

    static void getAverage(student obj) {
        double ans = 0;
        for (int i = 0; i < 3; i++) {
            ans += obj.marks[i];
        }
        System.out.println(ans / 3);
    }
}

public class variables {

    public static void main(String args[]) {
        student st = new student("Saurav", 1);

        calc.getMarks(st);
        calc.getAverage(st);
        st.display();
    }
}