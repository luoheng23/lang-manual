
import sys
import os

def main():
    directory, filename = sys.argv[1:]
    try:
        os.remove(os.path.join(directory, "a.out"))
    except:
        pass
    for f in ["", ".hi", ".o"]:
        try:
            os.remove(os.path.join(directory, filename+f))
        except:
            pass

if __name__ == "__main__":
    main()