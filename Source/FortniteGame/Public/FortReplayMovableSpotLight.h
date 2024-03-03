#pragma once
#include "CoreMinimal.h"
#include "FortReplaySpectatorPawnBase.h"
#include "FortReplayMovableSpotLight.generated.h"

class USpotLightComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortReplayMovableSpotLight : public AFortReplaySpectatorPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* SpotLightComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugDraw;
    
    AFortReplayMovableSpotLight();
};

