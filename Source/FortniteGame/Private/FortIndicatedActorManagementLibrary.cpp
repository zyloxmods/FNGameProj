#include "FortIndicatedActorManagementLibrary.h"
#include "Templates/SubclassOf.h"

void UFortIndicatedActorManagementLibrary::RemoveGroupFromStenciledList(AController* InstigatingController, const FString& GroupIdentifier, const bool bIncludeSquad) {
}

void UFortIndicatedActorManagementLibrary::RemoveGroupFromIndicatedList(AController* InstigatingController, const FString& GroupIdentifier, const bool bIncludeSquad) {
}

void UFortIndicatedActorManagementLibrary::RemoveActorFromStenciledList(AController* InstigatingController, AActor* StenciledActor, const bool bIncludeSquad) {
}

void UFortIndicatedActorManagementLibrary::RemoveActorFromIndicatedList(AController* InstigatingController, AActor* IndicatedActor, const bool bIncludeSquad) {
}

FStenciledActorData UFortIndicatedActorManagementLibrary::MakeStenciledActorData(const FString& GroupIdentifier, FIndicatedActorParticleSystemData ParticleSystemData, float Duration, float StepTime, EShareActorWith ShareActorWith, USoundBase* Sound, FName FriendlyStencilName, FName EnemyStencilName) {
    return FStenciledActorData{};
}

FIndicatedActorScaleAndOpacityData UFortIndicatedActorManagementLibrary::MakeIndicatedActorScaleAndOpacityData(float SmallSizeDistance, float LargestSizeDistance, float SmallScale, float LargestScale, float FarAwayScale, float FarAwayOpacity, float MaxScaleAndFadePercent) {
    return FIndicatedActorScaleAndOpacityData{};
}

FIndicatedActorParticleSystemData UFortIndicatedActorManagementLibrary::MakeIndicatedActorParticleSystemData(UParticleSystem* ParticleSystem, FName ActorParamName, FVector Offset, FVector DBNOOffset, FName VectorParamName) {
    return FIndicatedActorParticleSystemData{};
}

FIndicatedActorDataWithFilter UFortIndicatedActorManagementLibrary::MakeIndicatedActorDataWithFilter(FGameplayTagContainer IndicateActorTags, FGameplayTagQuery IndicatedActorTagQuery, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, TSubclassOf<AActor> ActorClassFilter, FIndicatedActorData IndicatedActorData, FStenciledActorData StenciledActorData, float OverlapRadius) {
    return FIndicatedActorDataWithFilter{};
}

FIndicatedActorData UFortIndicatedActorManagementLibrary::MakeIndicatedActorData(const FString& GroupIdentifier, FIndicatedActorScaleAndOpacityData ScaleAndOpacityData, FIndicatedActorParticleSystemData ParticleSystemData, float Duration, float StepTime, FVector IndicatorOffset, EShareActorWith ShareActorWith, bool bClampToScreen, USoundBase* Sound, EIndicatorStateImage StateImageOverride) {
    return FIndicatedActorData{};
}

void UFortIndicatedActorManagementLibrary::AddActorsToStenciledList(AController* InstigatingController, TArray<AActor*> StenciledActors, FStenciledActorData StenciledActorData, const bool bAddAsUnique, const bool bReplaceExistingEntry) {
}

void UFortIndicatedActorManagementLibrary::AddActorsToIndicatedList(AController* InstigatingController, TArray<AActor*> IndicatedActors, FIndicatedActorData IndicatedActorData, const bool bAddAsUnique, const bool bAllowOwningPlayer, const bool bReplaceExistingEntry) {
}

void UFortIndicatedActorManagementLibrary::AddActorsInRadiusToStenciledList(AController* InstigatingController, TArray<FIndicatedActorDataWithFilter> StenciledActorFilterDatas, const bool bAddAsUnique, const bool bReplaceExistingEntry) {
}

void UFortIndicatedActorManagementLibrary::AddActorsInRadiusToIndicatedList(AController* InstigatingController, TArray<FIndicatedActorDataWithFilter> IndicatedActorFilterDatas, const bool bAddAsUnique, const bool bReplaceExistingEntry) {
}

UFortIndicatedActorManagementLibrary::UFortIndicatedActorManagementLibrary() {
}

