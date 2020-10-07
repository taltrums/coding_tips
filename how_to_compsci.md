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
