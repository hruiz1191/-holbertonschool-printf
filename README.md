## _printf
---
**Description:**
<p>A version of the function printf, included in the library stdio.h.
<p>A function that produces output according to a specific format. 


  **List of conversion specifiers**

| Variable Specifiers | Var type OUTPUT |
|---|---|
| %C | CHAR |
| %S | STRING |
| %% | Percent Sign |
| %d | DECIMAL |
| %i | INTEGER |
---
**Files included**
| File Name|category | Use of file|
|---|---|---|
|_printf.c| Main file| This funtion iterate each character
|||and identity if character is specifier.| 
|_putchar.c| Main file|Funtion to print character.|
| var_character|Main file | in case of finding specifier the|
| | |variadic funtion will assign output.|
|main.h|main file| Include all the librarys, structures and| 
| | |prototype neede in the_printf function.| 
|0-task.c| Assign document| Include funtions of variable Specifier|
| | |to identify string or Character.| 
|1-task.c| Assign document|Include funtions of variable Specifier|
| | |to identify Integer or Character.|
|man_3_printf| Assign document| _printf Manual.|
|README.md|Main file| Document read me file.| 
---
**_printf Flowchart**
* The machine begins its work.
* Iterate Print: The machine starts looking at each letter or symbol in the text we want to print.
* Is it a %? The machine checks if the current letter is a percent sign (%).
* If yes: It looks at the next letter.
* If the next letter is also %: It prints a single % symbol.
* If the next letter is different: It looks for a special instruction to know what to print.
* If no: It prints the current letter.
* Find Special Instruction: The machine checks a list of special instructions to see if there's one for the letter after the %.
  * If it finds one, it follows that instruction.
* Print According to Instruction: If it found a special instruction, the machine prints what the instruction says (like a number, a word, etc.).
* If the machine has checked all the letters, it stops printing.
* Error: If the machine doesn't understand an instruction, it shows an error message.

  ![image](https://github.com/hruiz1191/holbertonschool-printf/blob/hector/printfflowchart.png)
--- 
**Authors**
* **Hector Ruiz** [Github](https://github.com/hruiz1191)
* **Fernando Albert** [Github](https://github.com/Falbert19)
