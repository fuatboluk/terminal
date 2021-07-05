# Terminal

  Terminal is a VTE virtual terminal emulator built on using GTK-3.0.

  It was designed to be very light and to meet the terminal needs without straining the system.

  You can see the screenshot below.
  
  ![Alt text](https://gitlab.com/fuxproject/terminal/raw/master/terminal.png "Terminal Screenshot")

# Features:

  * Drag drop
  * Keyboard shortcuts
  * Quick action buttons (new, copy, paste)

# Keyboard Shortcuts:

  |  Combination      | Description                          |
  |  ---              | ---                                  |
  |  Ctrl + Shift + T | Open Terminal                        |
  |  Ctrl + Shift + C | Copy                                 |
  |  Ctrl + Shift + V | Paste                                |
  |  Ctrl + Shift + Q | Close Terminal                       |
  |  Ctrl + Shift + R | Complete From Past Commands (Search) |
  
# Requirements:  

  * gtk3-devel
  * vte291-devel

# Build:

  `git clone https://gitlab.com/fuatboluk/terminal.git`
  
  `cd terminal/`
  
  `make`
  
  `sudo make install`

# Knowledge:

  Terminal is free software distributed under the General Public License.
