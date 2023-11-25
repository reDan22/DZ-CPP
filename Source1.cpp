#include <iostream>
#include <cmath>

//первое задание
double areaOfTrap(double b1, double b2, double h) { //создаем функцию для нахождения площади трапеции.
    return 0.5 * (b1 + b2) * h;
}

//второе задание
double circleLength(double rad) { //создаем функцию для нахождения длины окружности
    return 2 * 3.14 * rad;
}

double circleArea(double rad) { //создаем функцию для нахождения площади круга
    return 3.14 * pow(rad, 2);
}

//третье задание
double triangleArea(double base, double height) { //функция для нахождения площади прямоугольного треугольника
    return 0.5 * base * height;
}

double hypot(double side1, double side2) { //функция для нахождения гипотенузы прямоугольного треугольника
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

//четвертое задание
int summaOfDigits(int number) {
    int summa = 0;
    while (number != 0) {
        summa += number % 10; //Вычисляем остаток от деления числа на 10 с помощью оператора %. Получаем последнюю цифру. Эта цифра добавляется к переменной summa.
        number /= 10; //Число делим на 10 с помощью оператора /, чтобы удалить последнюю цифру и перейти к следующей.
    }
    return summa;
}

//пятое задание
void decToPolar(double x, double y, double& r, double& theta) { //создаем функцию для перевода декартовых координат в полярные
    r = sqrt(x * x + y * y); //формулы 
    theta = atan2(y, x);
}

//шестое задание
void polarToDec(double r1, double theta1, double& x1, double& y1) { //создаем функцию для перевода полярных координат в декартовы
    x1 = r1 * cos(theta1); //формулы
    y1 = r1 * sin(theta1);
}

//седьмое задание
void equation(double a, double b, double c) { //функция для нахождения дискриминанта
    double discr = b * b - 4 * a * c;

    if (discr > 0) {                          //если дискриминант больше 0, то два корна
        double root1 = (-b + sqrt(discr)) / (2 * a);
        double root2 = (-b - sqrt(discr)) / (2 * a);

        std::cout << "The roots of the quadratic equation are: " << root1 << " and " << root2 << std::endl;
    }
    else if (discr == 0) {                    //если дискриминант равен 0, то один корень
        double root = -b / (2 * a);

        std::cout << "The quadratic equation has a double root: " << root << std::endl;
    }
    else {                                    //нет действительных корней
        std::cout << "The quadratic equation has complex roots." << std::endl;
    }
}

//восьмое задание
void findMedians(double a, double b, double c) {  //создаем функцию для нахождения медиан треугольника

    double m1 = 0.5 * std::sqrt(2 * b * b + 2 * c * c - a * a); //находим медианы исходного треугольника
    double m2 = 0.5 * std::sqrt(2 * a * a + 2 * c * c - b * b);
    double m3 = 0.5 * std::sqrt(2 * a * a + 2 * b * b - c * c);


    double m1_new = 0.5 * std::sqrt(2 * m2 * m2 + 2 * m3 * m3 - m1 * m1); //находим медианы треугольника, сторонами которого являются медианы исходного треугольника
    double m2_new = 0.5 * std::sqrt(2 * m1 * m1 + 2 * m3 * m3 - m2 * m2);
    double m3_new = 0.5 * std::sqrt(2 * m1 * m1 + 2 * m2 * m2 - m3 * m3);


    std::cout << "The medians of a triangle whose sides are the medians of the original triangle: " << std::endl; //выводим результаты
    std::cout << "m1_new: " << m1_new << std::endl;
    std::cout << "m2_new: " << m2_new << std::endl;
    std::cout << "m3_new: " << m3_new << std::endl;

}

//девятое задание 
void calculateTime(int seconds) { //создаем функцию для определения целого числа часов и минут
    int hours = seconds / 3600;  //определяем количество целых часов
    int minutes = (seconds % 3600) / 60;  //определяем количество целых минут

    std::cout << "It's been " << hours << " hours and " << minutes << " minutes since the beginning of the day." << std::endl; // выводим результаты
}

//десятое задание
void triangleIsosceles(int a, int b, int c) { //создаем функцию для проверки треугольника на равнобедренность
    if ((a == b) || (a == c) || (b == c)) {         //если у треугольника равны любые две его стороны, то он равнобедренный
        std::cout << "The triangle is isosceles." << std::endl;
    }
    else {
        std::cout << "The triangle is not isosceles." << std::endl;
    }
}

//одиннадцатое задание
void discount(int a) { //создаем функцию для проверки, получит ли человек скидку
    if (a > 1000) {
        std::cout << "Since the purchase price is more than 1000 rubles, then your discount is 10%. Your price is " << a * 0.9 << std::endl; //применяем скидку 10%
    }
    else {
        std::cout << "There will be no discount. Your price is " << a << " rubles" << std::endl; //скидки нет
    }
}

//двенадцатое задание
void recommendWeight(double heighthuman, double weight) { //создаем функцию для нахождения идеального веса человека
    double idealWeight = heighthuman - 100; //формула

    if (weight < idealWeight) {
        std::cout << "You should gain weight. The ideal weight for you: " << idealWeight << " kg\n"; //слишком худой
    }
    else if (weight > idealWeight) {
        std::cout << "You should lose weight. The ideal weight for you: " << idealWeight << " kg\n"; //слишком толстый
    }
    else {
        std::cout << "You're already at your ideal weight!\n"; //идеал 
    }
}

//тринадцатое задание
bool multiplication(int number1, int number2, int answer) { //создаем функцию для того, чтобы определить, правильно ли человек посчитал
    return answer == number1 * number2;
}

//четырнадцатое задание
double calculateCost(double duration, int dayOfWeek) {
    double cost = duration * 2; /*я не понял, для чего нужно вводить продолжительность разговора,
                              если нам неизвестна стоимость минуты переговоров, исходя из условия задания,
                              поэтому пусть минута беседы будет стоить два доллара*/

    if (dayOfWeek == 6 || dayOfWeek == 7) { //если суббота или воскресенье
        cost *= 0.8; //применяем скидку 20%
    }

    return cost;
}

//пятнадцатое задание
void monthAndSeason(int month) { //создаем функцию для определения месяца и времени года
    std::string monthName;
    std::string season;

    if (month == 1) {
        monthName = "January";
        season = "Winter";
    }
    else if (month == 2) {
        monthName = "February";
        season = "Winter";
    }
    else if (month == 3) {
        monthName = "March";
        season = "Spring";
    }
    else if (month == 4) {
        monthName = "April";
        season = "Spring";
    }
    else if (month == 5) {
        monthName = "May";
        season = "Spring";
    }
    else if (month == 6) {
        monthName = "June";
        season = "Summer";
    }
    else if (month == 7) {
        monthName = "July";
        season = "Summer";
    }
    else if (month == 8) {
        monthName = "August";
        season = "Summer";
    }
    else if (month == 9) {
        monthName = "September";
        season = "Autumn";
    }
    else if (month == 10) {
        monthName = "October";
        season = "Autumn";
    }
    else if (month == 11) {
        monthName = "November";
        season = "Autumn";
    }
    else if (month == 12) {
        monthName = "December";
        season = "Winter";
    }
    else {
        std::cout << "Invalid month number!" << std::endl;
        return;
    }

    std::cout << "The month is " << monthName << "." << std::endl;
    std::cout << "The season is " << season << "." << std::endl;
}

//шестнадцатое задание
bool luckyNumber(int number) { //создаем функцию для определения, счастливое ли число

    int left = number / 1000;  /*разбиваем число на две части - левую и правую. переменная left получает сумму цифр в левой части числа.
                               (left % 10) возвращает последнюю цифру в числе, (left / 10) % 10 возвращает предпоследнюю цифру, а left / 100 воз

вращает первую цифру.
                                Суммируя эти значения, мы получаем сумму всех цифр в левой части числа.
                                Аналогично, переменная right получает сумму цифр в правой части числа.*/
    int right = number % 1000;
    int lsumma = left % 10 + (left / 10) % 10 + left / 100;
    int rsumma = right % 10 + (right / 10) % 10 + right / 100;

    if (lsumma == rsumma) {
        return true;
    }
    else {
        return false;
    }
}

//семнадцатое задание
void kopeyka(int number) { //создаем функцию для изменения слова копейка в правильную форму
    int lastDigit = number % 10;

    if (number >= 11 && number <= 19) {
        std::cout << number << " kopeek" << std::endl;
    }
    else if (lastDigit == 1) {
        std::cout << number << " kopeyka" << std::endl;
    }
    else if (lastDigit >= 2 && lastDigit <= 4) {
        std::cout << number << " kopeyki" << std::endl;
    }
    else {
        std::cout << number << " kopeek" << std::endl;
    }
}

//восемнадцатое задание
                              /*1. Изначально переменная initNum содержит исходное число, которое нам нужно проверить на палиндром.
                              2. В цикле while (initNum > 0) выполняются следующие действия до тех пор, пока initNum больше нуля:
                              - Оператор % 10 используется для получения последней цифры числа initNum. Например, если initNum равно 12345, то digit будет равно 5.
                              - Переменная reverse умножается на 10 и к ней прибавляется значение digit. Например, если изначально reverse равно 0, а digit равно 5, то после выполнения этой операции reverse будет равно 5.
                              - Затем число initNum делится на 10 с помощью оператора /= 10. Например, если изначально initNum равно 12345, то после выполнения этой операции initNum станет равным 1234.
                              - Цикл повторяется со следующей цифрой числа initNum, пока все цифры не будут проверены.
                              3. После окончания цикла, переменная reverse будет содержать обратно перевернутое число, полученное из исходного числа initNum.
                              4. Далее можно сравнить исходное число с обратно перевернутым числом. Если они равны, то исходное число является палиндромом.
                              */
bool palindrome(int number) {
    int initNum = number;
    int reverse = 0;

    while (initNum > 0) {
        int digit = initNum % 10;
        reverse = reverse * 10 + digit;
        initNum /= 10;
    }

    if (number == reverse) {
        return true;
    }
    else {
        return false;
    }
}

//девятнадцатое задание
bool initialGreaterThanB(int number, int b) { //создаем функцию для первого пункта задания
    int initialNum = 1;

    while (number > 0) { /*Оператор % возвращает остаток от деления числа на 10, то есть последнюю цифру числа.
                         Затем, полученная цифра умножается на переменную initialNum, которая изначально равна 1. Это позволяет посчитать произведение всех цифр числа.
                         Далее, оператор /= делит число на 10, что позволяет "отбросить" последнюю цифру числа.
                         Таким образом, эти операции повторяются до тех пор, пока число number не станет равным 0, то есть пока все цифры числа не будут обработаны.*/
        int digit = number % 10;
        initialNum *= digit;
        number /= 10;
    }


    if (initialNum > b) {
        return true;
    }
    else {
        return false;
    }
}

bool sumDivisibleBy7(int number) { //задаем функцию для второго пункта задания.
    int sum = 0;

    while (number > 0) {  //логика та же, что я описал выше
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    if (sum % 7 == 0) {
        return true;
    }
    else {
        return false;
    }
}

//двадцатое задание
bool fitRectangle(double a, double b, double c, double d) { //создаем функцию

    if ((a <= c && b <= d) || (a <= d && b <= c)) { /*прямоугольник со сторонами a, b можно поместить в прямоугольник со сторонами c, d так,
                                                    чтобы стороны одного прямоугольника были параллельны сторонам другого, если выполняются эти условия.*/
        return true;
    }
    else {
        return false;
    }
}

int main() {
    //первое задание
    double base1, base2, height;
    std::cout << "Enter the length of the first base of the trapezoid: "; //вводим все данные
    std::cin >> base1;
    std::cout << "Enter the length of the second base of the trapezoid: ";
    std::cin >> base2;
    std::cout << "Enter the height of the trapezoid: ";
    std::cin >> height;

    double area = areaOfTrap(base1, base2, height); //находим площадь фигуры
    std::cout << "Trapezoid Area: " << area << std::endl; //выводим площадь трапеции


    //второе задание
    double rad;
    std::cout << "Enter the radius of the circle: "; //вводим радиус
    std::cin >> rad;

    double length = circleLength(rad); //находим длину окружности
    std::cout << "Circle Length: " << length << std::endl; //выводим ее

    double area1 = circleArea(rad); //находим площадь круга
    std::cout << "Circle Area: " << area1 << std::endl; //выводим ее


    //третье задание
    double base, height1;
    std::cout << "Enter the base and height of the triangle: "; //вводим нужные данные
    std::cin >> base >> height1;

    double triangle_Area = triangleArea(base, height1); //находим площадь
    std::cout << "Area of the triangle: " << triangle_Area << std::endl;

    double side1, side2;
    std::cout << "Enter the lengths of the two sides of the triangle: "; //вводим нужные данные
    std::cin >> side1 >> side2;

    double hyp = hypot(side1, side2); //находим гипотенузу
    std::cout << "Hypotenuse of the triangle: " << hyp << std::endl;


    //четвертое задание
    int number;
    std::cout << "Enter a four-digit number: "; //вводим 4х значное число
    std::cin >> number;

    int summa = summaOfDigits(number); //находим сумму
    std::cout << "The sum of the digits of the number is: " << summa << std::endl; //выводим сумму


    //пятое задание
    double x, y, r, theta;
    std::cout << "Enter the value of x: "; //вводим данные
    std::cin >> x;
    std::cout << "Enter the value of y: ";
    std::cin >> y;
    decToPolar(x, y, r, theta); //вызываем функцию

    std::cout << "The polar coordinates are: (" << r << ", " << theta << " radians)" << std::endl; //выводим координаты


    //шестое задание
    double r1, theta1, x1, y1;
    std::cout << "Enter polar coordinates (r, theta): "; //вводим данные
    std::cin >> r1 >> theta1;
    polarToDec(r1, theta1, x1, y1); //вызываем функцию

    std::cout << "The Cartesian coordinates are: (" << x1 << ", " << y1 << ")" << std::endl; //выводим координаты


    //седьмое задание
    double a, b, c;
    std::cout << "Enter the coefficients of the quadratic equation (a, b, c): "; //вводим значение коэффициентов
    std::cin >> a >> b >> c;

    equation(a, b, c); //вызываем функцию


    //восьмое задание
    double side_a, side_b, side_c;
    std::cout << "Enter the value of side a: "; //вводим стороны исходного треугольника
    std::cin >> side_a;
    std::cout << "Enter the value of side b: ";
    std::cin >> side_b;
    std::cout << "Enter the value of side c: ";
    std::cin >> side_c;

    findMedians(side_a, side_b, side_c); //вызываем функцию


    //девятое задание 
    int sec;  //создаем переменную для хранения номера секунды дня
    std::cout << "Enter the number of the second of the day: "; // вводим значения секунды дня
    std::cin >> sec;
    calculateTime(sec); //вызываем функцию для определения целого числа часов и минут

    //десятое задание
    int side_aIso, side_bIso, side_cIso;
    std::cout << "Enter the value of side a: "; //вводим стороны треугольника
    std::cin >> side_aIso;
    std::cout << "Enter the value of side b: ";
    std::cin >> side_bIso;
    std::cout << "Enter the value of side c: ";
    std::cin >> side_cIso;

    triangleIsosceles(side_aIso, side_bIso, side_cIso); //вызываем функцию для проверки на равнобедренность


    //одиннадцатое задание
    int price;
    std::cout << "Enter the price in rubles: "; //вводим цену товара в рублях
    std::cin >> price;

    discount(price); //вызываем функцию для проверки на то, получит ли человек скидку


    //двенадцатое задание
    double heighthuman, weight;

    std::cout << "Enter your height (in centimeters): "; //вводим рост
    std::cin >> heighthuman;

    std::cout << "Enter your weight (in kilograms): "; //вводим вес
    std::cin >> weight;

    recommendWeight(heighthuman, weight); //вызываем функцию


    //тринадцатое задание 
    std::srand(std::time(0));  /*мы используем текущее время(в секундах) в качестве семени для генератора случайных чисел,
                                чтобы каждый раз при запуске программы получать разные случайные числа.*/

    int numberOne = std::rand() % 9 + 1;  //генерируем два случайных числа в диапазоне от 1 до 9
    int numberTwo = std::rand() % 9 + 1;

    std::cout << "Enter the result of multiplying the numbers: " << numberOne << " and " << numberTwo << ": "; //вводим две цифры
    int answer;
    std::cin >> answer;
    if (multiplication(numberOne, numberTwo, answer)) { //вызываем функцию
        std::cout << "You're right, congratulations!\n";
    }
    else {
        std::cout << "Unfortunately, you made a mistake. Try again!\n";
    }


    //четырнадцатое задание
    double duration;
    int dayOfWeek;

    std::cout << "Enter the duration of the conversation (in minutes): "; //вводим длительность переговоров
    std::cin >> duration;

    std::cout << "Enter the day of the week (1-7): "; //вводим день недели
    std::cin >> dayOfWeek;

    double cost = calculateCost(duration, dayOfWeek); //вызываем функцию

    std::cout << "The final cost of the conversation is: $" << cost << std::endl; //выводим результат


    //пятнадцатое задание
    int month;

    std::cout << "Enter the month number (1-12): "; //вводим значение
    std::cin >> month;

    monthAndSeason(month); //вызываем функцию


    //шестнадцатое задание
    int numberLuc;

    std::cout << "Enter a six-digit number: "; //вводим данные
    std::cin >> numberLuc;

    if (numberLuc >= 100000 && numberLuc <= 999999) {
        if (luckyNumber(numberLuc)) {
            std::cout << "The number is a lucky number!" << std::endl; //счастливый
        }
        else {
            std::cout << "The number is not a lucky number!" << std::endl; //несчастливый
        }
    }


    //семнадцатое задание
    int numberKop;

    std::cout << "Enter a number between 1 and 99: "; //вводим значение
    std::cin >> numberKop;

    if (numberKop >= 1 && numberKop <= 99) {
        kopeyka(numberKop);
    }


    //восемнадцатое задание
    int numberPal;
    std::cout << "Enter a four-digit number: "; //вводим значение
    std::cin >> numberPal;

    if (palindrome(numberPal)) {
        std::cout << "The number is a palindrome." << std::endl; //палиндром
    }
    else {
        std::cout << "The number is not a palindrome." << std::endl; //не палиндром
    }


    //девятнадцатое задание
    int numberThreeDigit;
    int B;
    std::cout << "Enter a three-digit number: "; //вводим трехзначное число
    std::cin >> numberThreeDigit;
    std::cout << "Enter the value of b: "; //вводим значение b
    std::cin >> B;

    if (initialGreaterThanB(numberThreeDigit, B)) {
        std::cout << "The product of the digits is greater than the number b." << std::endl; //больше
    }
    else {
        std::cout << "The product of the digits is not greater than the number b." << std::endl; //меньше
    }

    if (sumDivisibleBy7(numberThreeDigit)) {
        std::cout << "The sum of the digits is a multiple of 7." << std::endl; //кратно 7
    }
    else {
        std::cout << "The sum of the digits is not a multiple of 7." << std::endl; //не кратно 7
    }


    //двадцатое задание
    double A1, B1, C1, D1;

    std::cout << "Enter the sides of the rectangles (a, b, c, d): "; //вводим все значения
    std::cin >> A1 >> B1 >> C1 >> D1;

    if (fitRectangle(A1, B1, C1, D1)) { /*проверяем, можно ли прямоугольник со сторонами a, b поместить в прямоугольник со сторонами c, d так,
                                        чтобы стороны одного прямоугольника были параллельны сторонам другого.*/
        std::cout << "Rectangle with sides " << A1 << " and " << B1 << " can fit inside rectangle with sides " << C1 << " and " << D1 << std::endl;
    }
    else {
        std::cout << "Rectangle with sides " << A1 << " and " << B1 << " cannot fit inside rectangle with sides " << C1 << " and " << D1 << std::endl;
    }

    return 0;
}