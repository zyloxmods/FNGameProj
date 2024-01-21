#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaIndicatorLayerBase.generated.h"

class AFortPlayerStateAthena;
class UAthenaPlayerIndicatorBase;
class UAthenaPlayerViewModel;
class UFortActorCanvas;
class USlateVectorArtData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaIndicatorLayerBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActorCanvas* GeneralIndicators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAthenaPlayerIndicatorBase*> PlayerIndicators;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaPlayerViewModel* PlayerVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateVectorArtData* TeamIndicatorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasTargeting;
    
public:
    UAthenaIndicatorLayerBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDataSource(UAthenaPlayerViewModel* PlayerViewModel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayersWithNameIndicatorsChanged(const TArray<AFortPlayerStateAthena*>& PlayerStates);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetingChanged(bool bTargeting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAthenaPlayerViewModel* GetPlayerViewModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AFortPlayerStateAthena*> GetNameIndicatedPlayers() const;
    
};

