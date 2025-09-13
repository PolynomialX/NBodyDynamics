#ifndef PARTICLE_H_
#define PARTICLE_H_

#include <iostream>

#include "PhysicalConstants.h"

class Particle
{
public:
    Particle();
    virtual ~Particle();

    /**
     * Getters & Setters
     */
    double getMass() const;
    void setMass(double mass_);

    const double * const getPosition() const;
    void setPosition(const double * const position_);

    const double * const getVelocity() const;
    void setVelocity(const double * const velocity_);

    const double * const getAcceleration() const;
    void setAcceleration(const double * const acceleration_);

private:
    double mass;    // mass of particle in kg

    double position[NUM_SPACIAL_DIMS];      // components in m, using canonical basis
    double velocity[NUM_SPACIAL_DIMS];      // components in m/s
    double acceleration[NUM_SPACIAL_DIMS];  // components in m/s/s

};

#endif // PARTICLE_H_