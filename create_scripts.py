
import sys
import os

def main():
    directory, filename = sys.argv[1:]
    for f in [".md", ".c", ".cpp", ".go", ".hs", ".java", ".js", ".pl", ".py", ".rs", ".swift"]:
        try:
            os.mknod(os.path.join(directory, filename+f))
        except:
            pass

if __name__ == "__main__":
    main()