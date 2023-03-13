#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct {
    // Cordinates
    int x, y;
    // Movement Variables
    int speed, x_direction, y_direction;
}Ball;

typedef struct {
    // Cordinates
    int x, y;
    // Movement variables
    int speed;
    // Score
    int score;
}Player;

#endif // STRUCTS_H
