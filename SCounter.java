class mult extends Thread {
    public void run() {
        for (int i = 1; i <= 1e8 / 2; i++)
            i *= 2;
    }
}

class mult2 extends Thread {
    public void run() {
        for (int i = 1; i <= 1e8 / 2; i++)
            i *= 2;
    }
}

public class SCounter {

    public static void main(String[] args) {
        long startTime = System.nanoTime();
        mult objMult = new mult();
        mult2 objMult2 = new mult2();
        objMult2.start();
        objMult.start();
        long stopTime = System.nanoTime();

        System.out.println(stopTime - startTime);
    }
}