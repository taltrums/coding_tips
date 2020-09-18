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