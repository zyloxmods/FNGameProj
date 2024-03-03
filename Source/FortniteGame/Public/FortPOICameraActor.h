#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "GameplayTagContainer.h"
#include "FortPOICameraActor.generated.h"

UCLASS(Blueprintable)
class AFortPOICameraActor : public ACameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag POITag;
    
public:
    AFortPOICameraActor();
};

