# router-c

This is the C control project for the generic Bash installer experiment. Its
release metadata and installation behavior are the same as the Nim test
project; only the CI build step uses a different language toolchain.

The release workflow builds static Linux x86_64 baseline and x86-64-v3
executables, generates `install.manifest`, and publishes all release assets
only after a manifest roundtrip check.

The latest release can be installed with:

```bash
curl -sL gabrielcapilla.github.io/experimental | bash -s -- router-c
```

An exact release can be selected explicitly:

```bash
curl -sL gabrielcapilla.github.io/experimental | bash -s -- router-c@v0.1.1
```
