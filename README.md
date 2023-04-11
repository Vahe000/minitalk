Minitalk Project

The minitalk project is a client-server communication program for 42 School's curriculum.

Description

This project requires you to create a client-server communication program using signals in Unix-based systems. The server must be able to receive a string of characters from the client and print it to standard output.

The client must be able to send a string of characters to the server, which will be printed to standard output by the server. The client and server communicate using signals, with the client sending each character in the string as a separate signal.

Installation

To install and run the minitalk project, follow these steps:

Clone the repository to your local machine.

Run the make command to compile the project.

Run the server with the ./server command.

Run the client with the ./client [server_pid] [string] command, where [server_pid] is the process ID of the server and [string] is the string you want to 
send.

Usage

The minitalk project is designed to demonstrate client-server communication using signals in Unix-based systems. To use the project, follow these steps:

Start the server by running the ./server command in a terminal window.

In a separate terminal window, run the ./client [server_pid] [string] command, where [server_pid] is the process ID of the server (which is printed by 

the server when it starts up) and [string] is the string you want to send.

The client will send each character in the string to the server as a separate signal.

The server will receive the signals and print the string to standard output.

Contributors

This project was completed by [your name] as part of the curriculum at 42 School.

License

This project is licensed under the MIT License. See the LICENSE file for more information.
