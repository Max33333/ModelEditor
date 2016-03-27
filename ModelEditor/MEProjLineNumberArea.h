#pragma once
#include <QtWidgets/QMainWindow>
#include "MEProjCodeWidget.h"

class MEProjLineNumberArea : public QWidget
{
public:
	MEProjLineNumberArea(MEProjCodeWidget *pEditor); //获取Editor指针
	~MEProjLineNumberArea(void);
	QSize sizeHint() const Q_DECL_OVERRIDE; //返回推荐尺寸调整widget大小

protected:
	void paintEvent(QPaintEvent *pQEvent) Q_DECL_OVERRIDE; //绘制行号

private:
	MEProjCodeWidget *m_pCodeEditor;
};

