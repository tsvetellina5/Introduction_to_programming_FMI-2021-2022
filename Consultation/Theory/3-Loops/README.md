# Оператори за цикъл


### Цикъл while

```c++
while(<condition>)
{
	 body...
}
```

![while_flow_diagram](https://www.tutorialspoint.com/cplusplus/images/cpp_while_loop.jpg)

### Цикъл for

```c++
for(int i = 0; i <= 300; i+=2)
{
 //body
}
```

![for_flow_diagram](https://www.tutorialspoint.com/cplusplus/images/cpp_for_loop.jpg)

Структурата на for-циклите включва:
1. инициализационен блок
2. условие на цикъла
3. команди за обновяване на водещите променливи
4. Тяло на цикъла

### Цикъл do-while

```c++
do
{
  //body
} while(<condition>);
```

![do_while_flow_diagram](https://www.tutorialspoint.com/cplusplus/images/cpp_do_while_loop.jpg)

_Do-while_ конструкцията е подобна _while_ цикъла, но с тази разлика, че условието е зададено в края т.е. проверката се прави след като се изпълни тялото на цикъла.

**Важно**: При do-while тялото се изпълнява поне веднъж!

### Оператор break
Използва се преждевременно излизане от цикъл, преди той да е завършил изпълнението си по естествения си начин.

### Оператор continue
Използва се, когато реализираният алгоритъм изисква пропускане на част от операторите или част от кода в тялото на даден цикъл.
