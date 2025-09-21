Inheritance in C++  
------------------
Inheritance is one of the key features of OOP.  
It allows a class (child/derived) to acquire properties and behaviors of another class (parent/base).  
This promotes code reuse, modularity, and easier maintenance.  

Types of Inheritance in C++  
---------------------------

1. Single Inheritance  
   - One child inherits from one parent.  
   - Example: Parent → Child.  

2. Multiple Inheritance  
   - One child inherits from more than one parent.  
   - Example: A + B → C.  

3. Multilevel Inheritance  
   - Inheritance in a chain.  
   - Example: Grandparent → Parent → Child.  

4. Hierarchical Inheritance  
   - Multiple children inherit from the same parent.  
   - Example: Parent → Child1, Child2.  

5. Hybrid Inheritance  
   - Combination of multiple inheritance types.  
   - Example: A → B, A + C → D.  

Note:  
- "virtual" keyword is often used in multiple/hybrid inheritance to avoid ambiguity (Diamond Problem).  
- Inheritance helps build relationships between classes but should be used wisely (too deep inheritance trees can complicate code).  
