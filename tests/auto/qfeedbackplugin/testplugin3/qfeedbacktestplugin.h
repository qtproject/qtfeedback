/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the Qt Mobility Components.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QFEEDBACKTESTPLUGIN_H
#define QFEEDBACKTESTPLUGIN_H

#include <QtCore/QList>
#include <QtCore/QVector>
#include <QtCore/QHash>
#include <QtCore/QMap>
#include <QtCore/QObject>
#include <QtCore/QMutex>
#include <QtCore/QTimer>

#include <qfeedbackplugininterfaces.h>

QT_BEGIN_HEADER
QT_USE_NAMESPACE

class QFeedbackTestPlugin : public QObject, public QFeedbackThemeInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtFeedbackTestPlugin3")
    Q_INTERFACES(QFeedbackThemeInterface)
public:
    QFeedbackTestPlugin();
    virtual ~QFeedbackTestPlugin();

    virtual PluginPriority pluginPriority() {return QFeedbackInterface::PluginLowPriority;}
    virtual bool play(QFeedbackEffect::Effect) {return false;}
};

QT_END_HEADER

#endif
