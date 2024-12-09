# Computational-Physics
Compilation of all the projects and simulations developed for the course "Física Computacional" (Computational Physics) @ University of Granada (UGR). Each folder is associated to a project developed in this course, and contains all the necessary code to run the simulations and generate the visualizations. Additionally, the report documents (in Spanish) are also included for some of these to explain the code and discuss the results. The folder `./visualizations/` contains all a sample of generated animations for each of these projects.

## Solar System (Verlet's Algorithm)

Implementation of the Verlet algorithm for integrating Newton's equations of motion to simulate the movement of the planets in the Solar System. The main code `solar_system.cpp` includes all the necessary calculations of the algorithm written in C++ and outputs the positions and energies of each planet over time. Then, the Python scripts `animated_orbits.py`, `animated_orbits_geo.py` generate the animated visualizations of the movement of each planet either taking the Sun or the Earth as reference, respectively. Finally, the script `earth_orbit.py` served as a test of the algorithm, implemented fully in Python, and outputs an animated image of the orbit of the Earth around the Sun.

<p align="center">
  <img src="https://raw.githubusercontent.com/domipm/Computational-Physics/refs/heads/main/Visualizations/solarsystem.gif" height="384" width="512" >
</p>

## Rocket to the Moon (Runge-Kutta Alogrithm)

The Runge-Kutte algorithm is an improvement of the previously used Verlet algorithm and allows us to solve Newton's equations of motion with a greater precision. This will be used to solve a simple three-body problem, where a rocket sent from the Earth must arrive to the Moon. The main code `rungekutta.cpp` contains all the necessary calculatons and outputs a single file with the position of all bodies over time. The Python script `graph.py` then performs all the necessary animated visualizations.

<p align="center">
  <img src="https://raw.githubusercontent.com/domipm/Computational-Physics/refs/heads/main/Visualizations/spaceship.gif" height="384" width="512" >
</p>

## Ising Model (Metropolis Algorithm)

This project implements the Metropolis algorithm and Monte-Carlo methods to simulate the Ising model that aims to explain ferromagnetism in materials using magnetic dipole moments in a binary state. The main code `ising.cpp` contains all the necessary calculations and outputs the evolution of the lattice over time. For the code to work correctly, the external header `gsl_rng.h` from the _Gnu Scientific Library_ (GSL) is needed in order to reliably generate random numbers, an essential component of the algorithm. As always, `graph.py` is the Python script that generates the final animated graph of the system.

<p align="center">
  <img src="https://raw.githubusercontent.com/domipm/Computational-Physics/refs/heads/main/Visualizations/ising.gif" height="384" width="512" >
</p>

## Hopfield's Neural Network

The algorithm to simulate the previously mentioned Ising model can be improved and generalized in order to create a simple recurrent neural network that can serve as content-adressable memory. To begin, `image.py` is a Python script that allows us to convert any image into a fixed-size, binary image which we can then input to our model with the help of the _Pillow Image_ (PIL) library. Next, `hopfield.cpp` is able to either read the binary image from the previously-generated file (both directly or applying random noise) or generate a random state, and performs all the necessary calculations for a set amount of iterations or Monte-Carlo steps (Note: as before, this also requires the `gsl_rng.h` header file from the GSL library to generate random numbers). Finally, with the file generated, we can create the animated visualization using `hopfield_graph.py`. 

<p align="center">
  <img src="https://raw.githubusercontent.com/domipm/Computational-Physics/refs/heads/main/Visualizations/hopfield.gif" height="384" width="512" >
</p>

The folder `/pattern\ recognition/` contains some additional code made specifically for the task of loading several images (or patterns) into our model and then checking how well it recognizes these patterns (based on deformed inputs). Finally, the document `Modelo de Hopfield.pdf` (in Spanish) is a report that explains the code and the results generated with it.

<p align="center">
  <img src="https://raw.githubusercontent.com/domipm/Computational-Physics/refs/heads/main/Visualizations/letters.gif" height="384" width="512" >
</p>

## Schrödinger Equation (Crank-Nicolson Method)

This next project studies the evolution of a quantum particle moving under the action of a one-dimensional potential, which involves solving the Schrödinger differential equation over time. The C code `complex.c` and associated header `complex.h` are necessary in order to deal with complex numbers, and were developed and provided by the professor. The main code `schrodinger.cpp` contains the implementation of the algorithm and generates the evolution of the wave-packet as well as its norm over time, while `schrodinger_plot.py` is used to create the visualizations.

<p align="center">
  <img src="https://github.com/domipm/Computational-Physics/blob/main/Visualizations/schrodinger.gif" height="384" width="512" >
</p>

## Schrödinger Equation applied to N-Barriers Potential

This project is a generalization of the previous implementation that aims to solve the Schrödinger equation for a quantum particle moving across a series of N potential barriers. The main code `schrodinger.cpp` calculates the evolution of a wave-packet moving across a N-barrier potential, outputting its amplitude, the form of the potential, and its norm, while `plot.py` generates the associated animation. The program `barreras.cpp` focuses on computing the transmission coefficient and the probability of finding the particle at the end of the N-barrier potential, and is a generalization of the program `tcoeff.cpp` which calculates this for a single barrier. Finally, `observables.cpp` computes the expected value of some interesting observables in the system and their change over time. The document `Coeficiente de Transmisión.pdf` is the report that explains the code and results (in Spanish).

<p align="center">
  <img src="https://github.com/domipm/Computational-Physics/blob/main/Visualizations/schrodinger_n.gif" height="384" width="512" >
</p>
