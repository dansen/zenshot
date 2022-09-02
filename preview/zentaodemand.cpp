#include "zentaodemand.h"

#include "spdlogwrapper.hpp"

#include <QPainter>
#include <QFile>
#include <QCloseEvent>
#include <QAbstractItemView>
#include <QListWidgetItem>
#include <QStandardItemModel>

extern std::string SETTING_XML_NAME;

ZTDemand::ZTDemand(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	setWindowFlags(windowFlags() | Qt::Tool);

	InitUI();
	SetupUI();
	SetupSignal();
}

void ZTDemand::InitUI()
{
}

void ZTDemand::SetupUI()
{
	// load qss
	QFile file(":/zentaodemand.css");

	file.open(QFile::ReadOnly);
	QString qss = QString::fromLatin1(file.readAll());
	file.close();

	// modif style
	setStyleSheet(qss);
}

void ZTDemand::SetupSignal()
{
}

void ZTDemand::closeEvent(QCloseEvent* event)
{
	event->ignore();
	hide();
}
