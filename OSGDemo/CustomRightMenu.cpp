#include "CustomRightMenu.h"
#include <QAction>

CustomRightMenu::CustomRightMenu(QWidget *parent)
	: QWidget(parent)
{
	this->resize(0, 0);
	m_pLayout = new QVBoxLayout;
	m_pLayout->setMargin(0);
	m_pLayout->setSpacing(0);

	this->setLayout(m_pLayout);
}

CustomRightMenu::~CustomRightMenu()
{

}

void CustomRightMenu::addAction(QPushButton* item)
{
	if (item)
	{
		item->resize(80, 25);
		m_pLayout->addWidget(item);

		resize(80, height() + 25);
	}
}

void CustomRightMenu::focusOutEvent(QFocusEvent* e)
{
	hide();
}
