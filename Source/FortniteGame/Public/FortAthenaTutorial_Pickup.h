#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaTutorialBase.h"
#include "FortAthenaTutorial_Pickup.generated.h"

class AFortAthenaTutorialMarker;
class AFortStaticMeshActor;

UCLASS(Blueprintable)
class AFortAthenaTutorial_Pickup : public AFortAthenaTutorialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaTutorialMarker* GunsMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortStaticMeshActor* BlockerCollect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GunToPickUpTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag QuickbarTag;
    
    AFortAthenaTutorial_Pickup();
};

