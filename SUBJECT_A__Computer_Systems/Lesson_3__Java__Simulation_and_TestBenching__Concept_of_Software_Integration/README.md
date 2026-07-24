# SubjectStream_The_High_Level_Hardware_Language.
## SUBJECT_A__Computer_Systems.
### Lesson_3__Java__Simulation_and_TestBenching__Concept_of_Software_Integration.

---
# RESOURCE - Java: TestBench and Implementation.

---
## Branches.
- main.

---
## Using.
### Ubuntu LINUX.
version: Ubuntu 24.04.4 LTS

### IntelliJ IDEA
version: 2026.1.3.

---
### Dependencies.
#### The Java Development Kit (JDK).
````
sudo apt install openjdk-8-jdk
````
#### Java Runtime Eenvironment (JRE).
````
sudo apt install openjdk-8-jre
````
#### GCC toolchain.
```` 
sudo apt install build-essential gdb
````
#### snapd.
```` 
sudo apt install snapd
````
#### IntelliJ-idea.
````` 
sudo snap install intellij-idea --channel=2026.1/stable --classic
`````

#### Java Native Access Library.
##### edit pom.xml.
````
 <dependency>
	    <groupId>net.java.dev.jna</groupId>
	    <artifactId>jna</artifactId>
	    <version>5.13.0</version> <!-- Use the latest version -->
	</dependency>
	<dependency>
	    <groupId>net.java.dev.jna</groupId>
	    <artifactId>jna-platform</artifactId>
	    <version>5.13.0</version> <!-- Use the latest version -->
	</dependency>
````

---
## Implements.

---
## How To Guildes.

### Wrapper Imports / Exports and Native IO.
