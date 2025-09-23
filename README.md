# Simple Version Control System (VCS) in C

A lightweight version control system built entirely in **C**, with **PowerShell scripting** used for automation on Windows.  
This project is designed as a learning experience to understand the inner workings of version control, file tracking, and repository management — without relying on existing tools like Git.

---

## Features (Work in Progress)
- Initialize a repository  
- Track file changes  
- Save and restore file versions (commits)  
- Basic metadata storage for commits  
- PowerShell scripts for setup and automation  

> Future plan: add **Linux shell script support** for cross-platform usage.

---

## Project Goals
- Learn how version control systems function at a low level.  
- Gain hands-on experience with file I/O, hashing, and data structures in C.  
- Automate repository tasks with scripting.  
- Create a foundation that could be extended into a more complex system.  

---

## Tech Stack
- **C** → Core version control logic (file tracking, commits, restoring).  
- **PowerShell** → Windows automation for repository setup and commands.  
- **(Planned)** Bash / Shell scripts → Linux support.  

---

## Getting Started

### Prerequisites
- A C compiler (GCC or MSVC recommended).  
- PowerShell (Windows) — built-in on Windows 10/11.  

### Build
```powershell
gcc -o vcs main.c
