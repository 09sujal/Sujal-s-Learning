import math
from typing import *


def areaSwitchCase(ch: int, a: List[float]):
    if ch==1:
        area = math.pi*((a[0])**2)
    elif ch==2:
        area = a[0]*a[1]    
    
    return "{:.5f}".format(area)
