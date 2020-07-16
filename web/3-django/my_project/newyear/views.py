from django.shortcuts import render
from datetime import datetime


def index(request):
    month = datetime.now().month
    day = datetime.now().day
    is_new_year = month == 1 and day == 1
    return render(request, "newyear/index.html", {"is_new_year": is_new_year})
