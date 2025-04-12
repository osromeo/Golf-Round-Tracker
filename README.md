# Golf-Round-Tracker

Owen Romeo

My program collects data about a golf round and prints it to the console and an outfile
It creates hole objects of subtype Par3 Par4 and Par5.
As of submission the program lacks logic to handle user input that doesn't make sense in the context of the game.
For example if a player had 3 putts on a par four and didn't hit the green in regulation (gir = false) then the best the player could score on this hole is a 6 but the program would accept par as a valid input.

Mod 2 concepts:
Inheritance (Par 3/Par 4/ Par5)
File output

Future work on this project:
I want to add an interface to the program, and I think adding more logic (Specifically to the club used in Par3) would help to make this program more usable
I think that adding fun calculations as well as a class that reads rounds into the file would be extremely usefull too.

I used sites like chat gpt, W3Schools, GeeksforGeeks, and Youtube for explinations/example code which I tailored to use specifically for this project.

I think that I deserve a 35 for the main program complexity and usability because the main program successfully uses the different subclasses of the hole object and correctly validates the user input types.
I think that I deserve a 15 for the testing program because it fails to account for logic errors around creating a hole object with more putts than strokes (score), but it does pass all the test cases and is well organized
I think that I deserve a 20 for the Is-A relationship with my hole objects because they use the subclass type in a way that makes sense and improves usability, they all include one overide method and a method and value unique to the class.
I think I deserve a 3 for the I/O file because I only write to an out file and dont actually take the information back into the file to manipulate.