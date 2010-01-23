#ifndef EVENT_TIME_SELECTION_DIALOG_H
#define EVENT_TIME_SELECTION_DIALOG_H

#include "base/event_table_file_reader.h"
#include "base/user_types.h"
#include "base/signal_buffer.h"

#include <QDialog>
#include <QString>

#include <map>

class QListWidget;
class QComboBox;
class QPushButton;
class QDoubleSpinBox;
class QLabel;

namespace BioSig_
{

class EventTimeSelectionDialog : public QDialog
{
    Q_OBJECT
public:
    //-------------------------------------------------------------------------
    EventTimeSelectionDialog (std::map<uint16, QString> const& shown_event_types,
                              std::map<uint32, QString> const& shown_channels,
                              SignalBuffer const& signal_buffer);

    //-------------------------------------------------------------------------
    std::vector<uint32> getSelectedChannels () const;

    //-------------------------------------------------------------------------
    uint16 getSelectedEventType () const;

    //-------------------------------------------------------------------------
    float getSecondsBeforeEvent () const;

    //-------------------------------------------------------------------------
    float getLengthInSeconds () const;

protected slots:
    //-------------------------------------------------------------------------
    void selectedEventTypeChanged (int combo_box_index);

private:
    std::map<uint16, QString> shown_event_types_;
    std::map<uint32, QString> shown_channels_;
    SignalBuffer const& signal_buffer_;

    QListWidget* channel_list_widget_;
    QComboBox* event_type_combobox_;
    QPushButton* ok_button_;
    QPushButton* cancel_button_;
    QDoubleSpinBox* seconds_before_spinbox_;
    QDoubleSpinBox* length_spinbox_;
    QLabel* event_type_average_time_label_;
    QLabel* event_type_amount_label_;
};

}

#endif // EVENT_TIME_SELECTION_DIALOG_H
