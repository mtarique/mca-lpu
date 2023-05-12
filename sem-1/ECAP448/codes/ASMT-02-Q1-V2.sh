# Write a shell script to use a switch statement to process a menu selection, using both upper and lower-case options  
#!/bin/bash

echo "Select an option:"
echo "a) Option A"
echo "b) Option B"
echo "c) Option C"

read option

case "$option" in
  a|A)
    echo "You selected option A"
    ;;
  b|B)
    echo "You selected option B"
    ;;
  c|C)
    echo "You selected option C"
    ;;
  *)
    echo "Invalid option selected"
    ;;
esac
