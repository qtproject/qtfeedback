TEMPLATE = subdirs
SUBDIRS += \
    qfeedbackactuator \
    qfeedbackhapticseffect \
    qfeedbackplugin \
    qfeedbacknoplugins \
    qfeedbackmmk \
    qdeclarativefeedback \

!contains(QT_CONFIG, qml): SUBDIRS -= \
    qdeclarativefeedback \

!contains(QT_CONFIG, multimedia): SUBDIRS -= \
    qfeedbackmmk \

