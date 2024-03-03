#include "FortCurieCableSocket.h"

FFortCurieCableSocket::FFortCurieCableSocket() {
    this->bAutoSendSignalOnElementAttachment = false;
    this->bAutoSendSignalOnElementDetachment = false;
    this->bAutoRouteToCurieComponentOnReceive = false;
    this->bAutoCreateElectricLinksOnSend = false;
}

