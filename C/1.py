import turtle
import time

# Setup the screen and turtle
screen = turtle.Screen()
screen.bgcolor('black') # Set background color
t = turtle.Turtle()
t.speed(0) # Set drawing speed to fastest
t.color('red')

# Function to draw a single petal
def draw_petal():
    t.circle(150, 60) # Draw part of a circle
    t.left(120)
    t.circle(150, 60)
    t.left(120)

# Function to draw the rose
def draw_rose():
    # Draw petals
    for i in range(18):
        t.right(20) # Rotate for the next petal
        draw_petal()
    
    # Draw stem and leaf (simplified)
    t.color('green')
    t.right(150)
    t.forward(100)
    t.right(90)
    t.forward(30)
    t.left(120)
    t.forward(50)
    t.up()
    t.goto(0, 0)
    t.down()

# Run the drawing function
draw_rose()
t.hideturtle() # Hide the turtle cursor after drawing
time.sleep(5) # Keep the window open for 5 seconds
