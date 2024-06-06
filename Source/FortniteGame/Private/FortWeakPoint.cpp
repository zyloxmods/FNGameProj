#include "FortWeakPoint.h"
#include "Net/UnrealNetwork.h"


void AFortWeakPoint::OnRep_WeakPointState() {
}

EFortWeakPointState AFortWeakPoint::GetWeakPointState() const {
    return EFortWeakPointState::Uninitialized;
}

FName AFortWeakPoint::GetWeakPointAttachmentSocketName() const {
    return NAME_None;
}

UShapeComponent* AFortWeakPoint::GetAimAssistTargetComponent_Implementation() {
    return NULL;
}

void AFortWeakPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeakPoint, WeakPointState);
    DOREPLIFETIME(AFortWeakPoint, WeakPointAttachmentSocketName);
}

AFortWeakPoint::AFortWeakPoint() {
    CachedWeakPointCoordinator = NULL;
    WeakPointState = EFortWeakPointState::Uninitialized;
    bShouldDisplayHealthBarWhenActive = false;
    bShouldRegisterForAimAssist = true;
}

