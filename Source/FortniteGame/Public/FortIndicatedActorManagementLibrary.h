#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIndicatorStateImage.h"
#include "EShareActorWith.h"
#include "IndicatedActorData.h"
#include "IndicatedActorDataWithFilter.h"
#include "IndicatedActorParticleSystemData.h"
#include "IndicatedActorScaleAndOpacityData.h"
#include "StenciledActorData.h"
#include "Templates/SubclassOf.h"
#include "FortIndicatedActorManagementLibrary.generated.h"

class AActor;
class AController;
class UParticleSystem;
class USoundBase;

UCLASS(Blueprintable)
class UFortIndicatedActorManagementLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortIndicatedActorManagementLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveGroupFromStenciledList(AController* InstigatingController, const FString& GroupIdentifier, const bool bIncludeSquad);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveGroupFromIndicatedList(AController* InstigatingController, const FString& GroupIdentifier, const bool bIncludeSquad);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveActorFromStenciledList(AController* InstigatingController, AActor* StenciledActor, const bool bIncludeSquad);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void RemoveActorFromIndicatedList(AController* InstigatingController, AActor* IndicatedActor, const bool bIncludeSquad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FStenciledActorData MakeStenciledActorData(const FString& GroupIdentifier, FIndicatedActorParticleSystemData ParticleSystemData, float Duration, float StepTime, EShareActorWith ShareActorWith, USoundBase* Sound, FName FriendlyStencilName, FName EnemyStencilName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIndicatedActorScaleAndOpacityData MakeIndicatedActorScaleAndOpacityData(float SmallSizeDistance, float LargestSizeDistance, float SmallScale, float LargestScale, float FarAwayScale, float FarAwayOpacity, float MaxScaleAndFadePercent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIndicatedActorParticleSystemData MakeIndicatedActorParticleSystemData(UParticleSystem* ParticleSystem, FName ActorParamName, FVector Offset, FVector DBNOOffset, FName VectorParamName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIndicatedActorDataWithFilter MakeIndicatedActorDataWithFilter(FGameplayTagContainer IndicateActorTags, FGameplayTagQuery IndicatedActorTagQuery, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, TSubclassOf<AActor> ActorClassFilter, FIndicatedActorData IndicatedActorData, FStenciledActorData StenciledActorData, float OverlapRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIndicatedActorData MakeIndicatedActorData(const FString& GroupIdentifier, FIndicatedActorScaleAndOpacityData ScaleAndOpacityData, FIndicatedActorParticleSystemData ParticleSystemData, float Duration, float StepTime, FVector IndicatorOffset, EShareActorWith ShareActorWith, bool bClampToScreen, USoundBase* Sound, EIndicatorStateImage StateImageOverride);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AddActorsToStenciledList(AController* InstigatingController, TArray<AActor*> StenciledActors, FStenciledActorData StenciledActorData, const bool bAddAsUnique, const bool bReplaceExistingEntry);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AddActorsToIndicatedList(AController* InstigatingController, TArray<AActor*> IndicatedActors, FIndicatedActorData IndicatedActorData, const bool bAddAsUnique, const bool bAllowOwningPlayer, const bool bReplaceExistingEntry);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AddActorsInRadiusToStenciledList(AController* InstigatingController, TArray<FIndicatedActorDataWithFilter> StenciledActorFilterDatas, const bool bAddAsUnique, const bool bReplaceExistingEntry);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AddActorsInRadiusToIndicatedList(AController* InstigatingController, TArray<FIndicatedActorDataWithFilter> IndicatedActorFilterDatas, const bool bAddAsUnique, const bool bReplaceExistingEntry);
    
};

