# C Project Template

> **Status: Under Development** · **Learning Project**

## Author

**Mahmoud Elbadrawy**<br>Embedded Software Engineer | Learning Embedded Software Engineering Practices

This project is part of my journey to gain practical experience with software development tools and engineering workflows.

## Overview

This project is a hands-on learning project focused on developing a C application while exploring software engineering practices commonly used in professional development environments.

The application itself is intentionally simple: a battery monitoring module that converts voltage measurements into battery percentages and classifies battery status. Rather than focusing on building a complex application, the goal is to use this small project as a practical environment to learn and apply important development concepts.

Throughout the project, I aim to gain practical experience with:

- **Unit Testing:** Using Ceedling and Unity to verify application behavior and improve code reliability.
- **Build Systems:** Using CMake to configure and manage the application build process.
- **Continuous Integration (CI):** Automating builds and unit tests with GitHub Actions.
- **Static Analysis:** Exploring tools such as Cppcheck to identify potential code issues.
- **Containerization:** Learning Docker to create reproducible development and testing environments.
- **Development Workflow:** Organizing source code, tests, configuration files, and automation in a clean project structure.

The project will evolve gradually as I explore these tools and integrate them into a development workflow inspired by real-world software engineering practices.

## Project Scope

The application currently focuses on a small set of battery monitoring functions:

- Convert battery voltage (millivolts) into a percentage.
- Classify battery status as critical, low, OK, or full.
- Demonstrate the functionality through a simple application entry point.

The emphasis is not on hardware integration or product-level functionality, but on learning how to build, test, validate, and maintain a C project using modern development tools.

## Development Workflow

The project is organized around the following development practices:

| Area | Tool | Purpose |
|---|---|---|
| Programming | C | Application implementation |
| Build system | CMake | Configure and build the application |
| Unit testing | Ceedling / Unity | Verify individual functions |
| Continuous integration | GitHub Actions | Automate builds and unit tests |
| Static analysis | Cppcheck (planned) | Detect potential code issues |
| Containerization | Docker (planned) | Create reproducible environments |
| Code editor | Visual Studio Code | Development environment |

## Build with CMake

Configure the project:

```bash
cmake -S . -B build/cmake
```

Build the application:

```bash
cmake --build build/cmake
```

The generated executable is located at:

- Windows: `build/cmake/c-project-template.exe`
- Linux: `build/cmake/c-project-template`

## Run Unit Tests

The project uses Ceedling and Unity for unit testing.

Run the complete test suite:

```bash
ceedling test:all
```

Ceedling manages test compilation and execution, with generated files stored separately from the CMake build directory under `build/ceedling`.

## Continuous Integration

GitHub Actions is used to automate basic project validation whenever code is pushed or a pull request is opened.

The current CI workflow contains two jobs:

| Job | Description |
|---|---|
| **Build Application** | Configures and builds the C application using CMake. |
| **Run Unit Tests** | Executes the Ceedling unit-test suite after the build succeeds. |

The workflow configuration is located at:

```text
.github/workflows/ci.yml
```

The workflow can also be triggered manually from the GitHub Actions tab if `workflow_dispatch` is enabled.

## VS Code Tasks

The repository includes predefined tasks in `.vscode/tasks.json` to simplify common development operations:

- `CMake: Configure`
- `CMake: Build`
- `CMake: Reconfigure + Build`
- `CMake: Clean Build Files`
- `CMake: Run Application`
- `Ceedling: Run All Tests`
- `Ceedling: Clean`
- `Ceedling: Clobber`

Tasks can be executed through **Terminal → Run Task** in Visual Studio Code.

## Requirements

- C compiler supported by the CMake configuration
- CMake
- Ruby
- Ceedling
- Git
- Visual Studio Code (recommended)

## Roadmap

The project will be developed incrementally, with a focus on learning and applying additional engineering practices:

- [x] Implement basic battery monitoring functionality.
- [x] Configure the CMake build system.
- [x] Integrate Ceedling and Unity for unit testing.
- [x] Add VS Code development tasks.
- [x] Set up GitHub Actions for automated builds and tests.
- [ ] Integrate Cppcheck for static analysis.
- [ ] Add Docker support for reproducible builds and tests.
- [ ] Improve unit-test coverage.
- [ ] Refine project structure and development documentation.

## Project Philosophy

Keep the application simple. Focus on the engineering practices around it.

This project is an opportunity to learn by doing: introducing tools, understanding why they are used, and gradually building a development workflow that reflects how C software projects are structured and maintained in professional environments.