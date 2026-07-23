# Lesson_3__Java__TestBenching_And_Implementation.

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
    <dependencies>
        <dependency>
            <groupId>junit</groupId>
            <artifactId>junit</artifactId>
            <version>3.8.1</version>
            <scope>test</scope>
        </dependency>
        <dependency>
            <groupId>de.gurkenlabs</groupId>
            <artifactId>input4j</artifactId>
            <version>1.1.1</version>
        </dependency>
        <dependency>
            <groupId>net.java.dev.jna</groupId>
            <artifactId>jna</artifactId>
            <version>5.13.0</version>
        </dependency>
        <dependency>
            <groupId>net.java.dev.jna</groupId>
            <artifactId>jna-platform</artifactId>
            <version>5.13.0</version>
        </dependency>
    </dependencies>

    <build>
        <plugins>
            <plugin>
                <groupId>org.apache.maven.plugins</groupId>
                <artifactId>maven-compiler-plugin</artifactId>
                <configuration>
                    <source>10</source>
                    <target>10</target>
                </configuration>
            </plugin>
            <plugin>
                <groupId>org.apache.maven.plugins</groupId>
                <artifactId>maven-compiler-plugin</artifactId>
                <configuration>
                    <source>10</source>
                    <target>10</target>
                </configuration>
            </plugin>
        </plugins>

    </build>
````

---
## Implements.
 - ### CLIBWriteQue dll(s).
 - ### CLBILaunchQue dll(s).
 - ### OpenEpiCentre dll.

---
## How To Guildes.

---
### Wrapper Imports / Exports and Native IO.

---
---
