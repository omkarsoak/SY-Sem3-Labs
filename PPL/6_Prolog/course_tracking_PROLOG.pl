%facts
Course_float(Manoj,DataStructures).
Course_float(Manoj,PPL).
Course_float(Savita,Mathematics).
Course_float(Savita,Physics).
Course_float(Kapil,ComputerNetworks).
Course_float(Kapil,Microprocessors).

Student(Atharva).
Student(Komal).

%rules
Enroll(Student,Course):- Prerequisite(Course,Student), Total_enrolled(Student,5).

%queries
?Enroll(Atharva,DataStructures).
?Enroll(Komal,PPL).
?Enroll(Atharva,Microprocessors).


