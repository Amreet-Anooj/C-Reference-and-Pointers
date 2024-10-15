# Object Oriented Programming in C++
## Aim 
To study Class and Objects

## Software Used 
VS Code

## Theory
### Definition
Object-Oriented Programming (OOP) is a programming principle centered around the concept of "objects."
#### What is a Class?
Class is basically a framework or blueprint which we use to create objects. It encapsulates data and functions that operate on the data. Objects share similarities to its class. For eg children and thier parents where children could be considered objects of the parent class.
> For example:
```cpp
#include <iostream>
using namespace std;

class Dog {
public:
    string name;
    int age;

    void bark() {
        cout << name << " Woof!" << endl;
    }
};

```
#### What is an Object?
An object is basically an instance of a class. It is a self-contained unit that contains both data and methods. The data (attributes) represents the state of the object, while the methods (functions) define its behavior. For eg, in a class Car, an object could be a specific car with features like color and model, and operations like starting engine, driving.
<br>
An Object has two defining features:
1. **Attributes:** These are the properties of an object. They represent the characteristics of the object. For eg, if you have a Car object, its attributes might include color, model, year etc. Attributes define what the object knows about itself.

2. **Methods:** These are the functions or behaviors that an object can perform. They define what the object can do or what operations can be performed on it. For the Car object, methods might include start_engine(), drive(), and apply_brakes(). Methods define what actions the object can take or how it can interact with other objects.

 **Conclusion**
 
   We learnt how to create classess and objects in C++.
