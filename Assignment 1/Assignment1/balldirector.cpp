#include "balldirector.h"

// uses the builder to create the ball object and returns it
ball* ballDirector::Construct(){


    builder->buildBallShell();
    ball* b = builder->getBall();
    return b;
}
