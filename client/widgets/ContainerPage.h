/*
 * QDigiDoc4
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#pragma once

#include "common_enums.h"
#include "widgets/ItemList.h"
#include "widgets/MainAction.h"
#include "widgets/WarningItem.h"

#include <QPushButton>
#include <QResizeEvent>
#include <QWidget>
#include <vector>
#include <memory>


namespace Ui {
class ContainerPage;
}

class CKey;
class CryptoDoc;
class DigiDoc;
class QFont;
class QFontMetrics;
class SignatureItem;

class ContainerPage : public QWidget
{
	Q_OBJECT

public:
	explicit ContainerPage( QWidget *parent = nullptr );
	~ContainerPage();

	void clear();
	void setHeader(const QString &file);
	void transition(CryptoDoc *container, bool canDecrypt);
	void transition(DigiDoc* container);
	void update(bool canDecrypt, CryptoDoc *container = nullptr);

signals:
	void action(int code, const QString &info1 = QString(), const QString &info2 = QString());
	void addFiles(const QStringList &files);
	void cardChanged(const QString& idCode = QString(), bool seal = false, const QByteArray &serialNumber = QByteArray());
	void details(const QString &id);
	void fileRemoved(int row);
	void keysSelected(QList<CKey> keys);
	void moved(const QString &to);	
	void removed(int row);
	void warning(const WarningText &warningText);

public slots:
	void clearPopups();

protected:
	void resizeEvent( QResizeEvent *event ) override;
	void changeEvent(QEvent* event) override;

private:
	void addError(const SignatureItem* item, QMap<ria::qdigidoc4::WarningType, int> &errors);
	void addressSearch();
	void changeCard(const QString& idCode, bool seal);
	bool checkAction(int code, const QString& selectedCard, const QString& selectedMobile);
	void elideFileName(bool force = false);
	void forward(int code);
	void browseContainer(QString link);
	void hideButtons( std::vector<QWidget*> buttons );
	void hideMainAction();
	void hideOtherAction();
	void hideRightPane();
	void init();
	void initContainer( const QString &file, const QString &suffix );
	void mobileDialog();
	void showButtons( std::vector<QWidget*> buttons );
	void showDropdown();
	void showMainAction(ria::qdigidoc4::Actions action);
	void showRightPane(ria::qdigidoc4::ItemType itemType, const QString &header);
	void showSigningButton();
	void updateDecryptionButton();
	void updatePanes(ria::qdigidoc4::ContainerState state);
	void translateLabels();

	Ui::ContainerPage *ui;
	std::unique_ptr<MainAction> mainAction;
	std::unique_ptr<MainAction> otherAction;
	std::vector<QMetaObject::Connection> actionConnections;
	QString cardInReader;
	int containerFileWidth;
	QFont containerFont;
	bool elided;
	QString fileName;
	QFontMetrics fm;
	QString mobileCode;

	QString cancelText;
	QString changeLocationText;
	QString convertText;
	QString emailText;
	QString envelope;
	QString navigateToContainerText;
	QString saveText;
	bool canDecrypt;
	bool seal;
};
