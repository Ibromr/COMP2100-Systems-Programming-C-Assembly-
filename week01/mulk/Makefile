# Set up a defailt value for K. 
# To use other values, run make with
# # the preferred value of K.
# make k=5
# make k=7
# etc.
k?=32
# Allow the user to type K=5 or k=5
K?=$(k)

all:
	@gcc -O1 -S -DK=$(K) mulk.c
	@cat mulk.s
