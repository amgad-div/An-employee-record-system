<h1> An Employee Records System</h1>

  A program to manage a company’s employee records needs to be flexible and have useful features. 
  The feature set for this program includes the following.
    <br> ? The ability to add an employee 
    <br>? The ability to fire an employee 
    <br>? The ability to promote an employee 
    <br> ? The ability to view all employees, past and present 
    <br> ? The ability to view all current employees 
    <br> ? The ability to view all former employees
    <br> The design for this program divides the code into three parts.
  The Employee class encapsulates the information describing a single employee.
  The Database class manages all the employees of the company. 
  A separate UserInterface file provides the interactivity of the program.
  
  <h2>The Employee Class</h2>
    The Employee class maintains all the information about an employee.
    Its methods provide a way to query and change that information.
    Employees also know how to display themselves on the console. 
    Methods also exist to adjust the employee’s salary and employment status. 
  
  <h2>The Database Class</h2> 
    The Database class uses an array to store Employee objects.
    An integer called mNextSlot is used as a marker to keep track of the next unused array slot.
    This method for storing objects is probably not ideal because the array is of a fixed size.
    
  <h2>The User Interface</h2>
    The final part of the program is a menu-based user interface that makes 
    it easy for users to work with the employee database.
