#include "ScriptedPawnRunScriptBlueprintAction.h"
#include "Net/UnrealNetwork.h"

UScriptedPawnRunScriptBlueprintAction* UScriptedPawnRunScriptBlueprintAction::RunScriptOnPawn(const FString& NewScriptName, AFortPlayerPawn* TargetPawn) {
    return NULL;
}

void UScriptedPawnRunScriptBlueprintAction::OnScriptComplete_Implementation() {
}
bool UScriptedPawnRunScriptBlueprintAction::OnScriptComplete_Validate() {
    return true;
}

void UScriptedPawnRunScriptBlueprintAction::InternalRunScriptOnPawn_Implementation() {
}
bool UScriptedPawnRunScriptBlueprintAction::InternalRunScriptOnPawn_Validate() {
    return true;
}

void UScriptedPawnRunScriptBlueprintAction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UScriptedPawnRunScriptBlueprintAction, WorldContextObject);
    DOREPLIFETIME(UScriptedPawnRunScriptBlueprintAction, SpawnLocation);
    DOREPLIFETIME(UScriptedPawnRunScriptBlueprintAction, SpawnRotator);
    DOREPLIFETIME(UScriptedPawnRunScriptBlueprintAction, ScriptName);
    DOREPLIFETIME(UScriptedPawnRunScriptBlueprintAction, ScriptedPawn);
}

UScriptedPawnRunScriptBlueprintAction::UScriptedPawnRunScriptBlueprintAction() {
    WorldContextObject = NULL;
    ScriptedPawn = NULL;
}

