#include "mainwindow.h"
#include "ui_mainwindow.h"


/////////////////////////////////////////
/*Funciones para nuevo- abrir - guardar*/
/////////////////////////////////////////
void MainWindow::on_actionNew_triggered()
{
    mFilename = "";
     //ui->textEdit->setPlainText("");
}

void MainWindow::on_actionOpen_triggered()
{
   QString file = QFileDialog::getOpenFileName(this,"Abrir G-CODE");
   if (! file.isEmpty())
   {
     QFile sFile(file);
     if (sFile.open(QFile::ReadOnly|QFile::Text))
     {
         mFilename =file; //le estoy indicando que voy a trabajar con el archivo que abri anteriormete
         QTextStream in (&sFile);
         texto_codigo_g= in.readAll();
        // QString text= in.readAll();
         sFile.close();

         //ui->textEdit->setPlainText(text);
         //ui->textEdit->setPlainText(texto_codigo_g);
     }
   }
}

void MainWindow::on_actionSave_triggered()
{
  QFile sFile(mFilename);
  if (sFile.open(QFile::WriteOnly|QFile::Text))
  {
     QTextStream out (&sFile);

     sFile.flush();
     sFile.close();
  }
}
void MainWindow::on_actionSave_As_triggered()
{

    QString file = QFileDialog::getSaveFileName(this,"Guardar G-CODE");
    if (! file.isEmpty())
    {
       mFilename = file;
        on_actionSave_triggered();

    }
}
/////////////////////////////////////////
/////Funciones de copiar -cortar -pegar//
/////////////////////////////////////////
void MainWindow::on_actionCopy_triggered()
{
  //ui->textEdit->copy();
}

void MainWindow::on_actionCut_triggered()
{
    //ui->textEdit->cut();
}

void MainWindow::on_actionPaste_triggered()
{
    //ui->textEdit->paste();
}

/////////////////////////////////////////
/////Funciones para atras y adelante/////
/////////////////////////////////////////

void MainWindow::on_actionUndo_triggered()
{
   // ui->textEdit->undo();
}

void MainWindow::on_actionRedo_triggered()
{
   // ui->textEdit->redo();
}
