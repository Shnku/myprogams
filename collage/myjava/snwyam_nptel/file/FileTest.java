// package file;

import java.io.File;
import java.io.IOException;

public class FileTest {
    public static void main(String[] args) throws IOException {
        File fileToCheck;
        if (args.length > 0) {
            for (int i = 0; i < args.length; i++) {
                fileToCheck = new File(args[i]);
                // fileToCheck.getPath();
                // fileToCheck.getName();
                // fileToCheck.getInfo();
                getPaths(fileToCheck);
                getInfo(fileToCheck);
            }
        } else
            System.out.println("Usage:java file test ");
    }

    public static void getPaths(File f) throws IOException {
        System.out.println("name: " + f.getName());
        System.out.println("path: " + f.getPath());
        System.out.println("parent: " + f.getParent());
    }

    public static void getInfo(File f) throws IOException {
        if (f.exists()) {
            System.out.println("File exists...on storage");
            System.out.println(f.canRead() ? "+r" : "-r");
            System.out.println(f.canWrite() ? "+w" : "-w");
            System.out.println("last modified: " + f.lastModified());
            System.out.println("file size is " + f.length() + "bytes");
        } else
            System.out.println("file doesnot exists..");
    }
}

/*
name: abc.txt
path: abc.txt
parent: null
File exists...on storage
+r
+w
last modified: 1694585085751
file size is 15bytes

 */
