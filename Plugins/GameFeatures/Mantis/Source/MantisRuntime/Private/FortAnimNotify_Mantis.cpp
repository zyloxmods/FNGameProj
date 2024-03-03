#include "FortAnimNotify_Mantis.h"

UFortAnimNotify_Mantis::UFortAnimNotify_Mantis() {
    this->MantisNotifyEvent = EFortMantisNotifyEvent::Invalid;
    this->MantisBranchRule = EFortMantisBranchRule::Off;
    this->MantisBranchPath = EFortMantisBranchPath::Default;
}

