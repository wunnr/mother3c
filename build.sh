rm -rf build mother3.elf mother3.map mother3.gba

docker run --platform=linux/amd64 --rm -it \
  -v "$PWD":/work -w /work \
  -e DEVKITPRO=/opt/devkitpro \
  -e DEVKITARM=/opt/devkitpro/devkitARM \
  devkitpro/devkitarm:latest \
  bash -lc "make -s $@"
