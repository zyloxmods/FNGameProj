#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaTutorialBase.h"
#include "FortAthenaTutorial_Look.generated.h"

class AActor;

UCLASS(Blueprintable)
class AFortAthenaTutorial_Look : public AFortAthenaTutorialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LookMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* StartArrowsActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HUDContainerTag;
    
public:
    AFortAthenaTutorial_Look();
private:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
};

