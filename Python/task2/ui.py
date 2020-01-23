from flask import *
ui = Flask(__name__)
@ui.route("/")
def main():
    return "Welcome!"
if __name__ == "__main__":
    ui.run()
