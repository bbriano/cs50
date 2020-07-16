from flask import Flask, render_template, request, jsonify
import csv

app = Flask(__name__)


@app.route("/")
def index():
    return render_template('index.html')


@app.route("/register", methods=["POST"])
def register():
    name = request.form.get("name")
    email = request.form.get("email")
    element = request.form.get("element")
    if not name or not email or not element:
        return render_template("failure.html")

    with open("users.csv", "a") as file:
        writer = csv.writer(file)
        writer.writerow((name, email, element))

    return render_template("success.html")


@app.route("/users")
def get_users():
    with open("users.csv", "r") as file:
        reader = csv.reader(file)
        users = list(reader)
    return render_template("users.html", users=users)


@app.route("/search")
def search():
    q = request.args.get("q")
    with open("users.csv", "r") as file:
        reader = csv.reader(file)
        users = list(reader)
    print(q)
    filtered_users = [user for user in users if not q or user[0].startswith(q)]
    return jsonify(filtered_users)
