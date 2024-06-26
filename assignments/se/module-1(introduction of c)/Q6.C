//que: What is use case daigram ? Creat a use-case on bill payment on paytm.
Ans:- A Use Case Diagram is a type of behavioral diagram defined by and created from a Use Case analysis. Its purpose is to present 
a graphical overview of the functionality provided by a system in terms of actors, their goals (represented as use cases), and any 
dependencies between those use cases.

Key components:

Actors: Users or other systems that interact with the system.
Use Cases: Functions or services provided by the system.
System Boundary: Defines the scope of the system.
Relationships: Shows how actors and use cases interact (associations, include, extend, generalization).
Use Case Diagram for Bill Payment on Paytm
Actors:

User
Bank
Paytm System
Use Cases:

Login
View Bills
Select Bill
Make Payment
Confirm Payment
Relationships:

The User must log in to view bills.
The User can select a bill to view details and make a payment.
The User makes a payment which is processed through the Paytm system and involves the Bank for transaction processing.
Payment confirmation is sent back to the User.
Here's a simple textual representation:

sql
Copy code
                    +---------------------------+
                    |           User            |
                    +---------------------------+
                     /  \                    |
                    /    \                   |
                +-------+                  +-------+
                | Login |                  | View  |
                +-------+                  | Bills |
                    \                      +-------+
                     \                        /  \
                      \                      /    \
                    +----------+    +------------+  \ 
                    | Make     |----| Select Bill |  |
                    | Payment  |    +------------+  |
                    +----------+                   |
                       |                         +-----------+
                       |                         | Confirm   |
                       |                         | Payment   |
                       |                         +-----------+
                    +----------+
                    |  Bank    |
                    +----------+
In a graphical UML diagram, these relationships would be represented with lines connecting actors to their use cases, and the system 
boundary would encompass the use cases but exclude the actors. 