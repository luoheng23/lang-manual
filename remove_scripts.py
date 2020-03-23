
import sys
import os

def main():
    directory, filename = sys.argv[1:]
    for f in [".c", ".cpp", ".go", ".hs", ".java", ".js", ".pl", ".py", ".rs", ".swift"]:
        try:
            os.remove(os.path.join(directory, filename+f))
        except:
            pass

if __name__ == "__main__":
    main()