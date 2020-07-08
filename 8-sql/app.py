from flask import Flask, render_template, request, redirect, jsonify
from passlib.hash import bcrypt
import sqlite3

app = Flask(__name__)


def get_all_tasks():
    conn = sqlite3.connect("app.db")
    c = conn.cursor()
    c.execute("SELECT * FROM tasks")
    tasks = c.fetchall()
    conn.close()
    return tasks


def add_task(text):
    conn = sqlite3.connect("app.db")
    c = conn.cursor()
    c.execute("INSERT INTO tasks (text) VALUES (?)", (text,))
    conn.commit()
    conn.close()


def complete_task(id):
    conn = sqlite3.connect("app.db")
    c = conn.cursor()
    c.execute("UPDATE INTO tasks VALUES (?)", (text,))
    conn.commit()
    conn.close()


@app.route("/", methods=["GET"])
def get():
    """
    IF session not exist, redirect to signin page
    ELSE show home page with user tasks
    """
    tasks = get_all_tasks()
    return render_template("index.html", tasks=tasks)


@app.route("/", methods=["POST"])
def post():
    """
    IF session not exist, redirect to signin page
    ELSE create task then redirect to home page
    """
    text = request.form.get("text")
    add_task(text)
    return redirect("/")


@app.route("/", methods=["PUT"])
def put():
    """
    IF session not exist, redirect to signin page
    ELSE update todo then send user tasks
    """
    pass


@app.route("/", methods=["DELETE"])
def delete():
    """
    IF session not exist, redirect to signin page
    ELSE delete task then send user tasks
    """
    pass


@app.route("/signup", methods=["GET"])
def get_signup():
    """
    IF session exist, redirect to home page
    ELSE show signup page
    """
    pass


@app.route("/signup", methods=["POST"])
def post_signup():
    """
    IF session exist, redirect to home page
    ELSE create new user then redirect to home page
    """
    pass


@app.route("/signin", methods=["GET"])
def get_signin():
    """
    IF session exist, redirect to home page
    ELSE create session then redirect to home page
    """
    pass


@app.route("/signin", methods=["POST"])
def post_signin():
    """
    IF session exist, redirect to home page
    ELSE create user session then redirect to home page
    """
    pass


@app.route("/signout", methods=["GET"])
def get_signout():
    """
    IF session not exist, redirect to signin page
    ELSE kill session then redirect to signin page
    """
    pass
