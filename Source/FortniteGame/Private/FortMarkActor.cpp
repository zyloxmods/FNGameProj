#include "FortMarkActor.h"
#include "Net/UnrealNetwork.h"

void AFortMarkActor::OnRep_AttachedToActor() {
}

void AFortMarkActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMarkActor, OwningPlayer);
    DOREPLIFETIME(AFortMarkActor, MarkString);
    DOREPLIFETIME(AFortMarkActor, PreapprovedMarkString);
    DOREPLIFETIME(AFortMarkActor, bFinishedEditing);
    DOREPLIFETIME(AFortMarkActor, AttachedToActor);
    DOREPLIFETIME(AFortMarkActor, AttachmentOffset);
}

AFortMarkActor::AFortMarkActor() {
    MarkString = TEXT("Type Here, Esc Cancels");
    bFinishedEditing = false;
    AttachedToActor = NULL;
}

