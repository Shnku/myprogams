import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;

public class DatagramSEnder {
    public static void main(String[] args) {
        try (DatagramSocket ds = new DatagramSocket()) {
            String str = "this message toi be send..";

            InetAddress ip = InetAddress.getByName("127.0.0.1");
            DatagramPacket dp = new DatagramPacket(str.getBytes(), str.length(), ip, 3008);

            ds.send(dp);
            ds.close();
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}
