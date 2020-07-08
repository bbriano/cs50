from peewee import SqliteDatabase, Model, CharField, DateTimeField, BooleanField, ForeignKeyField
from datetime import datetime

db = SqliteDatabase('app.db')
db.connect()


class BaseModel(Model):
    class Meta:
        database = db


class User(BaseModel):
    username = CharField(unique=True)
    password_hash = CharField()


class Task(BaseModel):
    user = ForeignKeyField(User, backref='tasks')
    message = CharField()
    completed = BooleanField(default=False)
    created_date = DateTimeField(default=datetime.now)


# db.create_tables([User, Task])
# briano = User.create(
#     username='briano', password_hash='$2b$12$Kl8UaKycRoSeAjP2F8voqOmqXyZeCeQpgsgIyvMWkYRR0psYJK3RO')
# Task.create(user=briano, message='make millions')

