Python 3.13.0 (tags/v3.13.0:60403a5, Oct  7 2024, 09:38:07) [MSC v.1941 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
t = (2,4,5,6,89,4)
t[0]
2
t[0] = 100
Traceback (most recent call last):
  File "<pyshell#2>", line 1, in <module>
    t[0] = 100
TypeError: 'tuple' object does not support item assignment
t = list(t)
type(t)
<class 'list'>
t[0] = 100
t = tuple(t)
type(t)
<class 'tuple'>
t
(100, 4, 5, 6, 89, 4)
s = {}
type(s)
<class 'dict'>
s = set()
s
set()
s = {1,2,3,4,1,2,2,3,4}
len(s)
4
s
{1, 2, 3, 4}
s[0]
Traceback (most recent call last):
  File "<pyshell#16>", line 1, in <module>
    s[0]
TypeError: 'set' object is not subscriptable
s = {1,2,3,4}
s1 = {4,5,6,7}
s.union(s1)
{1, 2, 3, 4, 5, 6, 7}
s.intersection(s1)
{4}
s.difference(s1)
{1, 2, 3}
s
{1, 2, 3, 4}
s.update(s1)
s
{1, 2, 3, 4, 5, 6, 7}
s = {1,2,3,4}
s.intersection_update(s1)
s
{4}
s = {1,2,3,4}
s.symmetric_difference(s1)
{1, 2, 3, 5, 6, 7}
s
{1, 2, 3, 4}
s.add(56)
s
{1, 2, 3, 4, 56}
s.remove(56)
s
{1, 2, 3, 4}
s.remove(100)
Traceback (most recent call last):
  File "<pyshell#35>", line 1, in <module>
    s.remove(100)
KeyError: 100
s.discard(100)
s
{1, 2, 3, 4}
s.pop()
1
s
{2, 3, 4}
>>> s.clear()
>>> s
set()
>>> s = {1,2,3}
>>> s.isdisjoint(s1)
True
>>> s.issuperset(s1)
False
>>> s = {5,6}
>>> s.issubset(s1)
True
>>> s = frozenset(s)
>>> s
frozenset({5, 6})
>>> s.add(56)
Traceback (most recent call last):
  File "<pyshell#49>", line 1, in <module>
    s.add(56)
AttributeError: 'frozenset' object has no attribute 'add'
>>> dic = {"name":"amit","class":9,"roll_no":5,"marks":69}
dic["name"]
'amit'
dic["class"]
9
dic["div"] = 2
dic
{'name': 'amit', 'class': 9, 'roll_no': 5, 'marks': 69, 'div': 2}
dic.keys()
dict_keys(['name', 'class', 'roll_no', 'marks', 'div'])
dic.values()
dict_values(['amit', 9, 5, 69, 2])
dic.items()
dict_items([('name', 'amit'), ('class', 9), ('roll_no', 5), ('marks', 69), ('div', 2)])
dic.get('name')
'amit'
di = {1,2,3,4}
d = di.copy()
d
{1, 2, 3, 4}
d = dic.copy()
d
{'name': 'amit', 'class': 9, 'roll_no': 5, 'marks': 69, 'div': 2}
dic.popitem()
('div', 2)
di = {"house_color":"jupyter"}
dic.update(di)
dic
{'name': 'amit', 'class': 9, 'roll_no': 5, 'marks': 69, 'house_color': 'jupyter'}
dic["house_color"] = "blue"
dic
{'name': 'amit', 'class': 9, 'roll_no': 5, 'marks': 69, 'house_color': 'blue'}
dic.pop('house_color')
'blue'
dic.pop()
Traceback (most recent call last):
  File "<pyshell#71>", line 1, in <module>
    dic.pop()
TypeError: pop expected at least 1 argument, got 0
dic.pop("div","marks")
'marks'
dic
{'name': 'amit', 'class': 9, 'roll_no': 5, 'marks': 69}
dic1 = {"names":["Riya","Siya","Jiya","Miya"],"marks":[85,67,84,91]}
for i in dic1:
    print(i)

names
marks
for i in range(len(dic1["names"])):
    n = dic1["names"]
    m = dic1["marks"]
    print(f"{n[i]} : {m[i]}")

Riya : 85
Siya : 67
Jiya : 84
Miya : 91
dic1["names"][0]
'Riya'
li = [{'name': 'amit', 'class': 9},{'name': 'sonu', 'class': 10}]
li[0]['class']
9
