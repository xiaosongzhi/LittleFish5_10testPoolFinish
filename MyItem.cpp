#include "MyItem.h"

MyItem::MyItem(QWidget *parent):
    QGraphicsView(parent),
    m_scene ( 0 ),

    m_itemFace ( 0 ),

    m_heading ( 0.0f ),

    m_scaleX ( 1.0f ),
    m_scaleY ( 1.0f ),
    m_faceZ ( 9 )
{
    reset();
    m_scene = new QGraphicsScene( this );
    setScene( m_scene );
    m_scene->clear();

}


MyItem:: ~MyItem()
{

}

void MyItem::setOrignalSizeAndCoordinate(int height,int width,float x,float y)
{
    m_originalHeight = height;
    m_originalWidth = width;
    m_originalHsiCtr.setX(x);
    m_originalHsiCtr.setY(y);
    m_scene->setSceneRect(0,0,height+5,width+5);
}
void MyItem::reinit()
{
    if ( m_scene )
    {
        m_scene->clear();

        init();
    }
}

////////////////////////////////////////////////////////////////////////////////

void MyItem::update()
{
    updateView();
}

////////////////////////////////////////////////////////////////////////////////

void MyItem::setHeading( float heading,int x,int y )
{
    m_itemFace->setPos(x*m_scaleX,y*m_scaleY);
    m_heading = heading;
    updateView();
}

////////////////////////////////////////////////////////////////////////////////

void MyItem::resizeEvent( QResizeEvent *event )
{
    ////////////////////////////////////
    QGraphicsView::resizeEvent( event );
    ////////////////////////////////////

    reinit();
}

////////////////////////////////////////////////////////////////////////////////
void MyItem::addItem(QString path)
{
    itemPath = path;
    init();
}
void MyItem::init()
{
    m_scaleX = (float)width()  / (float)m_originalWidth;
    m_scaleY = (float)height() / (float)m_originalHeight;

    reset();

    m_itemFace = new QGraphicsSvgItem( itemPath );
    m_itemFace->setCacheMode( QGraphicsItem::NoCache );
    m_itemFace->setZValue( m_faceZ );   //设置item的堆叠顺序,数值越小代表靠前
    m_itemFace->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );

    m_itemFace->setTransformOriginPoint( m_originalHsiCtr );//设置变换原点,此变换远点必须为原图大小的中心点，并不是变化后的
    m_scene->addItem( m_itemFace );

//    m_itemFace->hide();

    centerOn( width() / 2.0f , height() / 2.0f );

    updateView();
}

////////////////////////////////////////////////////////////////////////////////

void MyItem::reset()
{
    m_itemFace = 0;
}

////////////////////////////////////////////////////////////////////////////////

void MyItem::updateView()
{
    m_itemFace->setRotation(  m_heading );

    m_scene->update();
}
