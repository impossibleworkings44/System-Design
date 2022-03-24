
### Notes : 

## Static Class Members
* not instance of object 
* can be directly accessed from class
* static class members are not tied to any object and so cannot access any of the non-static class members. Static class members can however access other static class members.

static int add (int firstNumber, int secondNumber) {
	return firstNumber + secondNumber;
}
