# Define the menu options
echo "Select an option:"
echo "1. View files"
echo "2. Edit files"
echo "3. Exit"

# Read the user's input
read option

# Process the user's input using a switch statement
case $option in
  1|v|V)
    echo "Viewing files..."
    # Add your code here for viewing files
    ;;
  2|e|E)
    echo "Editing files..."
    # Add your code here for editing files
    ;;
  3|x|X)
    echo "Exiting..."
    exit 0
    ;;
  *)
    echo "Invalid option"
    ;;
esac
