#include "calcTotalCharges.h"

double calcTotalCharges(double days, double roomRate, double serviceCharges, double medCharges) // function definition (in-patient)
    { return (days * roomRate) + serviceCharges + medCharges; }

double calcTotalCharges(double serviceCharges, double medCharges)   // overloaded function definition (out-patient)
    { return serviceCharges + medCharges; }