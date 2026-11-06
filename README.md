# C Project Template

> **Status: Under development**

This project is a C-based battery monitoring application and development template. It currently contains the core battery-voltage calculations that convert a voltage in millivolts into a battery percentage and a battery status such as critical, low, OK, or full.

The application is still being developed. The current executable is a small demonstration entry point that uses a fixed sample voltage; hardware integration, a complete user-facing application flow, and production deployment are not finished yet.

## What exists now

- Battery percentage calculation from millivolt input.
- Battery status classification based on the calculated percentage.
- CMake configuration for building the C application.
- Ceedling-based unit-test configuration and test sources.
- VS Code tasks for configuring, building, running, cleaning, and testing.
- Separate build directories for CMake (`build/cmake`) and Ceedling (`build/ceedling`).

## Build with CMake

Configure and build the project from the repository root:

```bash
cmake -S . -B build/cmake
cmake --build build/cmake
```

The generated application is located at `build/cmake/c-project-template.exe` on Windows.

## Run tests with Ceedling

Run the complete test suite with:

```bash
ceedling test:all
```

Ceedling stores its generated files under `build/ceedling`, separately from the CMake build directory.

## VS Code tasks

The repository includes predefined tasks in `.vscode/tasks.json`:

- `CMake: Configure`
- `CMake: Build`
- `CMake: Reconfigure + Build`
- `CMake: Clean Build Files`
- `CMake: Run Application`
- `Ceedling: Run All Tests`
- `Ceedling: Clean`
- `Ceedling: Clobber`

Use **Terminal → Run Task** in VS Code to run them. The default build task is `CMake: Build`.

## Requirements

- CMake
- A C compiler supported by the CMake configuration
- Ruby and Ceedling for running tests

## Work in progress

The following parts are planned or actively being developed:

- Adding a continuous-integration pipeline with GitHub Actions for builds and tests.
- Adding Docker support for a reproducible build and test environment.

GitHub Actions and Docker are planned parts of the project workflow, but they are not fully implemented yet.
