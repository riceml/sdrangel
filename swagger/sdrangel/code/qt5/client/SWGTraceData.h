/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 6.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGTraceData.h
 *
 * see GLScopeSettings::TraceData
 */

#ifndef SWGTraceData_H_
#define SWGTraceData_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGTraceData: public SWGObject {
public:
    SWGTraceData();
    SWGTraceData(QString* json);
    virtual ~SWGTraceData();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGTraceData* fromJson(QString &jsonString) override;

    qint32 getStreamIndex();
    void setStreamIndex(qint32 stream_index);

    qint32 getProjectionType();
    void setProjectionType(qint32 projection_type);

    qint32 getInputIndex();
    void setInputIndex(qint32 input_index);

    float getAmp();
    void setAmp(float amp);

    float getOfs();
    void setOfs(float ofs);

    qint32 getTraceDelay();
    void setTraceDelay(qint32 trace_delay);

    qint32 getTraceDelayCoarse();
    void setTraceDelayCoarse(qint32 trace_delay_coarse);

    qint32 getTraceDelayFine();
    void setTraceDelayFine(qint32 trace_delay_fine);

    float getTriggerDisplayLevel();
    void setTriggerDisplayLevel(float trigger_display_level);

    qint32 getTraceColor();
    void setTraceColor(qint32 trace_color);

    float getTraceColorR();
    void setTraceColorR(float trace_color_r);

    float getTraceColorG();
    void setTraceColorG(float trace_color_g);

    float getTraceColorB();
    void setTraceColorB(float trace_color_b);

    qint32 getHasTextOverlay();
    void setHasTextOverlay(qint32 has_text_overlay);

    QString* getTextOverlay();
    void setTextOverlay(QString* text_overlay);

    qint32 getViewTrace();
    void setViewTrace(qint32 view_trace);


    virtual bool isSet() override;

private:
    qint32 stream_index;
    bool m_stream_index_isSet;

    qint32 projection_type;
    bool m_projection_type_isSet;

    qint32 input_index;
    bool m_input_index_isSet;

    float amp;
    bool m_amp_isSet;

    float ofs;
    bool m_ofs_isSet;

    qint32 trace_delay;
    bool m_trace_delay_isSet;

    qint32 trace_delay_coarse;
    bool m_trace_delay_coarse_isSet;

    qint32 trace_delay_fine;
    bool m_trace_delay_fine_isSet;

    float trigger_display_level;
    bool m_trigger_display_level_isSet;

    qint32 trace_color;
    bool m_trace_color_isSet;

    float trace_color_r;
    bool m_trace_color_r_isSet;

    float trace_color_g;
    bool m_trace_color_g_isSet;

    float trace_color_b;
    bool m_trace_color_b_isSet;

    qint32 has_text_overlay;
    bool m_has_text_overlay_isSet;

    QString* text_overlay;
    bool m_text_overlay_isSet;

    qint32 view_trace;
    bool m_view_trace_isSet;

};

}

#endif /* SWGTraceData_H_ */
