# 1. Instructions for use
Download the file, then open the Dialog folder, find Dialog.pro and double-click to open it. Once opened, you can see the source code and ui layout.

# Ii. Project Description
This project is a simple Qt project, which can help those who have just come into contact with Qt have a basic understanding of Qt. This Qt uses the Label control, the Button control, and the Line control, as well as methods for handling signals, extracting the contents of the input box, and setting the contents to the Label control.

# 3. Explain in detail

The ui layout method is used in the code, and the control is directly dragged to build the content. In the source code:
```c++
connect(ui->pull, &QPushButton::clicked, [=]{
    QString temp;
    double r = ui->R->text().toInt();
    //        qDebug() << r.toInt();
    double m = this->PI * r * r;
    ui->m->setText(temp.setNum(m));
});
```
So this is just processing the signal of the button, connect is the connection signal, you need to connect here. pull control, and this control is a button, so the matching signal is the pressed signal in the button, and the processing signal is processed using the lambda function. In this lambda, we first create a string variable called temp, which is a middleware variable that is used to write content to the m control. An r variable is also created, which is used to calculate the area. First extract the value entered by the user, which is placed in the Line control. Here, we need to use the text() method in the Line control to extract the character, and then use the toInt() method to transform the extracted content into an integer, which is convenient for later calculation. And that's what the m variable is going to do to get the area of the circle. The result is then set to the Label control, which requires the use of a middleware. Because the setText() method can only set strings, and my m is a number, I can't set it directly. I need to convert it to a string before I can set this value.
