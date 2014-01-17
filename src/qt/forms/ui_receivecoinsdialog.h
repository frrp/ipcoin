/********************************************************************************
** Form generated from reading UI file 'receivecoinsdialog.ui'
**
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVECOINSDIALOG_H
#define UI_RECEIVECOINSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "ipcoinamountfield.h"

QT_BEGIN_NAMESPACE

class Ui_ReceiveCoinsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QCheckBox *reuseAddress;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *reqLabel;
    QLineEdit *reqMessage;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label;
    BitcoinAmountField *reqAmount;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *receiveButton;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QTableView *recentRequestsView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *showRequestButton;
    QPushButton *removeRequestButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ReceiveCoinsDialog)
    {
        if (ReceiveCoinsDialog->objectName().isEmpty())
            ReceiveCoinsDialog->setObjectName(QString::fromUtf8("ReceiveCoinsDialog"));
        ReceiveCoinsDialog->resize(776, 364);
        verticalLayout = new QVBoxLayout(ReceiveCoinsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        reuseAddress = new QCheckBox(ReceiveCoinsDialog);
        reuseAddress->setObjectName(QString::fromUtf8("reuseAddress"));

        gridLayout->addWidget(reuseAddress, 7, 2, 1, 1);

        label_4 = new QLabel(ReceiveCoinsDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        label_3 = new QLabel(ReceiveCoinsDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        reqLabel = new QLineEdit(ReceiveCoinsDialog);
        reqLabel->setObjectName(QString::fromUtf8("reqLabel"));

        gridLayout->addWidget(reqLabel, 4, 2, 1, 1);

        reqMessage = new QLineEdit(ReceiveCoinsDialog);
        reqMessage->setObjectName(QString::fromUtf8("reqMessage"));

        gridLayout->addWidget(reqMessage, 6, 2, 1, 1);

        label_5 = new QLabel(ReceiveCoinsDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 2, 1, 1);

        label_2 = new QLabel(ReceiveCoinsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label = new QLabel(ReceiveCoinsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 5, 0, 1, 1);

        reqAmount = new BitcoinAmountField(ReceiveCoinsDialog);
        reqAmount->setObjectName(QString::fromUtf8("reqAmount"));
        reqAmount->setMinimumSize(QSize(80, 0));

        gridLayout->addWidget(reqAmount, 5, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        clearButton = new QPushButton(ReceiveCoinsDialog);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon);
        clearButton->setAutoRepeatDelay(300);
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        receiveButton = new QPushButton(ReceiveCoinsDialog);
        receiveButton->setObjectName(QString::fromUtf8("receiveButton"));
        receiveButton->setMinimumSize(QSize(150, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/receiving_addresses"), QSize(), QIcon::Normal, QIcon::Off);
        receiveButton->setIcon(icon1);

        horizontalLayout->addWidget(receiveButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        frame = new QFrame(ReceiveCoinsDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);

        verticalLayout_2->addWidget(label_6);

        recentRequestsView = new QTableView(frame);
        recentRequestsView->setObjectName(QString::fromUtf8("recentRequestsView"));

        verticalLayout_2->addWidget(recentRequestsView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        showRequestButton = new QPushButton(frame);
        showRequestButton->setObjectName(QString::fromUtf8("showRequestButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/edit"), QSize(), QIcon::Normal, QIcon::Off);
        showRequestButton->setIcon(icon2);

        horizontalLayout_2->addWidget(showRequestButton);

        removeRequestButton = new QPushButton(frame);
        removeRequestButton->setObjectName(QString::fromUtf8("removeRequestButton"));
        removeRequestButton->setIcon(icon);

        horizontalLayout_2->addWidget(removeRequestButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(frame);

#ifndef QT_NO_SHORTCUT
        label_3->setBuddy(reqMessage);
        label_2->setBuddy(reqLabel);
        label->setBuddy(reqAmount);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(reqLabel, reqAmount);
        QWidget::setTabOrder(reqAmount, reqMessage);
        QWidget::setTabOrder(reqMessage, reuseAddress);
        QWidget::setTabOrder(reuseAddress, clearButton);
        QWidget::setTabOrder(clearButton, receiveButton);
        QWidget::setTabOrder(receiveButton, recentRequestsView);
        QWidget::setTabOrder(recentRequestsView, showRequestButton);
        QWidget::setTabOrder(showRequestButton, removeRequestButton);

        retranslateUi(ReceiveCoinsDialog);

        QMetaObject::connectSlotsByName(ReceiveCoinsDialog);
    } // setupUi

    void retranslateUi(QWidget *ReceiveCoinsDialog)
    {
#ifndef QT_NO_TOOLTIP
        reuseAddress->setToolTip(QApplication::translate("ReceiveCoinsDialog", "Reuse one of the previously used receiving addresses. Reusing addresses has security and privacy issues. Do not use this unless re-generating a payment request made before.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        reuseAddress->setText(QApplication::translate("ReceiveCoinsDialog", "R&euse an existing receiving address (not recommended)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        label_3->setText(QApplication::translate("ReceiveCoinsDialog", "&Message:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        reqLabel->setToolTip(QApplication::translate("ReceiveCoinsDialog", "The label to associate with the new receiving address", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        reqMessage->setToolTip(QApplication::translate("ReceiveCoinsDialog", "The message to attach to payment request", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("ReceiveCoinsDialog", "Use this form to request payments. All fields are optional.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ReceiveCoinsDialog", "&Label:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ReceiveCoinsDialog", "&Amount:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        reqAmount->setToolTip(QApplication::translate("ReceiveCoinsDialog", "The amount to request", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("ReceiveCoinsDialog", "Clear all fields of the form.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("ReceiveCoinsDialog", "Clear", 0, QApplication::UnicodeUTF8));
        receiveButton->setText(QApplication::translate("ReceiveCoinsDialog", "&Request payment", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ReceiveCoinsDialog", "Previously requested payments", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showRequestButton->setToolTip(QApplication::translate("ReceiveCoinsDialog", "Show the selected request (does the same as double clicking an entry)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showRequestButton->setText(QApplication::translate("ReceiveCoinsDialog", "Show", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        removeRequestButton->setToolTip(QApplication::translate("ReceiveCoinsDialog", "Remove the selected entries from the list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        removeRequestButton->setText(QApplication::translate("ReceiveCoinsDialog", "Remove", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ReceiveCoinsDialog);
    } // retranslateUi

};

namespace Ui {
    class ReceiveCoinsDialog: public Ui_ReceiveCoinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVECOINSDIALOG_H
