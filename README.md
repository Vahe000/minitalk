<p align="center">
  <img src="https://github.com/mcombeau/mcombeau/blob/main/42_badges/minitalkm.png">
</p>

<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#norminette">Norminette</a> •
	<a href="#license">License</a>
</p>

## ABOUT
Minitalk is a server/client system that uses UNIX signals for communication. The server displays its PID and receives decrypted signals as characters, while the client encrypts messages and sends true/false signals using SIGUSR1 or SIGUSR2 to the server's PID.

## HOW TO USE
#### COMPILATION AND EXECUTION
#### 1º - Clone the repository
```bash
git@github.com:Vahe000/minitalk.git
```

#### 2º - Enter the project folder and run `make`
```bash
cd minitalk
make
```

#### 3º - Run server or server_bonus and copy its PID
```bash
./server
./server_bonus
```

#### 4º - Open another terminal, run client or client_bonus, paste the PID and write a message
```bash
./client [SERVER PID] [MESSAGE]
./client_bonus [SERVER PID] [MESSAGE] [EMOTE]
```

#### MAKEFILE RULES

`make` - Compile minitalk **mandatory** files.

`make bonus` - Compile minitalk **bonus** files.

`make all` - Compile **mandatory** + **bonus** files.

`make clean` - Delete all .o (object files) files.

`make fclean` - Delete all .o (object files) and .a (executable) files.

`make re` - Use rules `fclean` + `all`.

## MANDATORY
- [x] Produce server and client executables.
- [x] Client must communicate a string passed as a parameter to the server (referenced by its process ID) and display it.
- [x] Use `SIGUSR1` and `SIGUSR2` signals only.

## BONUS
- [x] Add reception acknowledgement system.
- [x] Support Unicode characters.

## NORMINETTE
At 42 School, it is expected that almost every project is written in accordance with the Norm, which is the coding standard of the school.

```
- No for, do...while, switch, case, goto, ternary operators and variable-length arrays are allowed
- Each function must be a maximum of 25 lines, not counting the function's curly brackets
- Each line must be at most 80 columns wide, comments included
- A function can take 4 named parameters maximum
- No assigns and declarations in the same line (unless static)
- You can't declare more than 5 variables per function
- ...
```

* [42 Norms](https://github.com/jotavare/jotavare/blob/main/42/pdf/en_norm.pdf) - Information about 42 code norms. `PDF`
* [Norminette](https://github.com/42School/norminette) - Tool by 42, to respect the code norm. `GitHub`
* [42 Header](https://github.com/42Paris/42header) - 42 header for Vim. `GitHub`

## LICENSE
<p>
This work is published under the terms of <a href="https://github.com/jotavare/jotavare/blob/main/LICENSE">42 Unlicense</a>.
</p>
