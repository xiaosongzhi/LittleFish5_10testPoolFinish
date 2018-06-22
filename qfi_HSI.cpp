/***************************************************************************//**
 * @file qfi_HSI.cpp
 * @author  Marek M. Cel <marekcel@marekcel.pl>
 *
 * @section LICENSE
 *
 * Copyright (C) 2013 Marek M. Cel
 *
 * This file is part of QFlightInstruments. You can redistribute and modify it
 * under the terms of GNU General Public License as published by the Free
 * Software Foundation; either version 3 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.
 * 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 * Further information about the GNU General Public License can also be found
 * on the world wide web at http://www.gnu.org.
 *
 * ---
 *
 * Copyright (C) 2013 Marek M. Cel
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 ******************************************************************************/
#ifndef QFI_HSI_CPP
#define QFI_HSI_CPP
#endif

////////////////////////////////////////////////////////////////////////////////

#ifdef WIN32
#   include <float.h>
#endif

#include <math.h>
#include <QDebug>
#include "qfi_HSI.h"

////////////////////////////////////////////////////////////////////////////////

qfi_HSI::qfi_HSI( QWidget *parent ) :
    QGraphicsView ( parent ),

    m_scene ( 0 ),

    m_itemFace ( 0 ),
    fishFirst (0),
    fishSecond (0),
    fishThird (0),

    m_heading ( 0.0f ),

    m_scaleX ( 1.0f ),
    m_scaleY ( 1.0f ),

    m_originalHeight ( 991 ),
    m_originalWidth  ( 581 ),

    m_originalHsiCtr ( 100 , 62 ),

    m_faceZ ( 9 ),
    m_caseZ (  10 )
{
    reset();

    m_scene = new QGraphicsScene( this );
    setScene( m_scene );
    m_scene->setSceneRect(0,0,995,585);
    m_scene->clear();

    init();
}

////////////////////////////////////////////////////////////////////////////////

qfi_HSI::~qfi_HSI()
{
    if ( m_scene )
    {
        m_scene->clear();
        delete m_scene;
        m_scene = 0;
    }

    reset();
}

////////////////////////////////////////////////////////////////////////////////

void qfi_HSI::reinit()
{
    if ( m_scene )
    {
        m_scene->clear();

        init();
    }
}

////////////////////////////////////////////////////////////////////////////////

void qfi_HSI::update()
{
    updateView();
}

////////////////////////////////////////////////////////////////////////////////

void qfi_HSI::setHeading( float heading )
{
    m_heading = heading;
}

////////////////////////////////////////////////////////////////////////////////

void qfi_HSI::resizeEvent( QResizeEvent *event )
{
    ////////////////////////////////////
    QGraphicsView::resizeEvent( event );
    ////////////////////////////////////

    reinit();
}

////////////////////////////////////////////////////////////////////////////////

void qfi_HSI::init()
{
    m_scaleX = (float)width()  / (float)m_originalWidth;
    m_scaleY = (float)height() / (float)m_originalHeight;

    reset();

    m_itemFace = new QGraphicsSvgItem( ":/new/prefix1/hsi/1号.svg" );
    m_itemFace->setCacheMode( QGraphicsItem::NoCache );
    m_itemFace->setZValue( m_faceZ );   //设置item的堆叠顺序,数值越小代表靠前
    m_itemFace->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    m_itemFace->setTransformOriginPoint( m_originalHsiCtr );//设置变换原点,此变换远点必须为原图大小的中心点，并不是变化后的
    m_scene->addItem( m_itemFace );

    fishSecond = new QGraphicsSvgItem( ":/new/prefix1/hsi/2号.svg" );
    fishSecond->setCacheMode( QGraphicsItem::NoCache );
    fishSecond->setZValue( 10 );   //设置item的堆叠顺序,数值越小代表靠前
    fishSecond->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    fishSecond->setTransformOriginPoint( m_originalHsiCtr );//设置变换原点,此变换远点必须为原图大小的中心点，并不是变化后的
    m_scene->addItem( fishSecond );

    fishThird = new QGraphicsSvgItem( ":/new/prefix1/hsi/3号.svg" );
    fishThird->setCacheMode( QGraphicsItem::NoCache );
    fishThird->setZValue( 11 );   //设置item的堆叠顺序,数值越小代表靠前
    fishThird->setTransform( QTransform::fromScale( m_scaleX, m_scaleY ), true );
    fishThird->setTransformOriginPoint( m_originalHsiCtr );//设置变换原点,此变换远点必须为原图大小的中心点，并不是变化后的
    m_scene->addItem( fishThird );

    centerOn( width() / 2.0f , height() / 2.0f );

    updateView();
}

////////////////////////////////////////////////////////////////////////////////

void qfi_HSI::reset()
{
    m_itemFace = 0;


    m_heading = 0.0f;
}

////////////////////////////////////////////////////////////////////////////////

void qfi_HSI::updateView()
{
    m_itemFace->setRotation( - m_heading );

    m_scene->update();
}

void qfi_HSI::setPosition(quint8 item,qreal x,qreal y,qreal angle)
{
    switch(item)
    {
    case 1:
        m_itemFace->setPos(x,y);
        m_itemFace->setRotation(angle);
        break;
    case 2:
        fishSecond->setPos(x,y);
        fishSecond->setRotation(angle);
        break;
    case 3:
        fishThird->setPos(x,y);
        fishThird->setRotation(angle);
        break;
    default:
        break;

    }
    m_scene->update();
}
void qfi_HSI::setItemHideOrShow(quint8 item,quint8 flag)
{
    switch(item)
    {
    case 1:
        if(flag)
        {
            m_itemFace->show();
        }
        else
        {
            m_itemFace->hide();
        }
        break;
    case 2:
        if(flag)
        {
            fishSecond->show();
        }
        else
        {
            fishSecond->hide();
        }
        break;
    case 3:
        if(flag)
        {
            fishThird->show();
        }
        else
        {
            fishThird->hide();
        }
        break;
    default:
        break;
    }
}
