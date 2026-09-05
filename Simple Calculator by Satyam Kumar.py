def simple_calculator():
    """
    A simple command-line calculator supporting +, -, *, /
    """
    print("Welcome to the Python Calculator!")
    print("Supported operations: +, -, *, /")

    while True:
        try:
            # Get input for the first number
            num1 = float(input("\nEnter first number: "))

            # Get operation
            operation = input("Enter operation (+, -, *, /): ").strip()

            # Get input for the second number
            num2 = float(input("Enter second number: "))

            result = 0

            # Perform calculation
            if operation == '+':
                result = num1 + num2
            elif operation == '-':
                result = num1 - num2
            elif operation == '*':
                result = num1 * num2
            elif operation == '/':
                if num2 == 0:
                    print("Error: Division by zero is not allowed.")
                    continue
                result = num1 / num2
            else:
                print("Invalid operation. Please try again.")
                continue

            # Display result
            print(f"\nResult: {num1} {operation} {num2} = {result}")

        except ValueError:
            print("Error: Invalid input. Please enter valid numbers.")
        except KeyboardInterrupt:
            print("\nCalculator closed by user.")
            break

if __name__ == "__main__":
    simple_calculator()
