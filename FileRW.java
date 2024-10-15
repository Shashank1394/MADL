// Read and Write from file

import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class FileRW {
    public static void main(String args[]) {
        String filePath = "File.txt";
        Scanner sc = new Scanner(System.in);

        File file = new File(filePath);
        if(!file.exists())
            System.out.println("The file does not exist. It will be created.");

        System.out.print("Enter the content to write to the file: ");
        String input = sc.nextLine();

        try(FileWriter writer = new FileWriter(filePath)) {
            writer.write(input);
            System.out.println("File updated successfully!");
        } catch(IOException e) {
            System.out.println("An error occured while writing to the file.");
            e.printStackTrace();
        }
        
        try(FileReader reader = new FileReader(filePath)) {
            int character;
            System.out.println("File content: ");
            while((character = reader.read()) != -1)
            System.out.print((char) character);
            System.out.println();
        } catch(IOException e) {
            System.out.println("An error occured while writing to the file.");
            e.printStackTrace();
        }

        sc.close();
    }
}