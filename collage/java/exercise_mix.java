
class quardratic_eq {
    double c, b, a;

    quardratic_eq(double a, double b, double c) {
        this.c = c;
        this.b = b;
        this.a = a;
    }

    double find_root() {
        double root;
        root = (-b + Math.sqrt(b * b - 4 * a * c)) / (2 * a);
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
        quardratic_eq myequation = new quardratic_eq(3, 5, 2);
        System.out.println("the root is: " + myequation.find_root());

        CP_SP mysell = new CP_SP(45000, 55000);
        System.out.println("net : " + mysell.profit_loss());

    }
}

// output....
/*
 * javac exercise_mix.java && java exercise_mix
 * the root is: -0.6666666666666666
 * net : 10000.0
 * 
 */
