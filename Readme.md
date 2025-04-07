
---

# Object-Oriented Programming (OOP) in C++

## Overview
**OOP** (Object-Oriented Programming) is a programming paradigm that is based on the concept of "objects" which contain both data (attributes) and functions (methods). It contrasts with **Procedural Programming**, where the focus is on writing functions or procedures that operate on data.

---

## Advantages of OOP
- Faster and easier to execute.
- Provides a clear structure for programs.
- Promotes DRY (Don't Repeat Yourself) principles, making code easier to maintain, modify, and debug.
- Facilitates reusable applications with less code and shorter development time.

---

## Key Concepts
### 1. Class and Object
- A **class** is a blueprint for creating objects. It defines attributes (properties) and methods (functions) that the objects will have.
- An **object** is an instance of a class, meaning it is a specific representation of the blueprint. When objects are created, they inherit all the attributes and methods of the class.

---

## Four Pillars of OOP

### 1. Encapsulation
- Wrapping data and methods into a single unit called a class.
- Restricts direct access to object attributes, ensuring control and security.

### 2. Abstraction
- Hiding internal implementation details and exposing only the essential features of an object.

### 3. Inheritance
- A mechanism where a class (child or subclass) inherits attributes and methods from another class (parent or base class).

#### Types of Inheritance:
1. **Single Inheritance**: A class inherits from one parent class.
2. **Multiple Inheritance**: A class inherits from more than one parent class.  
   _Note: In C++, this can be implemented using interfaces or mixins._
3. **Multilevel Inheritance**: A class inherits from another class, which itself inherits from a third class.
4. **Hierarchical Inheritance**: Multiple classes inherit from a single parent class.
5. **Hybrid Inheritance**: A combination of two or more types of inheritance.  
   _Note: C++ does not directly support hybrid inheritance due to the diamond problem but can achieve it using virtual inheritance or interfaces._

### 4. Polymorphism
- Allows methods to take different forms. It is achieved via:
  - **Compile-Time Polymorphism (Method Overloading)**: Multiple methods with the same name but different parameters.
  - **Run-Time Polymorphism (Method Overriding)**: A subclass provides a specific implementation of a method defined in its parent class.

---

## Other Key Concepts

### Constructor
- A special method called automatically when an object is created. It initializes the object.

### Destructor
- A method called automatically when an object is destroyed.  
  _Note: Destructors are essential in C++ for resource management._

### Access Modifiers
- **Public**: Accessible everywhere. Used for global access.
- **Private**: Accessible only within the class. Used for sensitive data like passwords.
- **Protected**: Accessible within the class and its subclasses.

### Static Members
- **Static Variables**: Class-level variables shared among all instances of a class.
- **Static Methods**: Methods that can be invoked without creating an object of the class.

### Final Keyword (Java)
- **Final Variable**: Value cannot be changed after initialization.
- **Final Method**: Cannot be overridden by subclasses.
- **Final Class**: Cannot be inherited by other classes.

### Struct vs Class in C++
- **Struct**: Members are **public** by default.
- **Class**: Members are **private** by default.

### Friend Function
- A function that has access to the private and protected members of a class.

### Operator Overloading
- Allows redefining how operators work for user-defined data types.

### Anonymous Objects 
- An anonymous object is a temporary object created without assigning it to a variable.

### Super Keyword (Java)
- The super keyword refers to the superclass and is used to access all it's members

---
