//
// Generated file, do not edit! Created by nedtool 5.6 from veins_inet/vfognetsim/mecoMessages/VehicleTaskAckByMeco.msg.
//

#ifndef __VEHICLETASKACKBYMECO_M_H
#define __VEHICLETASKACKBYMECO_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



class VehicleTaskAckByMeco;
#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

/**
 * Class generated from <tt>veins_inet/vfognetsim/mecoMessages/VehicleTaskAckByMeco.msg:26</tt> by nedtool.
 * <pre>
 * //
 * // Example message definition
 * //
 * class VehicleTaskAckByMeco extends inet::FieldsChunk
 * {
 *     int taskID;
 *     int mecoID;
 *     int rsuID;
 *     int vehicleID;
 * }
 * </pre>
 */
class VehicleTaskAckByMeco : public ::inet::FieldsChunk
{
  protected:
    int taskID = 0;
    int mecoID = 0;
    int rsuID = 0;
    int vehicleID = 0;

  private:
    void copy(const VehicleTaskAckByMeco& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const VehicleTaskAckByMeco&);

  public:
    VehicleTaskAckByMeco();
    VehicleTaskAckByMeco(const VehicleTaskAckByMeco& other);
    virtual ~VehicleTaskAckByMeco();
    VehicleTaskAckByMeco& operator=(const VehicleTaskAckByMeco& other);
    virtual VehicleTaskAckByMeco *dup() const override {return new VehicleTaskAckByMeco(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getTaskID() const;
    virtual void setTaskID(int taskID);
    virtual int getMecoID() const;
    virtual void setMecoID(int mecoID);
    virtual int getRsuID() const;
    virtual void setRsuID(int rsuID);
    virtual int getVehicleID() const;
    virtual void setVehicleID(int vehicleID);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const VehicleTaskAckByMeco& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, VehicleTaskAckByMeco& obj) {obj.parsimUnpack(b);}

#endif // ifndef __VEHICLETASKACKBYMECO_M_H

