from flask import Flask, render_template, request, redirect, jsonify
from passlib.hash import bcrypt
import sqlite3

app = Flask(__name__)


def render_all_tasks():
    conn = sqlite3.connect("app.db")
    c = conn.cursor()
    c.execute("SELECT * FROM tasks")
    tasks = c.fetchall()
    conn.close()
    return render_template("index.j2", tasks=tasks)


@app.route("/")
def get():
    """Show all tasks"""
    return render_all_tasks()


@app.route("/", methods=["POST"])
def post():
    """Create task then redirect home"""
    text = request.form.get("text")
    conn = sqlite3.connect("app.db")
    c = conn.cursor()
    c.execute("INSERT INTO tasks (text) VALUES (?)", (text,))
    conn.commit()
    conn.close()
    return render_all_tasks()


@app.route("/", methods=["PUT"])
def put():
    """Update task then redirect home"""
    id = request.json['id']
    done = request.json['done']
    conn = sqlite3.connect("app.db")
    c = conn.cursor()
    c.execute("UPDATE tasks SET done=? WHERE id=?", (done, id))
    conn.commit()
    conn.close()
    return render_all_tasks()


@app.route("/", methods=["DELETE"])
def delete():
    """Delete task then redirect home"""
    id = request.json['id']
    conn = sqlite3.connect("app.db")
    c = conn.cursor()
    c.execute("DELETE FROM tasks WHERE id=?", (id,))
    conn.commit()
    conn.close()
    return render_all_tasks()


if __name__ == "__main__":
    app.run(debug=True)
