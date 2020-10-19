### Fundamental Concepts
---
##### OS 
```
process : program that is being executed (heavy, isolated memory, takes time to switch)
threads : segments of a process (light, shared memory, fast switch times)  
locks : prevents race conditions between threads 
deadlocks : processes are blocked because each process holds the resource needed for the other to go further

kernel : core of operating system that controls tasks 
shell : interface to communicate with kernel 
```

##### Types
```
compiled language : compiler translates program to machine code before execution, time needed to compile every time changes are made, fast during runtime 
interpreted language : interpreter reads and executes program without compilation, dynamic typing, smaller memory size, slow during runtime   

dynamic typing : type is checked during runtime

declarative programming : tell program specifically what you want it to do (this is A, this is B made from A, return C made from B)
imperative programming : tell program how you would like it to do something (this is A, we will go through this loop, we check this, if B, return A')
```

##### Methodology
```
Agile
  1) approach to break development into stages and constantly collaborate with end users
  2) advocates adaptive planning, evolutionary development, early delivery, and continual improvement 
  
CI/CD
  1) continous integration, continous delivery 
  2) bridges gap between development and operations through automation to allow DevOps procedures
  
ETL 
  1) extract, transform, and load one database to another
```


### Systems Design
---
##### Protocols 
```
Protocol : set of rules and structures for how computers communicate 
  1) IP : obtains the address of where packets come from and where they should be sent 
  2) TCP : responsible for breaking data into packets and delivering/reassembling the packets
  3) HTTP : set of rules for how request-response works in the web 
  4) HTTPS : encrypted HTTP 
```

##### Systems
```
Storage
  1) Disk Storage : permanent/ persistent storage with high latency (hard disk)
  2) Memory Storage : temporary / transient storage with low latency (RAM)

Capacity
  1) Latency : time between stimulation and response 
  2) Throughput : actual output of a system or machine 
  3) Bottleneck : constraint of a system 

Availability : uptime in a given amount of time 
  1) SLA : an assurance for the uptime of a service 
  2) Redundancy : having an alternative when a failure happens 

Proxy : a server that acts as a middleman between a client and another server
  1) Forward Proxy : acts on the behalf of the client, could mask the identity of client (VPNs) 
  2) Reverse Proxy : acts on the behalf of the server (load balancer) 
```

##### Database Types
```
Why not write scripts to query data?
You must potentially load all the data into memory when running on Python. 

Relational Database : Data stored in table(relations) form and organized in a strict, predefined way (usually supports SQL)  
Non-relational Database : Flexible (non-tabular) form not precisely organized in a predefined way 
SQL : relational, structured/predefined, table-based, less scalability, better for ranged queries, strong consistency  
NoSQL : non-relational, unstructured/flexible, key-value paired (JSON objects), better scalability, eventual consistency  

ACID principles for SQL 
  1) Atomicity : guarantee that when one operation fails(succeeds), all other following operations fails(succeeds) 
  2) Consistency : each transaction ensures that the database moves from one valid state to another valid state (does not corrupt data)
  3) Isolation : when you run operations concurrently, the result will be as if you ran the operations in sequence
  4) Durability : once the data is stored in the database, it will remain to do so

BASE principles for NoSQL
  1) Basically Available : system guarantees availability
  2) Soft State : state of system and replicas might change over time even without input 
  3) Eventual Consistency 
```


##### Microservices 
```
architectural design that breaks a monolithic application into smaller pieces, which communicate through HTTP/API

pros 
  1) independent services with ability to use different programming languages
  2) easier to understand codebase and modify 
  3) when failure arises, only particular service goes down
  4) easier to scale specific process / service
  5) less commitment to a tech stack and able to change to new tech faster 

cons 
  1) testing can be complicated and managing the whole product becomes more difficult 
  2) information barriers between different services
  3) must implement means of communicating between services
  4) large upfront investment in automation as manual deployment becomes more difficult
```


### API Design
---
##### What is API
```
1) interface that defines interactions between software such as types of calls/requests, how they are made, data formats, conventions 
2) way of communicating between applications 
3) allows for servers/systems to communicate such that automation is possible 
4) allows information to be shared as a service 
```

##### REST Principles
```
REST principles 
  1) verbs : GET (read), POST (create), PUT/PATCH (update entire/partial), DELETE (delete)
```

##### Status Codes
```
1xx : Request received and understood 
2xx : Request by client was received, understood, and accepted 
  1) 201 Resource Created (for POST methods)
  2) 202 Accepted 
  3) 204 No content (for DELETE methods)
3xx : Client must take additional actions 
4xx : Client screwed up (for wrong GET,DELETE requests)
5xx : Server screwed up
  1) 500 Internal Server Error
  2) 504 Gateway Timeout
```

##### Object Relational Mapping
```
Converting data between relational databases and OOP languages such that they become compatible with each other
Query database using an object-oriented paradigm (graph of objects) instead of SQL (tabular format) 
```

### Language Specifics
---
##### HTML/CSS
```
HTML
  1) static language used to display data
  2) hypertext language : defines links between web pages 
  3) markup language : defines text within tags that defines structures of web pages 
  
CSS : style sheet for HTML 
```
