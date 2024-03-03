#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "FortPlayerDeathReport.h"
#include "IndicatedActorData.h"
#include "IndicatedActorInfoArray.h"
#include "StenciledActorData.h"
#include "StenciledActorInfoArray.h"
#include "FortControllerComponent_IndicatedActorManagement.generated.h"

class AActor;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_IndicatedActorManagement : public UFortControllerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IndicatedActorList, meta=(AllowPrivateAccess=true))
    FIndicatedActorInfoArray IndicatedActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StenciledActorList, meta=(AllowPrivateAccess=true))
    FStenciledActorInfoArray StenciledActorList;
    
public:
    UFortControllerComponent_IndicatedActorManagement();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RemoveGroupFromStenciledList(const FString& GroupIdentifier, const bool bIncludeSquad);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGroupFromIndicatedList(const FString& GroupIdentifier, const bool bIncludeSquad);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorFromStenciledList(AActor* StenciledActor, const bool bIncludeSquad);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorFromIndicatedList(AActor* IndicatedActor, const bool bIncludeSquad);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StenciledActorList();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IndicatedActorList();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHardCoreBeaconPlayerPawnPossessed(APawn* PossessedPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnHardCoreBeaconPlayerPawnDied(const FFortPlayerDeathReport& DeathReport);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddActorsToStenciledList(TArray<AActor*>& StenciledActors, FStenciledActorData Data, const bool bAddAsUnique, const bool bReplaceExistingEntry);
    
    UFUNCTION(BlueprintCallable)
    void AddActorsToIndicatedList(TArray<AActor*>& IndicatedActors, FIndicatedActorData Data, const bool bAddAsUnique, const bool bAllowOwningPlayer, const bool bReplaceExistingEntry);
    
};

