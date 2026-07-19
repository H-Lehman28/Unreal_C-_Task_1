# Task 1: Environment Verification Task

**Student Name:** Harry Lehman

**Student ID:** 2407002

For this task, I was instructed to create an Unreal C++ project, compile and run the project successfully, and identify one reflected class and one reflected property or function.

The first step once I had created the project was to create an Actor Class. When an Actor Class is created, it creates both a .cpp file and a header file. The header file is where I declare the process and variables, and the .cpp file is where the functions declared in the header file is performed.

<a href="https://imgbb.com/"><img src="https://i.ibb.co/d0GkHpGR/Screenshot-2026-07-19-191447.png" alt="Screenshot 2026 07 19 191447" border="0"></a>

In the header file, I used the UPROPERTY function to allow the code to be accessed within blueprints and the editor. The EditAnywhere and BlueprintReadWrite allows the code to be written and read within the editor, and the "Category = TestActor" specifies that the message variable will be within the Test Actor that's been created. I also created the SayHi function which calls the function from the .cpp file.

<a href="https://imgbb.com/"><img src="https://i.ibb.co/G32LXQcx/Screenshot-2026-07-19-191612.png" alt="Screenshot 2026 07 19 191612" border="0"></a>

In the .cpp file I created the SayHi function, which outputs the value of the message variable as a warning message in the command log.

<a href="https://imgbb.com/"><img src="https://i.ibb.co/7thtxTMv/Screenshot-2026-07-19-191719.png" alt="Screenshot 2026 07 19 191719" border="0"></a>

In the editor, I created a blueprint class based on the Test Actor class and placed it into the scene. I set the message variable to say "Hello World" when the message is outputted in the command log.

<a href="https://imgbb.com/"><img src="https://i.ibb.co/Z1L7GR5t/Screenshot-2026-07-19-191635.png" alt="Screenshot 2026 07 19 191635" border="0"></a>

In the blueprint for the Test Actor, I set the SayHi function to be called when the Actor spawns into the world.

<a href="https://ibb.co/BVvCNKn1"><img src="https://i.ibb.co/ns4LC8PW/Screenshot-2026-07-19-191807.png" alt="Screenshot-2026-07-19-191807" border="0"></a>

When the scene is run, the SayHi function is called in blueprints and "Hello World" is printed as a warning message in the command log.