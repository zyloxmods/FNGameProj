#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_SocialInspector.generated.h"

class AFortPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_SocialInspector : public UFortControllerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerState* CurrentSocialInspectTarget;
    
public:
    UFortControllerComponent_SocialInspector();
};

