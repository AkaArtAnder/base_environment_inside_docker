# Environment developer with vscode inside docker

## Сборка библиотек через CONAN

```bash
conan profile detect --force
conan install . --output-folder=build  --build=missing --settings=build_type=Debug
```
