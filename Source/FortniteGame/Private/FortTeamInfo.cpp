#include "FortTeamInfo.h"
#include "Net/UnrealNetwork.h"

void AFortTeamInfo::OnSpottedActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

int32 AFortTeamInfo::GetTeamLevel() const {
    return 0;
}

int32 AFortTeamInfo::GetTeamExperience() const {
    return 0;
}

void AFortTeamInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTeamInfo, Team);
    DOREPLIFETIME(AFortTeamInfo, ChatRoomId);
    DOREPLIFETIME(AFortTeamInfo, TeamSpottedActors);
    DOREPLIFETIME(AFortTeamInfo, PrivateInfo);
}

AFortTeamInfo::AFortTeamInfo() {
    Team = 0;
    PrivateInfo = NULL;
}

