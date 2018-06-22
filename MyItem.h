#ifndef MYITEM_H
#define MYITEM_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsSvgItem>

class MyItem : public QGraphicsView
{
    Q_OBJECT
public:
    MyItem(QWidget *parent = 0);
    virtual ~MyItem();
    void reinit();

    /** Refreshes (redraws) widget. */
    void update();

    /** @param heading [deg] */
    void setHeading( float heading,int x,int y );

    void setOrignalSizeAndCoordinate(int height,int width,float x,float y);

    void addItem(QString);

protected:

    void resizeEvent( QResizeEvent *event );

private:

    QGraphicsScene *m_scene;

    QGraphicsSvgItem *m_itemFace;

    float m_heading;

    float m_scaleX;
    float m_scaleY;

    int m_originalHeight;
    int m_originalWidth;

    QPointF m_originalHsiCtr;

    QString itemPath;

    const int m_faceZ;

    void init();

    void reset();

    void updateView();
};

#endif // MYITEM_H
