template<class... T>
tile::tile(T... args)
 : QPushButton(args...)
{
 ++tileNumber;
 this->setText(QString::number(tileNumber));
}