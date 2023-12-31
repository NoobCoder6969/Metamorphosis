import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

class Zion {
    public static void main(String[] args) {
        printBirthdays(31, 1, "January");
        printBirthdays(29, 2, "February");
        printBirthdays(31, 3, "March");
        printBirthdays(30, 4, "April");
        printBirthdays(31, 5, "May");
        printBirthdays(30, 6, "June");
        printBirthdays(31, 7, "July");
        printBirthdays(31, 8, "August");
        printBirthdays(30, 9, "September");
        printBirthdays(31, 10, "October");
        printBirthdays(30, 11, "November");
        printBirthdays(31, 12, "December");
    }

    static void printBirthdays(int day, int monthnum, String month) {
        LocalDate date = LocalDate.of(LocalDate.now().getYear(), monthnum, 4);
        if (date.getDayOfMonth() <= day) {
            String formattedDate = date.format(DateTimeFormatter.ofPattern("MMMM d"));
            System.out.println(month + "  " + formattedDate);
        }
    }
}