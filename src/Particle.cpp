#include "Particle.h"

Particle::Particle()
{
    std::cout << "Constructing a default particle.\n";
    // Default assignments.
    mass = 1.0;
    for(std::size_t idx = 0; idx < NUM_SPACIAL_DIMS; idx++)
    {
        position[idx] = idx;
        velocity[idx] = idx;
        acceleration[idx] = idx;
    }
}

Particle::~Particle()
{
    std::cout << "Destructing a particle";
}

double Particle::getMass() const
{
    return mass;
}

void Particle::setMass(double mass_)
{
    mass = mass_;
}

const double * const Particle::getPosition() const
{
    return position;
}

void Particle::setPosition(const double * const position_)
{
    std::memcpy(position, position_, NUM_SPACIAL_DIMS * sizeof(double));
}

const double * const Particle::getVelocity() const
{
    return velocity;
}

void Particle::setVelocity(const double * const velocity_)
{
    std::memcpy(velocity, velocity_, NUM_SPACIAL_DIMS * sizeof(double));
}

const double * const Particle::getAcceleration() const
{
    return acceleration;
}

void Particle::setAcceleration(const double * const acceleration_)
{
    std::memcpy(acceleration, acceleration_, NUM_SPACIAL_DIMS * sizeof(double));
}