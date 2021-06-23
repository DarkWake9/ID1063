/*Q5. Create your own pair of header and C files, and call it from another program.*/

/*My custom defined Header file which functions as a basic calculator 
which performs addition, subtraction, multiplication and division*/

//Function to add two variables x and y
double add(const double x, const double y)
{
    double result = x + y;
    return result;
}

//Function to subtract two variables x and y
double subtract(const double x, const double y)
{
    double result = x - y;
    return result;
}

//Function to multiply two variables x and y
double multiply(const double x, const double y)
{
    double result = x * y;
    return result;
}

//Function to divide to variables x and y
double divide(const double x, const double y)
{
    double result = x / y;
    return result;
}

//End of the header file