#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EFortEncounterSequenceResult.h"
#include "EncounterEnvironmentQueryInfo.h"
#include "FortEncounterSettings.h"
#include "FortGeneratedEncounterSequence.h"
#include "FortAIEncounterSequence.generated.h"

class AActor;
class AFortAIDirector;
class AFortMission;
class UFortAIAssignmentSettings;
class UFortAIEncounterInfo;

UCLASS(Blueprintable)
class UFortAIEncounterSequence : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGeneratedEncounterSequence GeneratedEncounterSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentEncounterIndexInSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIEncounterInfo* CurrentEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAIDirector* AssociatedAIDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortMission* AssociatedMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TargetActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIAssignmentSettings* AssignmentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterEnvironmentQueryInfo OverrideEnvironmentQueryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OptionalQueryActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InjectedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterSettings EncounterSettings;
    
public:
    UFortAIEncounterSequence();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopCurrentEncounter();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UFortAIEncounterInfo* StartCurrentEncounterWithSavedData(EFortEncounterSequenceResult& OutRequestResult, int32 ActivationDelay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UFortAIEncounterInfo* StartCurrentEncounter(EFortEncounterSequenceResult& OutRequestResult, const TArray<AActor*>& InTargetActors, UFortAIAssignmentSettings* InAssignmentSettings, FEncounterEnvironmentQueryInfo InOverrideEnvironmentQueryInfo, AActor* InOptionalQueryActor, FGameplayTagContainer InInjectedTags, FFortEncounterSettings InEncounterSettings, int32 ActivationDelay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetEncounterStartingData(const TArray<AActor*>& InTargetActors, UFortAIAssignmentSettings* InAssignmentSettings, FEncounterEnvironmentQueryInfo InOverrideEnvironmentQueryInfo, AActor* InOptionalQueryActor, FGameplayTagContainer InInjectedTags, FFortEncounterSettings InEncounterSettings);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    EFortEncounterSequenceResult Previous();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    EFortEncounterSequenceResult Next();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    EFortEncounterSequenceResult Last();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsOnFinalIndexInSequence() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool HasEncounter() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetNumEncountersInSequence() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetEncounterIndexInSequence() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    UFortAIEncounterInfo* GetCurrentEncounter() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool EncounterBelongsToSequence(UFortAIEncounterInfo* InEncounter) const;
    
};

