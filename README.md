# Environment developer with vscode inside docker

## Сборка библиотек через CONAN

```bash
conan profile detect --force
conan install . --output-folder=out/build/testPreset  --build=gtest/cci.20210126 --settings=build_type=Debug
```
