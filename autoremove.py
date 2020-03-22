
import sys
import os

def main():
    directory, filename = sys.argv[1:]
    os.remove(os.path.join(directory, "a.out"))
    for f in ["", ".hi", ".o"]:
        os.remove(os.path.join(directory, filename+f))

if __name__ == "__main__":
    main()