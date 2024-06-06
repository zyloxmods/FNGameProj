#include "ScriptedPawnBlueprintAction.h"
#include "Net/UnrealNetwork.h"

UScriptedPawnBlueprintAction* UScriptedPawnBlueprintAction::SpawnScriptedPawn(const FString& NewScriptName, const FVector Location, const FRotator Rotation) {
    return NULL;
}

void UScriptedPawnBlueprintAction::OnScriptComplete_Implementation() {
}
bool UScriptedPawnBlueprintAction::OnScriptComplete_Validate() {
    return true;
}

void UScriptedPawnBlueprintAction::InternalSpawnScriptedPawn_Implementation() {
}
bool UScriptedPawnBlueprintAction::InternalSpawnScriptedPawn_Validate() {
    return true;
}

void UScriptedPawnBlueprintAction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UScriptedPawnBlueprintAction, WorldContextObject);
    DOREPLIFETIME(UScriptedPawnBlueprintAction, SpawnLocation);
    DOREPLIFETIME(UScriptedPawnBlueprintAction, SpawnRotator);
    DOREPLIFETIME(UScriptedPawnBlueprintAction, ScriptName);
    DOREPLIFETIME(UScriptedPawnBlueprintAction, ScriptedPawn);
}

UScriptedPawnBlueprintAction::UScriptedPawnBlueprintAction() {
    WorldContextObject = NULL;
    ScriptedPawn = NULL;
}

