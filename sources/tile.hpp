template<class... T>
tile::tile(T... args)
 : QPushButton(args...)
{
 ++tileNumber;
 id = tileNumber;
 this->setText(QString::number(id));
 connect(this, &QPushButton::clicked, this, [this](const bool){emit emitId(id);});
}

constexpr auto tile::getId() const
{
 return id;
}