# router-c

This is the C control project for the generic Bash installer experiment. Its
release metadata and installation behavior are the same as the Nim test
project; only the CI build step uses a different language toolchain.

The release workflow builds static Linux x86_64 baseline and x86-64-v3
executables, generates `install.manifest`, and publishes all release assets
only after a manifest roundtrip check.

After publishing a release from `gabrielcapilla/router-c`, install it with:

```bash
curl -sL gabrielcapilla.github.io/experimental | bash -s -- router-c@0.1.0
```
