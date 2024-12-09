# Computational-Physics
Compilation of all the projects and simulations developed for the course "Física Computacional" (Computational Physics) @ UGR

## Solar System (Verlet's Algorithm)

Implementation of the Verlet algorithm for integrating Newton's equations of motion to simulate the movement of the planets in the Solar System. Code for this project available in the folder `./Solar-System/`. The main code `solar_system.cpp` includes all the necessary calculations of the algorithm written in C++ and outputs the positions and energies of each planet over time. Then, the Python scripts `animated_orbits.py`, `animated_orbits_geo.py` generate the animated visualizations of the movement of each planet either taking the Sun or the Earth as reference, respectively. Finally, the script `earth_orbit.py` served as a test of the algorithm, implemented fully in Python, and outputs an animated image of the orbit of the Earth around the Sun.

<p align="center">
  <img src="https://raw.githubusercontent.com/domipm/Computational-Physics/refs/heads/main/Visualizations/solarsystem.gif" height="384" width="512" >
</p>
