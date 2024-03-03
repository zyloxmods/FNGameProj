#pragma once
#include "CoreMinimal.h"
#include "FortItemPreviewActor.h"
#include "FortItemPreviewSingleAngleActor.generated.h"

class UCameraComponent;

UCLASS(Blueprintable)
class AFortItemPreviewSingleAngleActor : public AFortItemPreviewActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedOutCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* ZoomedInCameraComponent;
    
public:
    AFortItemPreviewSingleAngleActor();
};

