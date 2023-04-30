package pkg1;

public class CP_SP_exercise {
    double cost, sell;
    double profit, loss;

    public CP_SP_exercise(double cost, double sell) {
        this.cost = cost;
        this.sell = sell;
    }

    public double profit_loss() {
        if (sell < cost) {
            loss = cost - sell;
            return loss / cost * 100;
        } else {
            profit = sell - cost;
            return profit / cost * 100;
        }
    }
}
