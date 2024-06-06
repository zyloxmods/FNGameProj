#include "FortAIEncounterSequence.h"

void UFortAIEncounterSequence::StopCurrentEncounter() {
}

UFortAIEncounterInfo* UFortAIEncounterSequence::StartCurrentEncounterWithSavedData(EFortEncounterSequenceResult& OutRequestResult, int32 ActivationDelay) {
    return NULL;
}

UFortAIEncounterInfo* UFortAIEncounterSequence::StartCurrentEncounter(EFortEncounterSequenceResult& OutRequestResult, const TArray<AActor*>& InTargetActors, UFortAIAssignmentSettings* InAssignmentSettings, FEncounterEnvironmentQueryInfo InOverrideEnvironmentQueryInfo, AActor* InOptionalQueryActor, FGameplayTagContainer InInjectedTags, FFortEncounterSettings InEncounterSettings, int32 ActivationDelay) {
    return NULL;
}

void UFortAIEncounterSequence::SetEncounterStartingData(const TArray<AActor*>& InTargetActors, UFortAIAssignmentSettings* InAssignmentSettings, FEncounterEnvironmentQueryInfo InOverrideEnvironmentQueryInfo, AActor* InOptionalQueryActor, FGameplayTagContainer InInjectedTags, FFortEncounterSettings InEncounterSettings) {
}

EFortEncounterSequenceResult UFortAIEncounterSequence::Previous() {
    return EFortEncounterSequenceResult::Success;
}

EFortEncounterSequenceResult UFortAIEncounterSequence::Next() {
    return EFortEncounterSequenceResult::Success;
}

EFortEncounterSequenceResult UFortAIEncounterSequence::Last() {
    return EFortEncounterSequenceResult::Success;
}

bool UFortAIEncounterSequence::IsOnFinalIndexInSequence() const {
    return false;
}

bool UFortAIEncounterSequence::HasEncounter() const {
    return false;
}

int32 UFortAIEncounterSequence::GetNumEncountersInSequence() const {
    return 0;
}

int32 UFortAIEncounterSequence::GetEncounterIndexInSequence() const {
    return 0;
}

UFortAIEncounterInfo* UFortAIEncounterSequence::GetCurrentEncounter() const {
    return NULL;
}

bool UFortAIEncounterSequence::EncounterBelongsToSequence(UFortAIEncounterInfo* InEncounter) const {
    return false;
}

UFortAIEncounterSequence::UFortAIEncounterSequence() {
    CurrentEncounterIndexInSequence = 0;
    CurrentEncounter = NULL;
    AssociatedAIDirector = NULL;
    AssociatedMission = NULL;
    AssignmentSettings = NULL;
    OptionalQueryActor = NULL;
}

