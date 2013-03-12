##
## Makefile for  Project rtype
## 
## Made by stephane ROSE
## Login   stro0335
## 
##

## Project name
NAME_SH			= rtype

## Sources
SRCS			= main.cpp
## Objets
OBJS			= $(SRCS:.cpp=.o)

## Binary
CXX			= g++
RM			= rm -f
ECHO			= echo


## Flags
CPPFLAGS		= -W -Wall -Wextra -pedantic
SFMLFLAGS		= -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system

## Rules
$(NAME_SH)		: $(OBJS)
		  	@$(CXX) -o $(NAME_SH) $(OBJS) $(CPPFLAGS) $(SFMLFLAGS)

all			: $(NAME_SH)

clean			:
			@$(RM) $(OBJS)
			@$(RM) *~
			@$(RM) \#*\#
	  		@$(RM) *.core


fclean			: clean
		  	-@$(RM) $(NAME_SH)


re			: fclean $(NAME_SH)