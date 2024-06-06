#include "FortLauncherAthena.h"
#include "Net/UnrealNetwork.h"


void AFortLauncherAthena::ReTriggerForPawn(AFortPlayerPawnAthena* AthenaPawn) {
}

void AFortLauncherAthena::OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFortLauncherAthena::OnRepLaunchServerInfo() {
}

void AFortLauncherAthena::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortLauncherAthena, ServerLaunchInfo);
}

AFortLauncherAthena::AFortLauncherAthena() {
    OnLaunchSound3P = NULL;
    OnLaunchSound1P = NULL;
}

