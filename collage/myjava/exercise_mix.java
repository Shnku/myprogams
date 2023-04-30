import java.util.Scanner;

class quardratic_eq {
    double c, b, a;

    quardratic_eq(double a, double b, double c) {
        this.c = c;
        this.b = b;
        this.a = a;
    } // there is no default argument in java...

    double[] find_root() {
        double root[] = new double[2];
        root[0] = (-b + Math.sqrt(b * b - 4 * a * c)) / (2 * a);
        root[1] = (-b - Math.sqrt(b * b - 4 * a * c)) / (2 * a);
        return root;
    }
}

class CP_SP_exercise {
    double cost, sell;
    double profit, loss;

    CP_SP_exercise(double cost, double sell) {
        this.cost = cost;
        this.sell = sell;
    }

    double profit_loss() {
        if (sell < cost) {
            loss = cost - sell;
            return loss / cost * 100;
        } else {
            profit = sell - cost;
            return profit / cost * 100;
        }
    }
}

/**
 * exercise_mix
 */
public class exercise_mix {

    public static void main(String[] args) {

        /* _________quardratic_eq solver__________ */
        quardratic_eq myequation = new quardratic_eq(1, 5, 6);
        double root_ar[] = myequation.find_root();
        /*
         * for (double d : root_ar) {
         * System.out.println("the roots are: " + d);
         * }
         */
        for (int i = 0; i < root_ar.length; i++) {
            System.out.println("the " + (i + 1) + "st root is: " + root_ar[i]);
            // if not using (i+1) the it put them differently...
        }

        /* ______profit & loss calculator__________ */
        try (Scanner input = new Scanner(System.in)) {
            System.out.println("Enter cost_price & selling_price: ");
            double cost = input.nextDouble();
            double sell = input.nextDouble();
            CP_SP_exercise mysell = new CP_SP_exercise(cost, sell);
            System.out.printf("net : %.2f %%", mysell.profit_loss());
            // printf means formated output....
        } catch (Exception e) {
            System.out.println("ERROR INPUT TYPE__....");
        }

    }
}

// output....
/*
 * javac exercise_mix.java && java exercise_mix
 * the root is: -2.0
 * net : 10000.0
 * 
 * 
 * //after using rerturining array ....//foreach...
 * javac exercise_mix.java && java exercise_mix
 * the roots are: -2.0
 * the roots are: -3.0
 * net : 10000.0
 * 
 * 
 * the 1st root is: -2.0
 * the 2st root is: -3.0
 * net : 22.22%
 * 
 * 
 * javac exercise_mix.java && java exercise_mix
 * the 1st root is: -2.0
 * the 2st root is: -3.0
 * Enter cost_price & selling_price:
 * lhj
 * ERROR INPUT TYPE__....
 * 
 */
