# OrbitalEngine-Core

A C++ numerical physics core designed as the foundation for a **research-grade orbital mechanics engine**.

This repository focuses on:
- Clean, testable **vector math**
- **Time-stepped numerical integration**
- Physically meaningful abstractions (position, velocity, acceleration)
- A structure that can scale into full orbital dynamics and multi-body simulations

---

## Project Goals

1. Build a robust C++ **math and physics core** for orbital mechanics.
2. Implement accurate and stable **numerical integrators** (Euler, RK2, RK4, etc.).
3. Model **two-body** and later **multi-body** gravitational systems.
4. Provide a clean, well-documented foundation that scientists and engineers can extend.

This repo is **Phase 1** of a larger research engine.

---

## Repository Structure

```text
OrbitalEngine-Core/
  ├─ src/
  │   ├─ main.cpp
  │   └─ vector3.cpp
  ├─ include/
  │   └─ vector3.h
  ├─ tests/        (planned)
  ├─ docs/         (planned)
  ├─ examples/     (planned)
  └─ README.md
