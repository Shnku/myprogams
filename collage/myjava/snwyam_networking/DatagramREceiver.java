import java.io.IOException;
import java.net.DatagramPacket;
import java.net.DatagramSocket;

public class DatagramREceiver {
    public static void main(String[] args) throws IOException {
        DatagramSocket dp = new DatagramSocket(3008);
        byte[] buffer = new byte[1024];
        DatagramPacket dPacket = new DatagramPacket(buffer, 1024);

        dp.receive(dPacket);
        String str = new String(dPacket.getData(), 0, dPacket.getLength());
        System.out.println(str);
        dp.close();
    }
}
