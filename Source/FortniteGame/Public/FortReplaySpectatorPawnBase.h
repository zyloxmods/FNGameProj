#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "Styling/SlateBrush.h"
#include "FortReplaySpectatorPawnBase.generated.h"

class UFortSpectatorCameraComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortReplaySpectatorPawnBase : public ASpectatorPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSpectatorCameraComponent* SpectatorCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MiniMapIconBrush;
    
public:
    AFortReplaySpectatorPawnBase();
};

