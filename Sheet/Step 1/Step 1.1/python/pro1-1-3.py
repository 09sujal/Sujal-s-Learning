from typing import *

def compareIfElse(a: int, b: int):
        if a>b:
            return 'greater'
        elif a<b:
            return 'smaller'
        else:
            return 'equal'
        
#with constarints
# def compareIfElse(a: int, b: int) -> str:
#     if -10**5 <= a <= 10**5 and -10**5 <= b <= 10**5:
#         if a > b:
#             return "greater"
#         elif a < b:
#             return 'smaller'
#         else:
#             return 'equal'