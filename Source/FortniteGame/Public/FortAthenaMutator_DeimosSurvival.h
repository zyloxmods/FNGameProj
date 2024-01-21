#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AthenaGameMessageData.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_EQSProviderInterface.h"
#include "FortAthenaMutator_SurvivalObjectiveData.h"
#include "FortAthenaMutator_DeimosSurvival.generated.h"

class AActor;
class AController;
class UEnvQuery;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AFortAthenaMutator_DeimosSurvival : public AFortAthenaMutator, public IFortAthenaMutator_EQSProviderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEnvQuery> AdjustSafezoneCentersQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAthenaMutator_SurvivalObjectiveData> ObjectivesData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_Intro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_CompleteObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_DownTime;
    
public:
    AFortAthenaMutator_DeimosSurvival();
    UFUNCTION(BlueprintCallable)
    void OnSafezoneChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnPlaylistDataLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContainerTag);
    
    UFUNCTION(BlueprintCallable)
    void OnBuildingActorDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    
    // Fix for true pure virtual functions not being implemented
};

