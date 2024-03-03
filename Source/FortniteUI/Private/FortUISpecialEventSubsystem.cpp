#include "FortUISpecialEventSubsystem.h"

void UFortUISpecialEventSubsystem::SetCurrentUISpecialEventState(TEnumAsByte<EFortUISpecialEvents> InNewEventState) {
}

TEnumAsByte<EFortUISpecialEvents> UFortUISpecialEventSubsystem::GetCurrentUIEventState() {
    return NoEvent;
}

void UFortUISpecialEventSubsystem::CallTemporarySpecialUIEvent(TEnumAsByte<EFortUISpecialEvents> InNewTemporaryEvent) {
}

UFortUISpecialEventSubsystem::UFortUISpecialEventSubsystem() {
}

