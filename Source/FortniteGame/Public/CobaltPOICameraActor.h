#pragma once
#include "CoreMinimal.h"
#include "FortPOICameraActor.h"
#include "CobaltPOICameraActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ACobaltPOICameraActor : public AFortPOICameraActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TranslationSceneComponent;
    
public:
    ACobaltPOICameraActor();
};

