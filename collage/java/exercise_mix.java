
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

class CP_SP {
    double cost, sell;
    double profit, loss;

    CP_SP(double cost, double sell) {
        this.cost = cost;
        this.sell = sell;
    }

    double profit_loss() {
        if (sell < cost) {
            loss = cost - sell;
            return loss;
        } else {
            profit = sell - cost;
            return profit;
        }
    }
}

/**
 * exercise_mix
 */
public class exercise_mix {

    public static void main(String[] args) {
        quardratic_eq myequation = new quardratic_eq(1, 5, 6);

        double arr_of_roots[] = myequation.find_root();
        /*
         * //using for each loop/.....
         * for (double d : arr_of_roots) {
         * System.out.println("the roots are: " + d);
         * }
         */
        for (int i = 0; i < arr_of_roots.length; i++) {
            System.out.println("the " + (i + 1) + "st root is: " + arr_of_roots[i]);
        }
        // if not using (i+1) the it put them differently...

        CP_SP mysell = new CP_SP(45000, 55000);
        System.out.println("net : " + mysell.profit_loss());

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
 */
