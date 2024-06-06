#include "FortCurieCableSocket.h"

FFortCurieCableSocket::FFortCurieCableSocket() {
    bAutoSendSignalOnElementAttachment = false;
    bAutoSendSignalOnElementDetachment = false;
    bAutoRouteToCurieComponentOnReceive = false;
    bAutoCreateElectricLinksOnSend = false;
}

